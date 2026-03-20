#include <stdio.h>

#define PLAYERS 2

// 🎳 점수판 출력 (X, /, -)
void printScoreBoard(int rolls[])
{
    int index = 0;

    printf("점수판: ");

    for (int frame = 0; frame < 10; frame++)
    {
        if (rolls[index] == 10)
        {
            printf("[ X ] ");
            index++;
        }
        else
        {
            int first = rolls[index];
            int second = rolls[index + 1];

            printf("[ ");

            if (first == 0) printf("-");
            else printf("%d", first);

            printf(" ");

            if (first + second == 10) printf("/");
            else if (second == 0) printf("-");
            else printf("%d", second);

            printf(" ] ");

            index += 2;
        }
    }

    printf("\n");
}

// 🧮 프레임별 누적 점수 계산
void calculateFrameScores(int rolls[], int frameScores[])
{
    int score = 0;
    int index = 0;

    for (int frame = 0; frame < 10; frame++)
    {
        if (rolls[index] == 10)
        {
            score += 10 + rolls[index + 1] + rolls[index + 2];
            frameScores[frame] = score;
            index++;
        }
        else if (rolls[index] + rolls[index + 1] == 10)
        {
            score += 10 + rolls[index + 2];
            frameScores[frame] = score;
            index += 2;
        }
        else
        {
            score += rolls[index] + rolls[index + 1];
            frameScores[frame] = score;
            index += 2;
        }
    }
}

// 📊 전체 점수판 (누적 포함)
void printFullScoreBoard(int rolls[])
{
    int frameScores[10] = {0};

    printScoreBoard(rolls);
    calculateFrameScores(rolls, frameScores);

    printf("누적:   ");

    for (int i = 0; i < 10; i++)
    {
        if (frameScores[i] == 0)
            printf("[   ] ");
        else
            printf("[%3d] ", frameScores[i]);
    }

    printf("\n");
}

// 🧮 총점 계산
int calculateScore(int rolls[])
{
    int score = 0;
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        if (rolls[index] == 10)
        {
            score += 10 + rolls[index + 1] + rolls[index + 2];
            index++;
        }
        else if (rolls[index] + rolls[index + 1] == 10)
        {
            score += 10 + rolls[index + 2];
            index += 2;
        }
        else
        {
            score += rolls[index] + rolls[index + 1];
            index += 2;
        }
    }

    return score;
}

int main(void)
{
    char names[PLAYERS][20];
    int rolls[PLAYERS][21] = {0};
    int rollIndex[PLAYERS] = {0};

    // 👤 이름 입력
    for (int p = 0; p < PLAYERS; p++)
    {
        printf("플레이어 %d 이름: ", p + 1);
        scanf("%s", names[p]);
    }

    // 🎳 프레임 진행
    for (int frame = 1; frame <= 10; frame++)
    {
        printf("\n======== %d 프레임 ========\n", frame);

        for (int p = 0; p < PLAYERS; p++)
        {
            printf("\n-- %s의 차례 --\n", names[p]);

            int idx = rollIndex[p];

            // 첫 번째 투구
            printf("첫 번째 투구: ");
            scanf("%d", &rolls[p][idx]);

            // 🎳 스트라이크
            if (rolls[p][idx] == 10 && frame != 10)
            {
                printf("스트라이크!\n");
                rollIndex[p]++;
            }
            else
            {
                rollIndex[p]++;

                // 두 번째 투구
                printf("두 번째 투구: ");
                scanf("%d", &rolls[p][rollIndex[p]]);

                while (rolls[p][rollIndex[p] - 1] + rolls[p][rollIndex[p]] > 10)
                {
                    printf("다시 입력: ");
                    scanf("%d", &rolls[p][rollIndex[p]]);
                }

                // 🎳 10프레임 보너스
                if (frame == 10)
                {
                    if (rolls[p][rollIndex[p] - 1] == 10 ||
                        rolls[p][rollIndex[p] - 1] + rolls[p][rollIndex[p]] == 10)
                    {
                        rollIndex[p]++;
                        printf("보너스 투구: ");
                        scanf("%d", &rolls[p][rollIndex[p]]);
                    }
                }

                rollIndex[p]++;
            }

            // 📊 실시간 점수판
            printf("\n[%s 현재 점수판]\n", names[p]);
            printFullScoreBoard(rolls[p]);
        }
    }

    // 🎉 최종 결과
    printf("\n===== 최종 결과 =====\n");

    int scores[PLAYERS];

    for (int p = 0; p < PLAYERS; p++)
    {
        scores[p] = calculateScore(rolls[p]);
        printf("%s: %d점\n", names[p], scores[p]);
    }

    // 🏆 승자 판별
    if (scores[0] > scores[1])
    {
        printf("\n🏆 승자: %s!\n", names[0]);
    }
    else if (scores[0] < scores[1])
    {
        printf("\n🏆 승자: %s!\n", names[1]);
    }
    else
    {
        printf("\n🤝 무승부!\n");
    }

    return 0;
}