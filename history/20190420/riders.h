/*
 * =====================================================================================
 *
 *       Filename:  riders.h
 *
 *    Description:  用户名单预置表
 *
 *        Version:  1.0
 *        Created:  2018年12月17日 12时40分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "global.h"
#define _PATH_START		"/home/pi/autoresult_nespi_001.txt"
#define _PATH_END		"/home/pi/end_result_superpi_002.txt"

HIBPRiderInfo riders[] = {
    {1,     "楼文钧                      ", "假日单车山地队                           ",             EBIKE },
    {2,     "章子俊                      ", "石舌章队                                 ",             EBIKE },
    {3,     "刘卓                        ", "虬龙科技                                 ",             EBIKE },
    {4,     "姜波                        ", "轻蜂摩嗨                                 ",             EBIKE },
    {5,     "姚路                        ", "轻蜂                                     ",             EBIKE },
    {6,     "王蒙                        ", "杭州Trek                                 ",             EBIKE },
    {7,     "仰海龙                      ", "蛟龙                                     ",             EBIKE },
    {101,   "雷星                        ", "HangZhou Giant Racing                    ",             MAN   },
    {102,   "吴超                        ", "长沙顺时针车队                           ",             MAN   },
    {103,   "周小焜                      ", "长沙CYCGO速行俱乐部                      ",             MAN   },
    {104,   "唐梦麒                      ", "北京GDR Racing Team                      ",             MAN   },
    {105,   "肖聪                        ", "北京GDR Racing Team                      ",             MAN   },
    {106,   "周吉强                      ", "假日单车山地队                           ",             MAN   },
    {107,   "黄立观                      ", "个人                                     ",             MAN   },
    {108,   "梅雨龙                      ", "假日单车山地队                           ",             MAN   },
    {109,   "马琰                        ", "假日单车山地队                           ",             MAN   },
    {110,   "孙祺龙                      ", "假日单车山地队                           ",             MAN   },
    {111,   "杜芳旭                      ", "CYCGO速行车队 兼长沙迪卡侬旗舰店运动大使 ",             MAN   },
    {112,   "林泽栋                      ", "深圳后山速降车队                         ",             MAN   },
    {113,   "宗朝贤                      ", "个人                                     ",             MAN   },
    {114,   "俞斌                        ", "鬼魅仔车队                               ",             MAN   },
    {115,   "金鑫越                      ", "上虞跳跳驴                               ",             MAN   },
    {116,   "杨琦                        ", "能量单车                                 ",             MAN   },
    {117,   "黄选锦                      ", "骑行家                                   ",             MAN   },
    {118,   "Baillod Yves Laurent Gabriel", "上海魅力单车                             ",             MAN   },
    {119,   "Anton Chalov                ", "Team Fuzzy Balls                         ",             MAN   }, 
    {120,   "Erik                        ", "Team Fuzzy Balls                         ",             MAN   }, 
    {121,   "Jethro Kang                 ", "Rehau                                    ",             MAN   }, 
    {122,   "黄俊熙                      ", "长沙半小时车队                           ",             MAN   },
    {123,   "谭钊                        ", "长沙半小时车队                           ",             MAN   },
    {124,   "洪辉熊                      ", "长沙半小时车队                           ",             MAN   },
    {125,   "周王忍                      ", "长沙半小时车队                           ",             MAN   },
    {126,   "徐鑫                        ", "长沙半小时车队                           ",             MAN   },
    {127,   "欧阳一茗                    ", "长沙半小时车队                           ",             MAN   },
    {128,   "张鹤龄                      ", "长沙CYCGO速行俱乐部                      ",             MAN   },
    {129,   "李祖彜/Barry Lee            ", "西虹试飞客队                             ",             MAN   },
    {130,   "邓科                        ", "西虹试飞客队                             ",             MAN   },
    {131,   "黄浩                        ", "天空穿越车队                             ",             MAN   },
    {132,   "周鹰                        ", "天空穿越车队                             ",             MAN   },
    {133,   "黄乐                        ", "天空穿越车队                             ",             MAN   },
    {134,   "许中柱                      ", "天空穿越车队                             ",             MAN   },
    {135,   "李俊                        ", "天空穿越车队                             ",             MAN   },
    {136,   "王舒                        ", "上海魅力单车                             ",             MAN   },
    {137,   "马凌轩                      ", "上海魅力单车                             ",             MAN   },
    {138,   "彭先元                      ", "上海魅力单车                             ",             MAN   },
    {139,   "许皓                        ", "上海魅力单车                             ",             MAN   },
    {140,   "罗磊                        ", "蓝色单车                                 ",             MAN   },
    {141,   "周智文                      ", "蓝色单车                                 ",             MAN   },
    {142,   "陈南剑                      ", "蜗牛队                                   ",             MAN   },
    {143,   "张代行                      ", "蜗牛队                                   ",             MAN   },
    {144,   "喻杰                        ", "HangZhou Giant                           ",             MAN   },
    {145,   "马力                        ", "漫奇车队                                 ",             MAN   },
    {146,   "王宇                        ", "个人                                     ",             MAN   },
    {147,   "常容涛                      ", "mcc club                                 ",             MAN   },
    {148,   "王国栋                      ", "Byron                                    ",             MAN   },
    {149,   "应明浩                      ", "HIBP                                     ",             MAN   },
    {150,   "叶万达                      ", "鬼魅仔车队                               ",             MAN   },
    {201,   "浦慧菁                      ", "能量单车                                 ",             WOMAN },
    {202,   "陈海玲                      ", "能量单车                                 ",             WOMAN },
    {301,   "张洪豪                      ", "个人                                     ",             TASTE }, 
    {302,   "窦安强                      ", "上海魅力单车                             ",             TASTE }, 
    {303,   "项明                        ", "上海魅力单车                             ",             TASTE }, 
    {304,   "李程                        ", "省直机关自行车队                         ",             TASTE }, 
    {401,   "骆沙舟                      ", "假日单车山地队                           ",             MASTER},
    {402,   "王杜                        ", "天空穿越车队                             ",             MASTER},
    {403,   "陈海川                      ", "西虹试飞客队                             ",             MASTER},
    {404,   "高一洋                      ", "上海魅力单车                             ",             MASTER},
    {405,   "戴乐鸣                      ", "上海魅力单车                             ",             MASTER},
    {406,   "肖辉                        ", "长沙CYCGO速行俱乐                        ",             MASTER},
    {407,   "ASH/阿什                    ", "HIBP                                     ",             MASTER},
    {408,   "刘怡                        ", "省级机关自行车队                         ",             MASTER},
    {409,   "Mesum Verma                 ", "mtbmagasia                               ",             MASTER}, 
    {410,   "Peter Grogan                ", "Independent                              ",             MASTER}, 
    {411,   "Ian Douglas-Jones           ", "Team Fuzzy Balls                         ",             MASTER}, 
    {412,   "Mathieu                     ", "Team Fuzzy Balls                         ",             MASTER}, 
    {413,   "ian legend                  ", "Team Fuzzy Balls                         ",             MASTER}, 
    {414,   "Johannes                    ", "Team Fuzzy Balls                         ",             MASTER}, 
    {415,   "Andreas                     ", "Team Fuzzy Balls                         ",             MASTER}, 
    {416,   "林世忠                      ", "能量单车                                 ",             MASTER},
    {417,   "朱嘉钧                      ", "能量单车                                 ",             MASTER},
    {418,   "肖庆                        ", "上海魅力单车                             ",             MASTER},
    {419,   "彭惟礼                      ", "上海魅力单车                             ",             MASTER},
    {420,   "严俊                        ", "上海魅力单车                             ",             MASTER},
    {421,   "赵翔                        ", "上海魅力单车                             ",             MASTER},
    {422,   "周辰烨                      ", "上海魅力单车                             ",             MASTER},
    {423,   "唐陈                        ", "上海魅力单车                             ",             MASTER},
    {424,   "朱陈华                      ", "上海魅力单车                             ",             MASTER},
    {425,   "徐煜寰                      ", "上海魅力单车                             ",             MASTER},
    {426,   "周炅闻                      ", "天空穿越车队                             ",             MASTER},
    {427,   "谢东珂                      ", "天空穿越车队                             ",             MASTER},
    {428,   "夏永照                      ", "西虹试飞客队                             ",             MASTER},
    {429,   "林正峯                      ", "西虹试飞客队                             ",             MASTER},
    {430,   "宋舒波                      ", "假日单车山地队                           ",             MASTER},
    {431,   "范旻                        ", "省级机关自行车队                         ",             MASTER},
    {432,   "沈振亮                      ", "能量单车                                 ",             MASTER},
    {433,   "孙卫红                      ", "个人                                     ",             MASTER},
    {434,   "陈黎升                      ", "鬼魅仔车队                               ",             MASTER},
    {435,   "Woon Hon Siong              ", "鬼魅仔车队                               ",             MASTER},
    {436,   "吴双                        ", "假日单车山地队                           ",             MASTER},
};
