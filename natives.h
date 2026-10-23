#include "invoker.h"

static void WAIT(int ms) { invoke<Void>(0x2224A20, ms); } // 0x4EDE34FBADD967A6
static int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0x2224D50, scriptName, stackSize); } // 0xE81651AD79516E48
static int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0x2224F20, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1
static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0x2224F60, scriptHash, stackSize); } // 0xEB1C67C3A5333A92
static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0x2224FD0, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78
static int TIMERA() { return invoke<int>(0x22263A0); } // 0x83666F9FB8FEBD4B
static int TIMERB() { return invoke<int>(0x22263C0); } // 0xC9D9444186B5A374
static void SETTIMERA(int value) { invoke<Void>(0x22263E0, value); } // 0xC1B1E9A034A63A62
static void SETTIMERB(int value) { invoke<Void>(0x2226410, value); } // 0x5AE11BC36633DE4E
static float TIMESTEP() { return invoke<float>(0x2226440); } // 0x0000000050597EE2
static float SIN(float value) { return invoke<float>(0x2226460, value); } // 0x0BADBFA3B172435F
static float COS(float value) { return invoke<float>(0x2226490, value); } // 0xD0FFB162F40A139C
static float SQRT(float value) { return invoke<float>(0x22264D0, value); } // 0x71D93B57D07F9804
static float POW(float base, float exponent) { return invoke<float>(0x22264F0, base, exponent); } // 0xE3621CC40F31FE2E
static float LOG10(float value) { return invoke<float>(0x2226520, value); } // 0xE816E655DE37FE20
static float VMAG(float x, float y, float z) { return invoke<float>(0x2226550, x, y, z); } // 0x652D2EEEF1D3E62C
static float VMAG2(float x, float y, float z) { return invoke<float>(0x2226590, x, y, z); } // 0xA8CEACB4F35AE058
static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x22265C0, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5
static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2226610, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47
static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0x2226650, value, bitShift); } // 0xEDD95A39E5544DE8
static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x2226670, value, bitShift); } // 0x97EF1E5BCE9DC075
static int FLOOR(float value) { return invoke<int>(0x2226690, value); } // 0xF34EE736CF047844
static int CEIL(float value) { return invoke<int>(0x22266B0, value); } // 0x11E019C8F43ACC8A
static int ROUND(float value) { return invoke<int>(0x22266D0, value); } // 0xF2DB717A73826179
static float TO_FLOAT(int value) { return invoke<float>(0x22266F0, value); } // 0xBBDA792448DB5A89
static void SET_THIS_THREAD_PRIORITY(int priority) { invoke<Void>(0x2226700, priority); } // 0x42B65DEEF2EDF2A1
static BOOL APP_DATA_VALID() { return invoke<BOOL>(0xD7A8D0); } // 0xEF61EA953D7D9120
static int APP_GET_INT(const char* property) { return invoke<int>(0xD7A8F0, property); } // 0x817F2264835EDDBC
static float APP_GET_FLOAT(const char* property) { return invoke<float>(0xD7A9B0, property); } // 0x24F333D2B21DC3EC
static const char* APP_GET_STRING(const char* property) { return invoke<const char*>(0xD7AA80, property); } // 0x9C05D47937B35A7C
static void APP_SET_INT(const char* property, int value) { invoke<Void>(0xD7AB50, property, value); } // 0xB0263DDA967C39ED
static void APP_SET_FLOAT(const char* property, float value) { invoke<Void>(0xD7AB60, property, value); } // 0x177034FB2F5D6CA1
static void APP_SET_STRING(const char* property, const char* value) { invoke<Void>(0xD7AB80, property, value); } // 0x792060B1E40FC4C2
static void APP_SET_APP(const char* appName) { invoke<Void>(0xD7AB90, appName); } // 0x6E3671ABA19358C3
static void APP_SET_BLOCK(const char* blockName) { invoke<Void>(0xD7AC70, blockName); } // 0x1E0C7CB82F66748E
static void APP_CLEAR_BLOCK() { invoke<Void>(0xD7ACC0); } // 0xE231BAAA0221F57B
static void APP_CLOSE_APP() { invoke<Void>(0xD7AD20); } // 0x2A160FB19DDAA9B3
static void APP_CLOSE_BLOCK() { invoke<Void>(0xD7AD60); } // 0x43183279AE613B06
static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xD7ADC0); } // 0x71EAA0F7384D1969
static BOOL APP_HAS_SYNCED_DATA(const char* appName) { return invoke<BOOL>(0xD7ADE0, appName); } // 0xAEC6A486BE509E01
static void APP_SAVE_DATA() { invoke<Void>(0xD7AE20); } // 0x16AA4E3C2A093DD0
static int APP_GET_DELETED_FILE_STATUS() { return invoke<int>(0xD7AE40); } // 0x898EDBE06F676B56
static BOOL APP_DELETE_APP_DATA(const char* appName) { return invoke<BOOL>(0xD7AE60, appName); } // 0xC88197BB8F2056FE
static void PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0xD82850, ringtoneName, ped, p2); } // 0x1BC60757AC20ACCF
static BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return invoke<BOOL>(0xD82870, ped); } // 0x129DE7ED6456C4CA
static void STOP_PED_RINGTONE(Ped ped) { invoke<Void>(0xD828E0, ped); } // 0x92187CF73A8D1B96
static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xD82930); } // 0xE87F28FD4128D063
static BOOL IS_MOBILE_INTERFERENCE_ACTIVE() { return invoke<BOOL>(0xD82970); } // 0x56D84C8BC3CE3EF9
static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xD829E0); } // 0x4C2ADBAAF83DA56A
static void ADD_LINE_TO_CONVERSATION(int index, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0xD82A00, index, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC401B1960D35A6C4
static void ADD_PED_TO_CONVERSATION(int index, Ped ped, const char* p2) { invoke<Void>(0xD82AF0, index, ped, p2); } // 0x302B7D91564CDE7F
static void SET_POSITION_FOR_NULL_CONV_PED(Any p0, float p1, float p2, float p3) { invoke<Void>(0xD82B70, p0, p1, p2, p3); } // 0x353876FDDC0D0E0E
static void SET_ENTITY_FOR_NULL_CONV_PED(int p0, Entity entity) { invoke<Void>(0xD82BE0, p0, entity); } // 0x34F5E7395D31DAD7
static void SET_MICROPHONE_POSITION(BOOL toggle, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0xD82C40, toggle, x1, y1, z1, x2, y2, z2, x3, y3, z3); } // 0x6250F3FAA1D0F93E
static void SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(BOOL p0) { invoke<Void>(0xD82D30, p0); } // 0x6CBE32FD4ABF9B73
static void SET_CONVERSATION_AUDIO_PLACEHOLDER(BOOL p0) { invoke<Void>(0xD82D50, p0); } // 0xC5C39679B6570380
static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xD82D70, p0, p1); } // 0xABC27367E50604B7
static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xD82DC0, p0, p1); } // 0x4FF8DE2B4C376BE4
static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD82E10, p0, p1, p2, p3); } // 0xA406335199BF1001
static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD82E70, p0, p1, p2, p3); } // 0x4082E7EF621D1686
static void START_PRELOADED_CONVERSATION() { invoke<Void>(0xD82ED0); } // 0x43D69D4AAC59FA8E
static BOOL GET_IS_PRELOADED_CONVERSATION_READY() { return invoke<BOOL>(0xD82EF0); } // 0x22258A5EB34183DC
static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xD82F20); } // 0x1F9EB85925C3ECD7
static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xD82F60); } // 0xF7C641B5F6AF0A82
static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0xD82F90); } // 0xE7365CC791D1E4EB
static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0xD82FC0, p0); } // 0xF329B991CDE087C7
static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xD82FF0); } // 0xC78B293A5F4EACF9
static int STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<int>(0xD83010, p0); } // 0x0F15249D24BC5ADA
static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0xD83040); } // 0x329FFB0BB004FDEE
static void INTERRUPT_CONVERSATION(Ped ped, const char* voiceline, const char* speaker) { invoke<Void>(0xD83050, ped, voiceline, speaker); } // 0x695EDD4AD352F831
static void INTERRUPT_CONVERSATION_AND_PAUSE(Ped ped, const char* p1, const char* speaker) { invoke<Void>(0xD830D0, ped, p1, speaker); } // 0xEEC6E2199CA0A2FC
static int GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(Any* p0) { return invoke<int>(0xD83150, p0); } // 0xC0B57599F426855E
static void SET_NO_DUCKING_FOR_CONVERSATION(BOOL p0) { invoke<Void>(0xD831B0, p0); } // 0x8B3770418CACFABE
static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<Void>(0xD831D0, p0); } // 0x8E1F26D6742EC167
static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0xD831E0); } // 0x6CC88053C1AF072D
static BOOL REQUEST_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD831F0, audioBank, p1, p2); } // 0xE60D329593E7759D
static BOOL REQUEST_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD83230, audioBank, p1, p2); } // 0x91476A70AA1CB09A
static BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD83270, audioBank, p1, p2); } // 0xD7E1DF759CD0FFF2
static BOOL HINT_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD832B0, audioBank, p1, p2); } // 0x329F5E069BAF8209
static BOOL HINT_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD832D0, audioBank, p1, p2); } // 0x69600B337BEBDC69
static BOOL HINT_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD832F0, audioBank, p1, p2); } // 0x533FC7490FC4937D
static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xD83310); } // 0xAF648ACD10AB3A0F
static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xD83320); } // 0x37EFCB45A4F13EB5
static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0xD83330, audioBank); } // 0x48FA483FE4F18CFE
static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0xD83350); } // 0x59E2E0637E7776F3
static void UNHINT_AMBIENT_AUDIO_BANK() { invoke<Void>(0xD83360); } // 0x3A2C09DEA2F7A5FB
static void UNHINT_SCRIPT_AUDIO_BANK() { invoke<Void>(0xD83370); } // 0xC0BE3854AFD77802
static void UNHINT_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0xD83380, audioBank); } // 0x9F7EBAD31811A31E
static int GET_SOUND_ID() { return invoke<int>(0xD833A0); } // 0xCA369FBC0DE29517
static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0xD833D0, soundId); } // 0x394AFAC073E1F277
static void PLAY_SOUND(int soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0xD833F0, soundId, audioName, audioRef, p3, p4, p5); } // 0x85E83A170EF61477
static void PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) { invoke<Void>(0xD83430, soundId, audioName, audioRef, p3); } // 0xBF3D28CA44F3BE2D
static void PLAY_DEFERRED_SOUND_FRONTEND(const char* soundName, const char* soundsetName) { invoke<Void>(0xD83450, soundName, soundsetName); } // 0xD35776C4668F2E8D
static void PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p5) { invoke<Void>(0xD834B0, soundId, audioName, entity, audioRef, isNetwork, p5); } // 0xBD618A73193F9982
static void PLAY_SOUND_FROM_ENTITY_HASH(int soundId, Hash model, Entity entity, Hash soundSetHash, Any p4, Any p5) { invoke<Void>(0xD83540, soundId, model, entity, soundSetHash, p4, p5); } // 0x299B36D8A0393C3E
static void PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, int range, BOOL p8) { invoke<Void>(0xD835D0, soundId, audioName, x, y, z, audioRef, isNetwork, range, p8); } // 0xF37CDE164C892195
static void UPDATE_SOUND_COORD(int soundId, float x, float y, float z) { invoke<Void>(0xD83660, soundId, x, y, z); } // 0xBE63C0B214CC5142
static void STOP_SOUND(int soundId) { invoke<Void>(0xD836D0, soundId); } // 0x8E4825CCACA34B58
static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0xD836F0, soundId); } // 0xFCF4655788628D0F
static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0xD83720, netId); } // 0x37964484C6C1561D
static void SET_VARIABLE_ON_SOUND(int soundId, const char* variable, float p2) { invoke<Void>(0xD83750, soundId, variable, p2); } // 0x3F002AA9562BF0BE
static void SET_VARIABLE_ON_STREAM(const char* variable, float p1) { invoke<Void>(0xD83770, variable, p1); } // 0x37605EDCEE5D5944
static void OVERRIDE_UNDERWATER_STREAM(const char* p0, BOOL p1) { invoke<Void>(0xD83790, p0, p1); } // 0xC9695FEF4C4A96F8
static void SET_VARIABLE_ON_UNDER_WATER_STREAM(const char* variableName, float value) { invoke<Void>(0xD837B0, variableName, value); } // 0xFFB39CC82F4E6583
static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0xD837D0, soundId); } // 0x9F0C06CFBACDD6A1
static void PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xD83800, ped, speechName, speechParam, p3); } // 0x04C016145CE6A18B
static void PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xD83820, ped, speechName, speechParam, p3); } // 0x6F0064B122E0462C
static void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Ped ped, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) { invoke<Void>(0xD83840, ped, speechName, voiceName, speechParam, p4); } // 0x4CAD907F190E6F10
static void PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(const char* speechName, const char* voiceName, float x, float y, float z, const char* speechParam) { invoke<Void>(0xD83870, speechName, voiceName, x, y, z, speechParam); } // 0xF4129180F5858D16
static void OVERRIDE_TREVOR_RAGE(const char* voiceEffect) { invoke<Void>(0xD83900, voiceEffect); } // 0xFABB7252CDD75478
static void RESET_TREVOR_RAGE() { invoke<Void>(0xD83920); } // 0xEAC3827244C8E5B5
static void SET_PLAYER_ANGRY(Ped ped, BOOL toggle) { invoke<Void>(0xD83930, ped, toggle); } // 0x892251E58BAE563B
static void PLAY_PAIN(Ped ped, int painID, int p1, Any p3) { invoke<Void>(0xD83990, ped, painID, p1, p3); } // 0xEBA2204AAD092B47
static void RELEASE_WEAPON_AUDIO() { invoke<Void>(0xD839B0); } // 0xAE5E74D6FA4EF0D8
static void ACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xD839C0, mode); } // 0xF010888FF9A380E6
static void DEACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xD83A00, mode); } // 0x5FFA5801E4084FC5
static void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { invoke<Void>(0xD83A40, ped, name); } // 0x397CF4F4C8B17365
static void SET_AMBIENT_VOICE_NAME_HASH(Ped ped, Hash hash) { invoke<Void>(0xD83AB0, ped, hash); } // 0xE0B01E3F4FF01B04
static Hash GET_AMBIENT_VOICE_NAME_HASH(Ped ped) { return invoke<Hash>(0xD83B10, ped); } // 0xD93B65D497A805BA
static void SET_PED_VOICE_FULL(Ped ped) { invoke<Void>(0xD83B70, ped); } // 0x7E30BA14928608A0
static void SET_PED_RACE_AND_VOICE_GROUP(Ped ped, int p1, Hash voiceGroup) { invoke<Void>(0xD83BD0, ped, p1, voiceGroup); } // 0xE315F38FDD0139FF
static void SET_PED_VOICE_GROUP(Ped ped, Hash voiceGroupHash) { invoke<Void>(0xD83C40, ped, voiceGroupHash); } // 0x996F4A3208DAD314
static void SET_PED_VOICE_GROUP_FROM_RACE_TO_PVG(Ped ped, Hash voiceGroupHash) { invoke<Void>(0xD83CA0, ped, voiceGroupHash); } // 0x4349438F7A83A186
static void SET_PED_GENDER(Ped ped, BOOL p1) { invoke<Void>(0xD83D30, ped, p1); } // 0xCE8A758C0ADD192B
static void STOP_CURRENT_PLAYING_SPEECH(Ped ped) { invoke<Void>(0xD83D90, ped); } // 0x16DD8628F525A206
static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { invoke<Void>(0xD83DE0, ped); } // 0xDCD95AE65EFC28CE
static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xD83E30, ped); } // 0x912159A05BE6B52E
static BOOL IS_SCRIPTED_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0xD83EA0, p0); } // 0xAD0D2187C5FE447D
static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xD83F10, ped); } // 0x75E315E7679F4F24
static BOOL IS_ANY_POSITIONAL_SPEECH_PLAYING() { return invoke<BOOL>(0xD83FA0); } // 0x101615BBD5E614BD
static BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped ped, const char* speechName, BOOL p2) { return invoke<BOOL>(0xD84000, ped, speechName, p2); } // 0x8A6F4A122DEA1DA7
static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0xD840E0, ped); } // 0x6B919BD9340E189A
static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0xD84150, ped, toggle); } // 0x8A19BA162BA1DE3E
static void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, int p1, const char* speechName) { invoke<Void>(0xD841B0, pedHandle, p1, speechName); } // 0xABFC7C2CD8D89949
static BOOL IS_ANIMAL_VOCALIZATION_PLAYING(Ped pedHandle) { return invoke<BOOL>(0xD84280, pedHandle); } // 0xA6A0FE99C58BF725
static void SET_ANIMAL_MOOD(Ped animal, int mood) { invoke<Void>(0xD842F0, animal, mood); } // 0xB66A5C25E8DCC180
static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0xD843B0); } // 0x92BAF57CC368DFC5
static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { invoke<Void>(0xD843C0, state); } // 0xFFC0556FB7074B1F
static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xD843E0); } // 0xE1799BB6E4C1CDFB
static const char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<const char*>(0xD84420); } // 0xA9CB3A11303C5801
static const char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<const char*>(0xD84450, radioStation); } // 0x9A7254C20CB82B70
static int GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0xD84490); } // 0x3BB0DC333050E9BD
static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xD844C0); } // 0xC47E3FF56898A28B
static BOOL IS_RADIO_FADED_OUT() { return invoke<BOOL>(0xD844F0); } // 0x93D3C066DE3C5879
static void SET_RADIO_RETUNE_UP() { invoke<Void>(0xD84520); } // 0x7CD8D024151C6CF9
static void SET_RADIO_RETUNE_DOWN() { invoke<Void>(0xD84540); } // 0xFB7DD2B09F9CFA1E
static void SET_RADIO_TO_STATION_NAME(const char* stationName) { invoke<Void>(0xD84560, stationName); } // 0x166878629B365828
static void SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) { invoke<Void>(0xD84580, vehicle, radioStation); } // 0x38911F7BA2D48F10
static void SET_VEH_HAS_NORMAL_RADIO(Vehicle vehicle) { invoke<Void>(0xD84620, vehicle); } // 0x678D5CE177157549
static BOOL IS_VEHICLE_RADIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xD84670, vehicle); } // 0xC052348A3DF7313F
static void SET_VEH_FORCED_RADIO_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xD846E0, vehicle); } // 0xC023C55477474DBE
static void SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation, Any p2) { invoke<Void>(0xD84730, emitterName, radioStation, p2); } // 0x74378390011ACDA4
static void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { invoke<Void>(0xD84760, emitterName, toggle); } // 0xC897319696131088
static void LINK_STATIC_EMITTER_TO_ENTITY(const char* emitterName, Entity entity) { invoke<Void>(0xD84790, emitterName, entity); } // 0xACF36914BA191DCB
static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0xD847F0, radioStation); } // 0x21880A4FCBA19269
static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { invoke<Void>(0xD84810, active); } // 0x51E3279E9437131C
static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<Void>(0xD84860, newsStory); } // 0x5A0A1BD816B9AAB5
static BOOL IS_MISSION_NEWS_STORY_UNLOCKED(int newsStory) { return invoke<BOOL>(0xD84870, newsStory); } // 0x7D01976EF2600F1C
static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0xD84890); } // 0x6E5F2B4C6A398419
static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0xD848C0, play); } // 0xB830B097D0050A2F
static void SKIP_RADIO_FORWARD() { invoke<Void>(0xD848F0); } // 0xDB57B7ED2C49BEAD
static void FREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xD84900, radioStation); } // 0x203D79229B3797AE
static void UNFREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xD84940, radioStation); } // 0xAA4A71CD7DB4FB3B
static void SET_RADIO_AUTO_UNFREEZE(BOOL toggle) { invoke<Void>(0xD84960, toggle); } // 0xF51244E6BCE779C5
static void SET_INITIAL_PLAYER_STATION(const char* radioStation) { invoke<Void>(0xD84980, radioStation); } // 0x91115A9BE4445AA6
static void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { invoke<Void>(0xD849B0, toggle); } // 0x938C85923AD6778A
static void SET_RADIO_TRACK(const char* radioStation, const char* radioTrack) { invoke<Void>(0xD84A00, radioStation, radioTrack); } // 0xE42344700E00B10F
static void SET_RADIO_TRACK_WITH_START_OFFSET(const char* radioStationName, const char* mixName, int p2) { invoke<Void>(0xD84A40, radioStationName, mixName, p2); } // 0x117ED8E568A3BE94
static void SET_NEXT_RADIO_TRACK(const char* radioName, const char* radioTrack, const char* p2, const char* p3) { invoke<Void>(0xD84A80, radioName, radioTrack, p2, p3); } // 0x709E956A8CB78CCA
static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD84AF0, vehicle, toggle); } // 0x7D167E642755C276
static BOOL CAN_VEHICLE_RECEIVE_CB_RADIO(Vehicle vehicle) { return invoke<BOOL>(0xD84B40, vehicle); } // 0x798A910E92BD7584
static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL toggle) { invoke<Void>(0xD84BC0, toggle); } // 0x048A57C4A90E9F0D
static BOOL DOES_PLAYER_VEH_HAVE_RADIO() { return invoke<BOOL>(0xD84C10); } // 0x2044128E627E0951
static BOOL IS_PLAYER_VEH_RADIO_ENABLE() { return invoke<BOOL>(0xD84C50); } // 0x28D9C88BBCC658EF
static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD84C90, vehicle, toggle); } // 0x4DC72C4B884A6C59
static void SET_POSITIONED_PLAYER_VEHICLE_RADIO_EMITTER_ENABLED(Any p0) { invoke<Void>(0xD84D00, p0); } // 0x0EECA35FE21D7026
static void SET_CUSTOM_RADIO_TRACK_LIST(const char* radioStation, const char* trackListName, BOOL p2) { invoke<Void>(0xD84D20, radioStation, trackListName, p2); } // 0xB1A857E9C5658D10
static void CLEAR_CUSTOM_RADIO_TRACK_LIST(const char* radioStation) { invoke<Void>(0xD84DA0, radioStation); } // 0x7035CF3AB08A7AF7
static int GET_NUM_UNLOCKED_RADIO_STATIONS() { return invoke<int>(0xD84DC0); } // 0x8044961915B48136
static int FIND_RADIO_STATION_INDEX(Hash stationNameHash) { return invoke<int>(0xD84DD0, stationNameHash); } // 0xE029F4A956BFCCBE
static void SET_RADIO_STATION_MUSIC_ONLY(const char* radioStation, BOOL toggle) { invoke<Void>(0xD84E10, radioStation, toggle); } // 0x247C4DE693AD9B36
static void SET_RADIO_FRONTEND_FADE_TIME(float fadeTime) { invoke<Void>(0xD84E40, fadeTime); } // 0xACF6553AB8A4EA53
static void UNLOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0xD84E60, radioStation, trackListName); } // 0x7C236591DA4F980B
static void LOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0xD84EA0, radioStation, trackListName); } // 0x68A74A172B90D43E
static void UPDATE_UNLOCKABLE_DJ_RADIO_TRACKS(BOOL enableMixes) { invoke<Void>(0xD84F10, enableMixes); } // 0x66B137F3AE54333B
static void LOCK_RADIO_STATION(const char* radioStationName, BOOL toggle) { invoke<Void>(0xD84F20, radioStationName, toggle); } // 0xCA3C8048CFD52E02
static void SET_RADIO_STATION_AS_FAVOURITE(const char* radioStation, BOOL toggle) { invoke<Void>(0xD84F70, radioStation, toggle); } // 0x518DFEC4FCC07749
static BOOL IS_RADIO_STATION_FAVOURITED(const char* radioStation) { return invoke<BOOL>(0xD84FB0, radioStation); } // 0x36759581D0633B06
static BOOL GET_NEXT_AUDIBLE_BEAT(float* out1, float* out2, int* out3) { return invoke<BOOL>(0xD84FF0, out1, out2, out3); } // 0x604E6C2DCB4B137F
static void FORCE_MUSIC_TRACK_LIST(const char* radioStation, const char* trackListName, int milliseconds) { invoke<Void>(0xD85030, radioStation, trackListName, milliseconds); } // 0x07B35A877A492E93
static int GET_CURRENT_TRACK_PLAY_TIME(const char* radioStationName) { return invoke<int>(0xD85090, radioStationName); } // 0x19CC911A97AF8F27
static Hash GET_CURRENT_TRACK_SOUND_NAME(const char* radioStationName) { return invoke<Hash>(0xD850D0, radioStationName); } // 0xBFF9D1DD2EA1B515
static void SET_VEHICLE_MISSILE_WARNING_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85110, vehicle, toggle); } // 0x41F9D74D334CF57B
static void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { invoke<Void>(0xD85180, zoneName, p1, p2); } // 0x57FF2FF5DA6DCB15
static void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) { invoke<Void>(0xD851C0, zoneName, p1); } // 0xA9B69A9A9C786B86
static void SET_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xD85200, ambientZone, p1, p2); } // 0xAE9B78A0E33292A8
static void CLEAR_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1) { invoke<Void>(0xD85290, ambientZone, p1); } // 0x884A5994C1CC6222
static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xD85310, ambientZone, p1, p2); } // 0xCD04ECE71F3A9215
static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xD85350, ambientZone, p1, p2); } // 0x6866AF3D8691EDC0
static BOOL IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) { return invoke<BOOL>(0xD853E0, ambientZone); } // 0x80EEE4C5880DA82E
static void REFRESH_CLOSEST_OCEAN_SHORELINE() { invoke<Void>(0xD85450); } // 0x8D2FEC38ED93537D
static void SET_CUTSCENE_AUDIO_OVERRIDE(const char* name) { invoke<Void>(0xD85460, name); } // 0x91044D2095108F03
static void SET_VARIABLE_ON_SYNCH_SCENE_AUDIO(const char* variableName, float value) { invoke<Void>(0xD85490, variableName, value); } // 0x477B0461E172D182
static int PLAY_POLICE_REPORT(const char* name, float p1) { return invoke<int>(0xD854D0, name, p1); } // 0x7A9F2D6596A1FF08
static void CANCEL_ALL_POLICE_REPORTS() { invoke<Void>(0xD85500); } // 0x19F3009F6A632270
static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0xD85510, vehicle); } // 0x5D4EC68787718A25
static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL override, int hornHash) { invoke<Void>(0xD85560, vehicle, override, hornHash); } // 0x7BEAE55022AB21EB
static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xD85600, vehicle); } // 0x1A90E9DC88A85C9D
static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0xD85660, toggle); } // 0x99E0ED93D0644C97
static void SET_RADIO_POSITION_AUDIO_MUTE(BOOL p0) { invoke<Void>(0xD85680, p0); } // 0x058438EA17EA0E85
static void SET_VEHICLE_CONVERSATIONS_PERSIST(BOOL p0, BOOL p1) { invoke<Void>(0xD85690, p0, p1); } // 0x443E60546660D332
static void SET_VEHICLE_CONVERSATIONS_PERSIST_NEW(BOOL p0, BOOL p1, BOOL p2) { invoke<Void>(0xD856C0, p0, p1, p2); } // 0xD61294E5AA976DE5
static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xD856F0); } // 0x3D6F33E7EFD6D669
static int GET_STREAM_PLAY_TIME() { return invoke<int>(0xD85720); } // 0x99BA44ED7240274A
static BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return invoke<BOOL>(0xD85750, streamName, soundSet); } // 0xB3157976738FC0C0
static BOOL LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) { return invoke<BOOL>(0xD85790, streamName, startOffset, soundSet); } // 0xCC32CFCCD0223A2F
static void PLAY_STREAM_FROM_PED(Ped ped) { invoke<Void>(0xD857D0, ped); } // 0xF60A7646F4B460F7
static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xD85820, vehicle); } // 0x40B0ADC3A86BF939
static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0xD85870, object); } // 0x1A44103FB18BB653
static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xD858C0); } // 0x64B3EF30EAA9FBA3
static void PLAY_STREAM_FROM_POSITION(float x, float y, float z) { invoke<Void>(0xD858D0, x, y, z); } // 0x8D4B90E299F8C082
static void STOP_STREAM() { invoke<Void>(0xD85930); } // 0x22A76EDE2316E9A1
static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0xD85940, ped, shaking); } // 0xFD61BB3B8F1CDB6D
static void BLOCK_ALL_SPEECH_FROM_PED(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xD859A0, ped, p1, p2); } // 0x789F31BC158A5307
static void STOP_PED_SPEAKING_SYNCED(Ped ped, BOOL p1) { invoke<Void>(0xD85A10, ped, p1); } // 0x8ADC49ACBB4FF0E4
static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xD85A70, ped, toggle); } // 0xEA65800FC08BB2CB
static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0xD85AD0, ped); } // 0xE8B33D130955481B
static void BLOCK_SPEECH_CONTEXT_GROUP(const char* p0, int p1) { invoke<Void>(0xD85B50, p0, p1); } // 0x4D4012166DD4F5AA
static void UNBLOCK_SPEECH_CONTEXT_GROUP(const char* p0) { invoke<Void>(0xD85B90, p0); } // 0x9C23276BBB08E098
static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85BA0, vehicle, toggle); } // 0x8C9AE8FF021E8F23
static void SET_SIREN_BYPASS_MP_DRIVER_CHECK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85C10, vehicle, toggle); } // 0x88B7E0BE68436D8B
static void TRIGGER_SIREN_AUDIO(Vehicle vehicle) { invoke<Void>(0xD85C80, vehicle); } // 0xE868283F11B10F97
static void SET_HORN_PERMANENTLY_ON(Vehicle vehicle) { invoke<Void>(0xD85CF0, vehicle); } // 0x8D78BCB9B0FC86A6
static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85D50, vehicle, toggle); } // 0x07A608749EC88F3A
static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0xD85DE0, vehicle, p1); } // 0xF8B40A38F93CE540
static void SET_HORN_PERMANENTLY_ON_TIME(Vehicle vehicle, float time) { invoke<Void>(0xD85E40, vehicle, time); } // 0x0E054C79B87C8FB2
static void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85EC0, vehicle, toggle); } // 0x27E2D66061E7E264
static void FORCE_USE_AUDIO_GAME_OBJECT(Vehicle vehicle, const char* audioName) { invoke<Void>(0xD85F50, vehicle, audioName); } // 0x4294356B761DCABE
static void PRELOAD_VEHICLE_AUDIO_BANK(Hash vehicleModel) { invoke<Void>(0xD85FB0, vehicleModel); } // 0xE84254DC19B3CA6B
static void SET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle, const char* p1, const char* p2) { invoke<Void>(0xD85FD0, vehicle, p1, p2); } // 0xD87145DC228F73CB
static void RESET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle) { invoke<Void>(0xD85FF0, vehicle); } // 0xBE72843E382ACF4E
static void SET_VEHICLE_FORCE_REVERSE_WARNING(Any p0, Any p1) { invoke<Void>(0xD86050, p0, p1); } // 0x495131016E1A03BE
static BOOL IS_VEHICLE_AUDIBLY_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xD860C0, vehicle); } // 0xE3DB661464962CF4
static void SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(Vehicle vehicle, float damageFactor) { invoke<Void>(0xD86140, vehicle, damageFactor); } // 0x0BA0348CAAB53EC0
static void SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Vehicle vehicle, float intensity) { invoke<Void>(0xD861A0, vehicle, intensity); } // 0x45FFAC45E551D308
static void ENABLE_VEHICLE_FANBELT_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD86270, vehicle, toggle); } // 0x2F0DDBBB402A1C2F
static void ENABLE_VEHICLE_EXHAUST_POPS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD862F0, vehicle, toggle); } // 0xB37F7EC8F0694F4D
static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD86380, vehicle, toggle); } // 0x8A85315947DF6C94
static void SET_PLAYER_VEHICLE_ALARM_AUDIO_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD86410, vehicle, toggle); } // 0x27EC3EC3B245C5CC
static void SET_SCRIPT_UPDATE_DOOR_AUDIO(Hash doorHash, BOOL toggle) { invoke<Void>(0xD86480, doorHash, toggle); } // 0x60F1DCFB89B4F353
static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xD864D0, vehicle, doorId); } // 0x8093F3812E836BCF
static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xD86560, vehicle, doorId); } // 0xDCC6C00DE6C4A799
static void ENABLE_STALL_WARNING_SOUNDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD865F0, vehicle, toggle); } // 0xEC62EF361B6CB976
static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0xD866D0); } // 0x7104198E063B41C7
static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0xD86700, active); } // 0xAA3A5AD85A475137
static void PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) { invoke<Void>(0xD86720, audioName); } // 0xFAE22BD3C12AEFB4
static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0xD86740); } // 0xB7A02BE66E44058F
static BOOL IS_MISSION_COMPLETE_READY_FOR_UI() { return invoke<BOOL>(0xD86770); } // 0x1FC87F78B679BE3D
static void BLOCK_DEATH_JINGLE(BOOL toggle) { invoke<Void>(0xD86790, toggle); } // 0x022FC2EACDDD3CB2
static BOOL START_AUDIO_SCENE(const char* scene) { return invoke<BOOL>(0xD867B0, scene); } // 0xCAC4020CCF361AC8
static void STOP_AUDIO_SCENE(const char* scene) { invoke<Void>(0xD867F0, scene); } // 0xB43467C43086A6A1
static void STOP_AUDIO_SCENES() { invoke<Void>(0xD86820); } // 0x3C6BB574B1895B94
static BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return invoke<BOOL>(0xD86830, scene); } // 0xBC2EE32DE886BD08
static void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { invoke<Void>(0xD86870, scene, variable, value); } // 0x082E0064E4F27AFC
static void SET_AUDIO_SCRIPT_CLEANUP_TIME(int time) { invoke<Void>(0xD86890, time); } // 0x0D7BAEA1C3D6BDB6
static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { invoke<Void>(0xD868B0, entity, groupName, p2); } // 0x616C2EAE947E6027
static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { invoke<Void>(0xD86940, entity, p1); } // 0x001B008A010F2FE6
static BOOL AUDIO_IS_MUSIC_PLAYING() { return invoke<BOOL>(0xD869C0); } // 0x4FAAAB99FFA2702C
static BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<BOOL>(0xD869F0); } // 0x7507A74A3D963966
static BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xD86A20, eventName); } // 0x16088CC55E7F218A
static BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xD86A90, eventName); } // 0x2C7FEB8222C29D99
static BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xD86AD0, eventName); } // 0x86A2BC11844DEEB3
static BOOL IS_MUSIC_ONESHOT_PLAYING() { return invoke<BOOL>(0xD86B10); } // 0xFB9CF6B99A98306F
static int GET_MUSIC_PLAYTIME() { return invoke<int>(0xD86B30); } // 0x1304366BC7BE185B
static void SET_GLOBAL_RADIO_SIGNAL_LEVEL(Any p0) { invoke<Void>(0xD86B50, p0); } // 0x5F3ABB7227973CB8
static void RECORD_BROKEN_GLASS(float x, float y, float z, float radius) { invoke<Void>(0xD86B70, x, y, z, radius); } // 0xCD8CCE6C07790657
static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0xD86BD0); } // 0xC22A1D86EFB5A8CA
static void SCRIPT_OVERRIDES_WIND_ELEVATION(BOOL p0, Any p1) { invoke<Void>(0xD86BF0, p0, p1); } // 0x2995BB5B3AA97FE6
static void SET_PED_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0xD86C50, p0, p1); } // 0x30CC8BA35211A422
static void SET_PED_INTERIOR_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0xD86C70, p0, p1); } // 0x728E3CDB3B64DE89
static void FORCE_PED_PANIC_WALLA() { invoke<Void>(0xD86C90); } // 0xABB26A8481225EDC
static BOOL PREPARE_ALARM(const char* alarmName) { return invoke<BOOL>(0xD86CA0, alarmName); } // 0x0C876A2D0F41B79C
static void START_ALARM(const char* alarmName, BOOL p2) { invoke<Void>(0xD86CD0, alarmName, p2); } // 0x4C6BF3BC14C6F6D6
static void STOP_ALARM(const char* alarmName, BOOL toggle) { invoke<Void>(0xD86CF0, alarmName, toggle); } // 0xA6274B757A008184
static void STOP_ALL_ALARMS(BOOL stop) { invoke<Void>(0xD86D10, stop); } // 0xFAE67C69C14B564A
static BOOL IS_ALARM_PLAYING(const char* alarmName) { return invoke<BOOL>(0xD86D30, alarmName); } // 0x65CB233333D99E11
static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return invoke<Hash>(0xD86D90, vehicle); } // 0xCDF8A102C63845CC
static Hash GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(Vehicle vehicle) { return invoke<Hash>(0xD86E00, vehicle); } // 0x46B7259FABD90750
static void RESET_PED_AUDIO_FLAGS(Ped ped) { invoke<Void>(0xD86E70, ped); } // 0x4E7D42A9AC9E71EB
static void SET_PED_FOOTSTEPS_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0xD86EC0, ped, toggle); } // 0xD3709D521B87D7B8
static void SET_PED_CLOTH_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0xD86F10, ped, toggle); } // 0x0AD4EECE226A86F5
static void OVERRIDE_PLAYER_GROUND_MATERIAL(Hash hash, BOOL toggle) { invoke<Void>(0xD86F60, hash, toggle); } // 0x1E0388A9E6A3BF5B
static void USE_FOOTSTEP_SCRIPT_SWEETENERS(Ped ped, BOOL p1, Hash hash) { invoke<Void>(0xD86FD0, ped, p1, hash); } // 0x1E8AEBD23A5C1511
static void OVERRIDE_MICROPHONE_SETTINGS(Hash hash, BOOL toggle) { invoke<Void>(0xD87060, hash, toggle); } // 0x2F0605DFDF7593AB
static void FREEZE_MICROPHONE() { invoke<Void>(0xD870D0); } // 0xA7047BB729F81596
static void DISTANT_COP_CAR_SIRENS(BOOL value) { invoke<Void>(0xD87110, value); } // 0xEA602FA4CD3530B8
static void SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Vehicle vehicle, BOOL p1) { invoke<Void>(0xD871B0, vehicle, p1); } // 0x60D61C2E8F5D9601
static void ENABLE_STUNT_JUMP_AUDIO() { invoke<Void>(0xD87280); } // 0xA9C10BD85DD34D7E
static void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { invoke<Void>(0xD87300, flagName, toggle); } // 0xCFBD89D2F1F18961
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT(const char* audioEvent, Any p1) { return invoke<BOOL>(0xD87360, audioEvent, p1); } // 0xA8327B614CA7628F
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int sceneID, const char* audioEvent) { return invoke<BOOL>(0xD87390, sceneID, audioEvent); } // 0x20279DB6A8C883E5
static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xD873E0, sceneID); } // 0x9DE3D932AA2B055C
static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xD87420, sceneID); } // 0x32FA1FA41E0D63D1
static void INIT_SYNCH_SCENE_AUDIO_WITH_POSITION(const char* audioEvent, float x, float y, float z) { invoke<Void>(0xD87460, audioEvent, x, y, z); } // 0xB94570412D3EB8C2
static void INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY(const char* audioEvent, Entity entity) { invoke<Void>(0xD874D0, audioEvent, entity); } // 0x4FE00B5CFB97782B
static void SET_AUDIO_SPECIAL_EFFECT_MODE(int mode) { invoke<Void>(0xD87550, mode); } // 0xC5EE3F8EC7822462
static void SET_PORTAL_SETTINGS_OVERRIDE(const char* p0, const char* p1) { invoke<Void>(0xD87570, p0, p1); } // 0xC73D0514D61174D1
static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xD875A0, p0); } // 0xFAF6BF5476CB00A8
static void STOP_SMOKE_GRENADE_EXPLOSION_SOUNDS() { invoke<Void>(0xD875D0); } // 0x57BCB62796BFF290
static int GET_MUSIC_VOL_SLIDER() { return invoke<int>(0xD875E0); } // 0xC7E97C503E2ACEE9
static void REQUEST_TENNIS_BANKS(Ped ped) { invoke<Void>(0xD87610, ped); } // 0x08E29D89D4C88997
static void UNREQUEST_TENNIS_BANKS() { invoke<Void>(0xD87660); } // 0xD1E84FD28D4A7B38
static void SET_SKIP_MINIGUN_SPIN_UP_AUDIO(BOOL p0) { invoke<Void>(0xD87670, p0); } // 0xE9B1F35A218F1FC7
static void STOP_CUTSCENE_AUDIO() { invoke<Void>(0xD87690); } // 0x583A32C5EA5495CD
static BOOL HAS_LOADED_MP_DATA_SET() { return invoke<BOOL>(0xD876A0); } // 0x12E01CD1D5C72213
static BOOL HAS_LOADED_SP_DATA_SET() { return invoke<BOOL>(0xD876C0); } // 0x369A4B2B92F12461
static int GET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle) { return invoke<int>(0xD876E0, vehicle); } // 0xEEDADE9115768A64
static void SET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle, int value) { invoke<Void>(0xD87740, vehicle, value); } // 0x315A149C242011DE
static void ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) { invoke<Void>(0xD87E90, name, model, p2, p3); } // 0x897DF886E8694302
static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { invoke<Void>(0xD87F70, scriptName, modelHash, p2, activationRange, p4, p5); } // 0x55F4E2629EABB8DD
static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0xD88040, object); } // 0x71C1A46B17126AA4
static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(const char* scriptName, float activationRange, int p2) { invoke<Void>(0xD880F0, scriptName, activationRange, p2); } // 0xA341ACB237C23A75
static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0xD881A0); } // 0x173751E886F8E9AB
static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xD881C0, brainSet); } // 0x4C38AD1938C28F80
static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xD881E0, brainSet); } // 0xD17268F762AAD469
static void REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xD88200); } // 0x97620981EC3F7099
static void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xD88210); } // 0x2DB5A63C4A5800E5
static void REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xD88220, scriptName); } // 0x8C0CA18CAAE89A2D
static void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xD88230, scriptName); } // 0xB3D198039DB6F5C6
static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { invoke<Void>(0xD90E50, render, ease, easeTime, p3, p4, p5); } // 0xE37AF9002E782BA0
static void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(BOOL render, float p1, int p2, Any p3) { invoke<Void>(0xD90F00, render, p1, p2, p3); } // 0xC289B882CEF4CAC9
static Cam CREATE_CAM(const char* camName, BOOL p1) { return invoke<Cam>(0xD90F80, camName, p1); } // 0x69D23632E4288DBD
static Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xD91000, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x2CB6AB601EB7D2D9
static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xD91170, camHash, p1); } // 0xBB209150C6081BBE
static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0xD911F0, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x96A32328480B485C
static void DESTROY_CAM(Cam cam, BOOL bScriptHostCam) { invoke<Void>(0xD91360, cam, bScriptHostCam); } // 0x85E6A1E36B5E2E4D
static void DESTROY_ALL_CAMS(BOOL bScriptHostCam) { invoke<Void>(0xD913C0, bScriptHostCam); } // 0x3AA8CFEBC938A945
static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0xD91400, cam); } // 0x78411E34CF90EA8C
static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0xD91450, cam, active); } // 0x4CBC5D1BC117616B
static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xD91470, cam); } // 0xBC886554B5888A64
static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0xD914D0, cam); } // 0x8DE2438443E6A145
static Cam GET_RENDERING_CAM() { return invoke<Cam>(0xD91550); } // 0xFCB6553111578B2F
static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0xD915A0, cam); } // 0xA452B06E281A9014
static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<Vector3>(0xD91660, cam, rotationOrder); } // 0x9DDBEF363FADFA4C
static float GET_CAM_FOV(Cam cam) { return invoke<float>(0xD91760, cam); } // 0x4A1D1AB55229AAF0
static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0xD917E0, cam); } // 0x97410F245819ED32
static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xD91860, cam); } // 0xEF763079652110C0
static float GET_CAM_NEAR_DOF(Cam cam) { return invoke<float>(0xD918E0, cam); } // 0x4329E0C9A71DAF53
static float GET_CAM_FAR_DOF(Cam cam) { return invoke<float>(0xD91960, cam); } // 0x2221B1FEFEE35449
static float GET_CAM_DOF_STRENGTH(Cam cam) { return invoke<float>(0xD919E0, cam); } // 0xEDDF0C80A9EEE28A
static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { invoke<Void>(0xD91A60, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); } // 0xA3774254665BAA82
static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0xD91AA0, cam, posX, posY, posZ); } // 0x1761457F86AD0EE2
static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<Void>(0xD91B50, cam, rotX, rotY, rotZ, rotationOrder); } // 0x5E5CEC33463AD803
static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0xD91B70, cam, fieldOfView); } // 0x58BDA5D9262F5D30
static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0xD91C30, cam, nearClip); } // 0x3AAB5D3F3D4028CC
static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0xD91CB0, cam, farClip); } // 0x8397B3389E13A5E5
static void FORCE_CAM_FAR_CLIP(Cam cam, float p1) { invoke<Void>(0xD91D40, cam, p1); } // 0xFA4389643D1609AE
static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0xD91E00, cam, strength); } // 0x687E31348D8E19AD
static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { invoke<Void>(0xD91E90, cam, nearDOF); } // 0x1991568378B6C0D0
static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { invoke<Void>(0xD91F10, cam, farDOF); } // 0x12DA57732DE5D8BB
static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { invoke<Void>(0xD91F90, cam, dofStrength); } // 0x4396EEBF487EDFB1
static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { invoke<Void>(0xD92020, cam, p1, p2, p3, p4); } // 0x75C0D0B8F3E221F1
static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0xD920E0, cam, toggle); } // 0x3089A583C66DAC0E
static void SET_USE_HI_DOF() { invoke<Void>(0xD92160); } // 0xB6387DEFC12580A6
static void SET_USE_HI_DOF_ON_SYNCED_SCENE_THIS_UPDATE() { invoke<Void>(0xD92180); } // 0xB6D9A8668A9B769C
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xD921A0, camera, p1); } // 0x530423D35DCB5139
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(Any p0, float p1) { invoke<Void>(0xD92280, p0, p1); } // 0xA1A2D94E99309CF1
static void SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) { invoke<Void>(0xD92360, camera, p1); } // 0xC316A4E0AF22543B
static void SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(Cam camera, float multiplier) { invoke<Void>(0xD92430, camera, multiplier); } // 0x880E454F39FC7F42
static void SET_CAM_DOF_FOCUS_DISTANCE_BIAS(Cam camera, float p1) { invoke<Void>(0xD92500, camera, p1); } // 0xB44FCE2D38FDEDFE
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xD925D0, camera, p1); } // 0x365C28B73347797E
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) { invoke<Void>(0xD926A0, camera, p1); } // 0xF94FC0634C750884
static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xD92810, cam, entity, xOffset, yOffset, zOffset, isRelative); } // 0x03F10D56CCA2C055
static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0xD92830, cam, ped, boneIndex, x, y, z, heading); } // 0x19DB71A72065EFB0
static void HARD_ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { invoke<Void>(0xD92850, cam, ped, boneIndex, p3, p4, p5, p6, p7, p8, p9); } // 0xF81BE163E469E944
static void HARD_ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xRot, float yRot, float zRot, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xD92880, cam, entity, xRot, yRot, zRot, xOffset, yOffset, zOffset, isRelative); } // 0x0D5706D462271DC4
static void ATTACH_CAM_TO_VEHICLE_BONE(Cam cam, Vehicle vehicle, int boneIndex, BOOL relativeRotation, float rotX, float rotY, float rotZ, float offsetX, float offsetY, float offsetZ, BOOL fixedDirection) { invoke<Void>(0xD928B0, cam, vehicle, boneIndex, relativeRotation, rotX, rotY, rotZ, offsetX, offsetY, offsetZ, fixedDirection); } // 0x52013BF2765685F4
static void DETACH_CAM(Cam cam) { invoke<Void>(0xD92900, cam); } // 0x9BC35A57CAC5458D
static void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) { invoke<Void>(0xD92980, cam, p1); } // 0xE2B6CB928D598CBD
static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0xD92990, cam, x, y, z); } // 0x2ABEBC4952CA3C7F
static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xD92A50, cam, entity, p2, p3, p4, p5); } // 0xD6B4D02A102485DC
static void POINT_CAM_AT_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xD92A70, cam, ped, boneIndex, x, y, z, p6); } // 0xA327B87671869834
static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0xD92A90, cam); } // 0xFC8624DF7EBA74FB
static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0xD92B10, cam, toggle); } // 0xD49F2340555F9E5D
static void SET_CAM_CONTROLS_MINI_MAP_HEADING(Cam cam, BOOL toggle) { invoke<Void>(0xD92BA0, cam, toggle); } // 0x29BBAB7031C36984
static void SET_CAM_IS_INSIDE_VEHICLE(Cam cam, BOOL toggle) { invoke<Void>(0xD92C60, cam, toggle); } // 0x2F0877034716FB33
static void ALLOW_MOTION_BLUR_DECAY(Any p0, BOOL p1) { invoke<Void>(0xD92CF0, p0, p1); } // 0x958B9F165A08995A
static void SET_CAM_DEBUG_NAME(Cam camera, const char* name) { invoke<Void>(0xD92D80, camera, name); } // 0xDAC1F4368A8FB625
static Cam GET_DEBUG_CAM() { return invoke<Cam>(0xD92D90); } // 0x2BBDA4E1DFD52204
static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int smoothingStyle, int rotationOrder) { invoke<Void>(0xD92DB0, camera, x, y, z, xRot, yRot, zRot, length, smoothingStyle, rotationOrder); } // 0xC606B0B9BA3D6036
static void ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xD92DD0, cam, cam2, length, p3); } // 0x327198ED493608E0
static void ADD_CAM_SPLINE_NODE_USING_CAMERA(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xD92DF0, cam, cam2, length, p3); } // 0xF5317F0839442D94
static void ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(Cam cam, int length, int p2) { invoke<Void>(0xD92E10, cam, length, p2); } // 0x471C8924B79628DE
static void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { invoke<Void>(0xD92EB0, cam, p1); } // 0x59EFC8EF65356E09
static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0xD92F50, cam); } // 0x37831F682BE7F41E
static float GET_CAM_SPLINE_NODE_PHASE(Cam cam) { return invoke<float>(0xD92FF0, cam); } // 0x5B4403BBB70E3566
static void SET_CAM_SPLINE_DURATION(Cam cam, int timeDuration) { invoke<Void>(0xD93090, cam, timeDuration); } // 0x82C9F945AF12EC9F
static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { invoke<Void>(0xD93110, cam, smoothingStyle); } // 0x859FFC7F5DEC29DE
static int GET_CAM_SPLINE_NODE_INDEX(Cam cam) { return invoke<int>(0xD93190, cam); } // 0x9A48A1707E9DECA8
static void SET_CAM_SPLINE_NODE_EASE(Cam cam, int easingFunction, int p2, float p3) { invoke<Void>(0xD93220, cam, easingFunction, p2, p3); } // 0xA054197DA0CA8B1B
static void SET_CAM_SPLINE_NODE_VELOCITY_SCALE(Cam cam, int p1, float scale) { invoke<Void>(0xD932E0, cam, p1, scale); } // 0x4BEFD5824C6D529A
static void OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xD93300, cam, p1, p2, p3); } // 0x59CBB7FD3D159D45
static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xD933D0, cam, p1, p2, p3); } // 0x11BE263E767EF5C3
static void SET_CAM_SPLINE_NODE_EXTRA_FLAGS(Cam cam, int p1, int flags) { invoke<Void>(0xD934A0, cam, p1, flags); } // 0x9DE997C45267314A
static BOOL IS_CAM_SPLINE_PAUSED(Cam cam) { return invoke<BOOL>(0xD934C0, cam); } // 0x948A3D156F2E0E3A
static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { invoke<Void>(0xD935B0, camTo, camFrom, duration, easeLocation, easeRotation); } // 0xB56F35D8A770F80F
static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0xD935D0, cam); } // 0x323C4A67159DAD02
static void SHAKE_CAM(Cam cam, const char* type, float amplitude) { invoke<Void>(0xD93600, cam, type, amplitude); } // 0x2A09425009DAD0F5
static void ANIMATED_SHAKE_CAM(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude) { invoke<Void>(0xD936A0, cam, p1, p2, p3, amplitude); } // 0x9EFC1351343A6835
static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xD93750, cam); } // 0xDD87838D03B64B0A
static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0xD937D0, cam, amplitude); } // 0x17F06E9D89A05855
static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0xD93850, cam, p1); } // 0x584EE85BE0BFA70E
static void SHAKE_SCRIPT_GLOBAL(const char* p0, float p1) { invoke<Void>(0xD938D0, p0, p1); } // 0xC62E5824404F8836
static void ANIMATED_SHAKE_SCRIPT_GLOBAL(const char* p0, const char* p1, const char* p2, float p3) { invoke<Void>(0xD93910, p0, p1, p2, p3); } // 0xAEA3DA36109D1029
static BOOL IS_SCRIPT_GLOBAL_SHAKING() { return invoke<BOOL>(0xD93960); } // 0x12B42434831D668E
static void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { invoke<Void>(0xD93990, p0); } // 0xB9AB3B8920F1AA69
static void TRIGGER_VEHICLE_PART_BROKEN_CAMERA_SHAKE(Vehicle vehicle, int p1, float p2) { invoke<Void>(0xD939C0, vehicle, p1, p2); } // 0xB3F5D7C1E9A4A589
static BOOL PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0xD93A50, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); } // 0x73D04EA6A13117B7
static BOOL IS_CAM_PLAYING_ANIM(Cam cam, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xD93A90, cam, animName, animDictionary); } // 0x444069759E788ECD
static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0xD93B40, cam, phase); } // 0xFEA88ACF99028CEA
static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0xD93BB0, cam); } // 0x2D34ECA1A2A76C38
static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xD93C00, p0, p1, animName, animDictionary); } // 0xF9B66DAE101B699C
static void SET_FLY_CAM_HORIZONTAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xD93C30, cam, p1, p2, p3); } // 0xB07CF0F23305413E
static void SET_FLY_CAM_VERTICAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xD93CF0, cam, p1, p2, p3); } // 0xD141E0743BFCF358
static void SET_FLY_CAM_MAX_HEIGHT(Cam cam, float height) { invoke<Void>(0xD93DB0, cam, height); } // 0x4D66F5C6B248BB2A
static void SET_FLY_CAM_COORD_AND_CONSTRAIN(Cam cam, float x, float y, float z) { invoke<Void>(0xD93E40, cam, x, y, z); } // 0xD09DCA9E9F147F36
static void SET_FLY_CAM_VERTICAL_CONTROLS_THIS_UPDATE(Cam cam) { invoke<Void>(0xD93EF0, cam); } // 0xDB27323F0C5EE8D9
static BOOL WAS_FLY_CAM_CONSTRAINED_ON_PREVIOUS_UDPATE(Cam cam) { return invoke<BOOL>(0xD93F60, cam); } // 0x0D5CED097A266DCE
static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0xD93FF0); } // 0x15CCE8886267624F
static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xD94010); } // 0x9390801B06EE998F
static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0xD94030); } // 0x78ABC1D11B34F324
static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xD94050); } // 0xDDED2C93E8FD5B69
static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0xD94070, duration); } // 0x10B228D2FDB7AF16
static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0xD94080, duration); } // 0x8F72AF14CE5AACE4
static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0xD94090, p0, p1); } // 0xD7C0EA10993D3214
static BOOL ARE_WIDESCREEN_BORDERS_ACTIVE() { return invoke<BOOL>(0xD940B0); } // 0xE7BF6BF496713374
static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0xD940D0); } // 0xCF141FCD0940B0A3
static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xD94110, rotationOrder); } // 0xD84A545408A3099A
static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0xD941B0); } // 0x9FA6E15C7A998E4F
static void SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(float p0) { invoke<Void>(0xD941E0, p0); } // 0x9B669C0440D2AB57
static void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(float p0) { invoke<Void>(0xD94220, p0); } // 0xC30B691CAD767629
static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0xD94270); } // 0x3FAFDC4C824A6C54
static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0xD942A0, heading); } // 0x64BB72494B9DF6DC
static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0xD942B0); } // 0x98F0D28A64EC7D5D
static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float angle, float scalingFactor) { invoke<Void>(0xD942E0, angle, scalingFactor); } // 0xD815D4BD1AE9E85A
static void RESET_GAMEPLAY_CAM_FULL_ATTACH_PARENT_TRANSFORM_TIMER() { invoke<Void>(0xD94350); } // 0xD7C2A6E5CF33E328
static void FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(float roll, float pitch, float yaw) { invoke<Void>(0xD94380, roll, pitch, yaw); } // 0xF42836467278195A
static void FORCE_BONNET_CAMERA_RELATIVE_HEADING_AND_PITCH(float p0, float p1) { invoke<Void>(0xD943A0, p0, p1); } // 0xED7A3604521A9F67
static void SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(float yaw) { invoke<Void>(0xD944C0, yaw); } // 0xE0A23567157E9B5E
static void SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(float pitch) { invoke<Void>(0xD94500, pitch); } // 0x7E08E86FBA713FE8
static void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(BOOL p0) { invoke<Void>(0xD94560, p0); } // 0x2AFB778D9C7EA690
static void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { invoke<Void>(0xD94580, shakeName, intensity); } // 0xD5681045964A2975
static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0xD945C0); } // 0x7F2356076C3D052D
static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0xD945F0, amplitude); } // 0xB3CAD109683148E3
static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0xD94620, p0); } // 0x9AFEC71EEA2F7754
static void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped ped) { invoke<Void>(0xD94650, ped); } // 0x2C81A7FECD78FF20
static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0xD946C0); } // 0x174DBD3C5DB3557B
static BOOL IS_INTERPOLATING_FROM_SCRIPT_CAMS() { return invoke<BOOL>(0xD946F0); } // 0xE976C85F4B1CF1A2
static BOOL IS_INTERPOLATING_TO_SCRIPT_CAMS() { return invoke<BOOL>(0xD94730); } // 0xB2A95909624C195B
static void SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(BOOL p0) { invoke<Void>(0xD94770, p0); } // 0xA927617A11A54503
static void DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE() { invoke<Void>(0xD947A0); } // 0xCCCACE17B42F77EC
static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0xD947C0); } // 0xDD851254D8C7D338
static void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Entity entity) { invoke<Void>(0xD947F0, entity); } // 0x159356D054E19158
static void DISABLE_CAM_COLLISION_FOR_OBJECT(Entity entity) { invoke<Void>(0xD94860, entity); } // 0x148A0A307698B29B
static void BYPASS_CAMERA_COLLISION_BUOYANCY_TEST_THIS_UPDATE() { invoke<Void>(0xD948C0); } // 0xB785349D98C90E5A
static void SET_GAMEPLAY_CAM_ENTITY_TO_LIMIT_FOCUS_OVER_BOUNDING_SPHERE_THIS_UPDATE(Entity entity) { invoke<Void>(0xD948F0, entity); } // 0xFE751F9213345C58
static void DISABLE_FIRST_PERSON_CAMERA_WATER_CLIPPING_TEST_THIS_UPDATE() { invoke<Void>(0xD94960); } // 0xFFFF1D7E51F1970B
static void SET_FOLLOW_CAM_IGNORE_ATTACH_PARENT_MOVEMENT_THIS_UPDATE() { invoke<Void>(0xD94980); } // 0x29F41DB9F1B4728A
static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0xD949A0, x, y, z, radius); } // 0x7B780C491DEC834E
static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0xD94A10); } // 0x0E1259D809F0A778
static BOOL SET_FOLLOW_PED_CAM_THIS_UPDATE(const char* camName, int p1) { return invoke<BOOL>(0xD94A40, camName, p1); } // 0x3A7305BBF26DBF65
static void USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(BOOL p0, BOOL p1) { invoke<Void>(0xD94AD0, p0, p1); } // 0x68DE54738FFB5584
static void SET_FOLLOW_PED_CAM_LADDER_ALIGN_THIS_UPDATE() { invoke<Void>(0xD94B20); } // 0xEF5DC41D990F8FD2
static void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xD94B50, minimum, maximum); } // 0x19D0C4621093F82B
static void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xD94BF0, minimum, maximum); } // 0xE4C00EFAE138F020
static void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(float p0, float distance) { invoke<Void>(0xD94C90, p0, distance); } // 0xE3270F1A682CF48C
static void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle p0, int p1) { invoke<Void>(0xD94D40, p0, p1); } // 0x349F973598822727
static void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE() { invoke<Void>(0xD94DB0); } // 0x3968AF3046718EAC
static void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE() { invoke<Void>(0xD94DD0); } // 0x5FD79E92E62966FB
static void BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE() { invoke<Void>(0xD94DE0); } // 0xE71B1E03F658C30C
static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0xD94E10); } // 0xE63C16EA2171C883
static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xD94E30); } // 0x3B5989D5DB08A155
static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xD94E50, viewMode); } // 0xF20AB5C13902BB8A
static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0xD94E60); } // 0x77CDF75A783A0B04
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_THIS_UPDATE(BOOL p0) { invoke<Void>(0xD94E90, p0); } // 0x82C5BFD25578F440
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(BOOL p0, BOOL p1) { invoke<Void>(0xD94EC0, p0, p1); } // 0x2C57A63E92CDBDF1
static BOOL SET_TABLE_GAMES_CAMERA_THIS_UPDATE(Hash hash) { return invoke<BOOL>(0xD94EF0, hash); } // 0xC1AAF981A4F50898
static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xD94F70); } // 0xD511F6B5FB8D3854
static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<Void>(0xD94F90, zoomLevel); } // 0x872D985A4B3A9EEF
static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xD94FA0); } // 0x655E58062EC2D269
static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xD94FC0, viewMode); } // 0x043CE6FFCF2F6963
static int GET_CAM_VIEW_MODE_FOR_CONTEXT(int context) { return invoke<int>(0xD94FD0, context); } // 0xBCF87EE3DC296C2A
static void SET_CAM_VIEW_MODE_FOR_CONTEXT(int context, int viewMode) { invoke<Void>(0xD94FF0, context, viewMode); } // 0x07938654FF332D78
static int GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() { return invoke<int>(0xD95000); } // 0xBF03D0685ADC793B
static void USE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0xD95030); } // 0x108CB90C10285373
static void USE_DEDICATED_STUNT_CAMERA_THIS_UPDATE(const char* camName) { invoke<Void>(0xD95050, camName); } // 0x8AD0D4D95EF3CE16
static void FORCE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0xD95080); } // 0xF66C0552C82638D5
static void SET_FOLLOW_VEHICLE_CAM_SEAT_THIS_UPDATE(int seatIndex) { invoke<Void>(0xD950A0, seatIndex); } // 0x0A9B49F91B35D536
static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xD950C0); } // 0x196704C916969409
static BOOL IS_AIM_CAM_ACTIVE_IN_ACCURATE_MODE() { return invoke<BOOL>(0xD95120); } // 0xD7582282E517A590
static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xD95160); } // 0x5EA7A06A1491D450
static void DISABLE_AIM_CAM_THIS_UPDATE() { invoke<Void>(0xD95190); } // 0xDEE33C748704EC49
static float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return invoke<float>(0xD951D0); } // 0x9B92BDBE805E7967
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(float zoomFactor) { invoke<Void>(0xD951F0, zoomFactor); } // 0xF37AC65898011B1C
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xD95210, p0, p1); } // 0x40C52C6E7C5DE51B
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xD95230, p0, p1); } // 0xBB76112874174E25
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xD953A0, p0, p1); } // 0x5842BDBDE92FEEB1
static void SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xD95440, p0); } // 0x668D3078E78F67B0
static void SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xD95480, p0); } // 0x9696D418BC147507
static void SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(BOOL p0) { invoke<Void>(0xD954C0, p0); } // 0x5EED3D1AFFDEF57E
static void FORCE_TIGHTSPACE_CUSTOM_FRAMING_THIS_UPDATE() { invoke<Void>(0xD954F0); } // 0xF009B83B5567CD93
static Vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke<Vector3>(0xD95510); } // 0x02AF3EA0F67D2329
static Vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xD95550, rotationOrder); } // 0x958849BB56EC0F07
static Vector3 GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_ROT(Player player, int rotationOrder) { return invoke<Vector3>(0xD955E0, player, rotationOrder); } // 0xBF807E7C66B0BF4B
static float GET_FINAL_RENDERED_CAM_FOV() { return invoke<float>(0xD956E0); } // 0xB99978989A0F4E57
static float GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_FOV(Player player) { return invoke<float>(0xD95700, player); } // 0x6A709291E23386B1
static float GET_FINAL_RENDERED_CAM_NEAR_CLIP() { return invoke<float>(0xD95750); } // 0x8AB042CB33EAECD2
static float GET_FINAL_RENDERED_CAM_FAR_CLIP() { return invoke<float>(0xD95770); } // 0xD787990C7B67C7F0
static float GET_FINAL_RENDERED_CAM_NEAR_DOF() { return invoke<float>(0xD95790); } // 0x806E1CB52BAD45A2
static float GET_FINAL_RENDERED_CAM_FAR_DOF() { return invoke<float>(0xD957B0); } // 0xBAAC16D46CDF2FFE
static float GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH() { return invoke<float>(0xD957D0); } // 0xB75F36052800046D
static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int p6) { invoke<Void>(0xD957F0, x, y, z, duration, blendOutDuration, blendInDuration, p6); } // 0x861EAB644E1BBA7A
static void SET_GAMEPLAY_PED_HINT(Ped ped, float x1, float y1, float z1, BOOL p4, int duration, int blendOutDuration, int blendInDuration) { invoke<Void>(0xD95880, ped, x1, y1, z1, p4, duration, blendOutDuration, blendInDuration); } // 0x388E6B6F47D9ECC1
static void SET_GAMEPLAY_VEHICLE_HINT(Vehicle vehicle, float offsetX, float offsetY, float offsetZ, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xD95950, vehicle, offsetX, offsetY, offsetZ, p4, time, easeInTime, easeOutTime); } // 0xB2BB7DF97FC211F9
static void SET_GAMEPLAY_OBJECT_HINT(Object object, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xD95A20, object, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime); } // 0x95AFFEA5EB27D2B9
static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime, int p8) { invoke<Void>(0xD95AF0, entity, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime, p8); } // 0x190BA0A3BB48F7FD
static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xD95BC0); } // 0xE37AC296E66C33AF
static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xD95C00, p0); } // 0x3C44EF9027A21847
static void STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(BOOL p0) { invoke<Void>(0xD95C40, p0); } // 0xB0325D55FDB2DD7C
static void STOP_CODE_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xD95C50, p0); } // 0x2515D479F116B7AA
static BOOL IS_CODE_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xD95C90); } // 0xD4CCFE5409D13C37
static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<Void>(0xD95CC0, FOV); } // 0x4F5BF7798505A667
static void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float value) { invoke<Void>(0xD95D10, value); } // 0x39723B4B969CC059
static void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float value) { invoke<Void>(0xD95D50, value); } // 0x6CD2A2994586D388
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(float xOffset) { invoke<Void>(0xD95D90, xOffset); } // 0x4302C09C88CF5356
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(float yOffset) { invoke<Void>(0xD95DD0, yOffset); } // 0x640D5D2C8DE912A2
static void SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(BOOL toggle) { invoke<Void>(0xD95E10, toggle); } // 0xD5864F7F5BC214FF
static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0xD95E40, p0); } // 0x0A0A06C514052E80
static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xD95EA0); } // 0x968E8340FCAD4826
static void SHAKE_CINEMATIC_CAM(const char* shakeType, float amount) { invoke<Void>(0xD95ED0, shakeType, amount); } // 0xE31C735DEE2BF705
static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0xD95F10); } // 0x0E9A1CE27A31950D
static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0xD95F40, p0); } // 0xAD0E20104A60B568
static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0xD95F70, p0); } // 0xDB37962FDFC63FD7
static void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0xD95FA0); } // 0x48392085C5B52584
static void DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE() { invoke<Void>(0xD95FC0); } // 0x59ABC1F373CE1F5B
static void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE() { invoke<Void>(0xD95FE0); } // 0x9136D50973A71229
static void INVALIDATE_IDLE_CAM() { invoke<Void>(0xD96000); } // 0x513E63C787EE96A7
static BOOL IS_CINEMATIC_IDLE_CAM_RENDERING() { return invoke<BOOL>(0xD96020); } // 0x0D96CB44D490C047
static BOOL IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING() { return invoke<BOOL>(0xD96050); } // 0x9CA0AFAD60564183
static void CREATE_CINEMATIC_SHOT(Hash p0, int time, BOOL p2, Entity entity) { invoke<Void>(0xD96080, p0, time, p2, entity); } // 0x18FB9B483F8E71AB
static BOOL IS_CINEMATIC_SHOT_ACTIVE(Hash p0) { return invoke<BOOL>(0xD960A0, p0); } // 0xF52DD7BA03015AB4
static void STOP_CINEMATIC_SHOT(Hash p0) { invoke<Void>(0xD96110, p0); } // 0x20A207437491322B
static void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(BOOL toggle) { invoke<Void>(0xD96170, toggle); } // 0x48032DB198A2A820
static void SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE() { invoke<Void>(0xD961D0); } // 0xAA4406787205E928
static void SET_CINEMATIC_MODE_ACTIVE(BOOL toggle) { invoke<Void>(0xD961F0, toggle); } // 0xEC81A0FB4911A2C2
static BOOL IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING() { return invoke<BOOL>(0xD96250); } // 0x5F0F4F152FB7156C
static BOOL DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE() { return invoke<BOOL>(0xD96270); } // 0x1C74A3A76F738D39
static BOOL IS_BONNET_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xD96290); } // 0xE30A5640D9F46CF2
static BOOL IS_CINEMATIC_CAM_INPUT_ACTIVE() { return invoke<BOOL>(0xD962C0); } // 0x6633B158164DCD88
static void IGNORE_MENU_PREFERENCE_FOR_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0xD96310); } // 0x54B59CE258DA9A4D
static void BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE() { invoke<Void>(0xD96330); } // 0xD20491305F26874C
static void STOP_CUTSCENE_CAM_SHAKING(Any p0) { invoke<Void>(0xD96350, p0); } // 0x4358D2A8023C82D3
static void SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xD96380, p0); } // 0xF5EF5C15CE92F236
static Ped GET_FOCUS_PED_ON_SCREEN(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<Ped>(0xD963C0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x00926C3C4443B915
static void DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE() { invoke<Void>(0xD96420); } // 0x2BDEB13CCCC78384
static void SET_CAM_DEATH_FAIL_EFFECT_STATE(int p0) { invoke<Void>(0xD96430, p0); } // 0x735D248F6CA672AE
static void SET_FIRST_PERSON_FLASH_EFFECT_TYPE(Any p0) { invoke<Void>(0xD96440, p0); } // 0x39137FB8EE05456C
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME(const char* vehicleName) { invoke<Void>(0xD96470, vehicleName); } // 0x3835E455014EE7B6
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(Hash vehicleModel) { invoke<Void>(0xD964A0, vehicleModel); } // 0xFED7E3E3F45F22A4
static BOOL IS_ALLOWED_INDEPENDENT_CAMERA_MODES() { return invoke<BOOL>(0xD964D0); } // 0x22B1B0E4CDB95977
static void CAMERA_PREVENT_COLLISION_SETTINGS_FOR_TRIPLEHEAD_IN_INTERIORS_THIS_UPDATE() { invoke<Void>(0xD964F0); } // 0xF2BADB0BD95BDD7D
static float REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() { return invoke<float>(0xD96510); } // 0x37A742571A01BD01
static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xD969B0, hour, minute, second); } // 0xCBE10A13619B9FAA
static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0xD969E0, toggle); } // 0xB9C1EC5EDDAAA115
static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0xD96A00, hour, minute, second); } // 0x77A5275126602303
static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xD96A20, hours, minutes, seconds); } // 0x2C9A2F8762B95F5C
static int GET_CLOCK_HOURS() { return invoke<int>(0xD96A40); } // 0x5295501D0862870D
static int GET_CLOCK_MINUTES() { return invoke<int>(0xD96A50); } // 0x18E502A71E28968C
static int GET_CLOCK_SECONDS() { return invoke<int>(0xD96A60); } // 0x4BA5A16068183C5E
static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xD96A70, day, month, year); } // 0xF13E285EDAB2D255
static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xD96A90); } // 0xDDA4278694CAA369
static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0xD96AA0); } // 0xB12880C92EA6EE15
static int GET_CLOCK_MONTH() { return invoke<int>(0xD96AB0); } // 0x8825A6E0A30BDCB8
static int GET_CLOCK_YEAR() { return invoke<int>(0xD96AC0); } // 0x7598FE4545010A75
static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0xD96AD0); } // 0x91C8345B22D52DEC
static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xD96AE0, year, month, day, hour, minute, second); } // 0x23CB97F04154A594
static void GET_UTC_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xD96B00, year, month, day, hour, minute, second); } // 0x177E5760BD4F49BC
static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xD96B20, year, month, day, hour, minute, second); } // 0x2B6A03197E4C7EEF
static void REQUEST_CUTSCENE(const char* cutsceneName, int flags) { invoke<Void>(0xD98FD0, cutsceneName, flags); } // 0x839AD252B0708F35
static void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(const char* cutsceneName, int playbackFlags, int flags) { invoke<Void>(0xD99030, cutsceneName, playbackFlags, flags); } // 0x046FF102DCE74A94
static void REMOVE_CUTSCENE() { invoke<Void>(0xD990B0); } // 0xDD291722ADDCBD60
static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xD990E0); } // 0x0DDDD9D153BCF51F
static BOOL HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xD99110, cutsceneName); } // 0xC4ADACBD3FE3F266
static void SET_SCRIPT_CAN_START_CUTSCENE(int threadId) { invoke<Void>(0xD99160, threadId); } // 0xA82578E07F14DD90
static BOOL CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() { return invoke<BOOL>(0xD99180); } // 0xB3FA103AA6383C28
static BOOL IS_CUTSCENE_PLAYBACK_FLAG_SET(int flag) { return invoke<BOOL>(0xD991C0, flag); } // 0xFE2EB239B608CDF9
static void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(const char* cutsceneEntName, int p1, int p2) { invoke<Void>(0xD99200, cutsceneEntName, p1, p2); } // 0x7901DE0AC779EB29
static void REQUEST_CUT_FILE(const char* cutsceneName) { invoke<Void>(0xD99220, cutsceneName); } // 0x25D5067F6C88E193
static BOOL HAS_CUT_FILE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xD992D0, cutsceneName); } // 0xC0E9475F48788356
static void REMOVE_CUT_FILE(const char* cutsceneName) { invoke<Void>(0xD99300, cutsceneName); } // 0x80933F349127EBB9
static int GET_CUT_FILE_CONCAT_COUNT(const char* cutsceneName) { return invoke<int>(0xD99380, cutsceneName); } // 0xF4D7464FFDD56FE3
static void START_CUTSCENE(int flags) { invoke<Void>(0xD993B0, flags); } // 0xED65412F8B26ED99
static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int flags) { invoke<Void>(0xD993E0, x, y, z, flags); } // 0x9B3A50426C952520
static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0xD993F0, p0); } // 0xB479965CBAA3EAE1
static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xD99430); } // 0xA7E4AA8D29D3DAC1
static void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { invoke<Void>(0xD99460, x, y, z, p3, p4); } // 0x20D6C2B867DA2FCA
static void SET_CUTSCENE_ORIGIN_AND_ORIENTATION(float x1, float y1, float z1, float x2, float y2, float z2, int p6) { invoke<Void>(0xD99480, x1, y1, z1, x2, y2, z2, p6); } // 0xB638C6C35B6CA9DF
static int GET_CUTSCENE_TIME() { return invoke<int>(0xD99490); } // 0x15EF8F22A719BE5E
static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0xD994F0); } // 0xA4A6A6336888604F
static int GET_CUTSCENE_END_TIME() { return invoke<int>(0xD99540); } // 0x0E805BBAA9779838
static int GET_CUTSCENE_PLAY_DURATION() { return invoke<int>(0xD99570); } // 0xC418F430F1F93AEE
static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xD995A0); } // 0xD9E3F021F9D8CEF9
static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xD995D0); } // 0xC9BA6D804FA4FAAA
static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xD99600); } // 0x0CB7695268A7F50F
static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xD99630); } // 0xFD216000DC314A92
static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0xD99660); } // 0xF9B18AB51CBCDF5C
static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xD99680, cutsceneEntName, modelHash); } // 0xD461826371A3782B
static int GET_CUTSCENE_CONCAT_SECTION_PLAYING() { return invoke<int>(0xD99730); } // 0x6BC87CF59151C630
static BOOL IS_CUTSCENE_AUTHORIZED(const char* cutsceneName) { return invoke<BOOL>(0xD99760, cutsceneName); } // 0xAEF10EAFB97F5540
static int DOES_CUTSCENE_HANDLE_EXIST(int cutsceneHandle) { return invoke<int>(0xD99770, cutsceneHandle); } // 0x9AF94A69465A9B87
static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) { invoke<Void>(0xD99810, cutscenePed, cutsceneEntName, p2, modelHash, p4); } // 0xF293D66D4452C854
static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xD99830, cutsceneEntName, modelHash); } // 0x4240B5D04F91480C
static void SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(Hash modelHash) { invoke<Void>(0xD99860, modelHash); } // 0x256C30FDAB915E2B
static void SET_CUTSCENE_TRIGGER_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xD99880, x1, y1, z1, x2, y2, z2); } // 0x09B8E842C8055B05
static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xD99920, cutsceneEntName, modelHash); } // 0x18C8A35E0901C0E2
static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xD999A0, cutsceneEntName, modelHash); } // 0xD8FC13DA1BA1DBA2
static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0xD99A20, p0); } // 0x2B60F53D06BC6971
static void SET_PAD_CAN_SHAKE_DURING_CUTSCENE(BOOL toggle) { invoke<Void>(0xD99A60, toggle); } // 0x9C22AADBAF330B36
static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD99AA0, p0, p1, p2, p3); } // 0x1837D912F4EDCA95
static void SET_CUTSCENE_MULTIHEAD_FADE(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD99B50, p0, p1, p2, p3); } // 0x7882946B06ED216B
static void SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(BOOL p0) { invoke<Void>(0xD99B60, p0); } // 0x1231218F0BB0653E
static BOOL IS_MULTIHEAD_FADE_UP() { return invoke<BOOL>(0xD99B70); } // 0x4A0B7E53EBC937D5
static void NETWORK_SET_MOCAP_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xD99B80, p0); } // 0xF74640C4B28C71BD
static void SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(BOOL p0) { invoke<Void>(0xD99BC0, p0); } // 0xD0860FF81E162052
static BOOL CAN_USE_MOBILE_PHONE_DURING_CUTSCENE() { return invoke<BOOL>(0xD99C00); } // 0xAF078BC665CCACB9
static void SET_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xD99C50, p0); } // 0xEB234554CFDE9162
static void SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE() { invoke<Void>(0xD99C90); } // 0xFABF472ADCE66A1E
static void SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xD99CC0, cutsceneEntName, componentId, drawableId, textureId, modelHash); } // 0xFE61105198EA3496
static void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(const char* cutsceneEntName, Ped ped, Hash modelHash) { invoke<Void>(0xD99CE0, cutsceneEntName, ped, modelHash); } // 0x2F19C4305F0B8DA7
static BOOL DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xD99D00, cutsceneEntName, modelHash); } // 0x24CAD023099769B1
static void SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xD99DA0, cutsceneEntName, componentId, drawableId, textureId, modelHash); } // 0x60A0A4CD710160D5
static BOOL HAS_CUTSCENE_CUT_THIS_FRAME() { return invoke<BOOL>(0xD99E60); } // 0xF1FEB57E542C41F1
static void DATAFILE_WATCH_REQUEST_ID(int requestId) { invoke<Void>(0xD9DCC0, requestId); } // 0xAF6DC1461CCA36F8
static void DATAFILE_CLEAR_WATCH_LIST() { invoke<Void>(0xD9DCD0); } // 0x6CB3106C584382B9
static BOOL DATAFILE_IS_VALID_REQUEST_ID(int index) { return invoke<BOOL>(0xD9DD10, index); } // 0xF224222A0E09BF20
static BOOL DATAFILE_HAS_LOADED_FILE_DATA(int requestId) { return invoke<BOOL>(0xD9DD50, requestId); } // 0xDC01725421245C5C
static BOOL DATAFILE_HAS_VALID_FILE_DATA(int requestId) { return invoke<BOOL>(0xD9DDA0, requestId); } // 0x5661708D0BBCF4DC
static BOOL DATAFILE_SELECT_ACTIVE_FILE(int requestId, Any p1) { return invoke<BOOL>(0xD9DE20, requestId, p1); } // 0x8CE598AF9875FE1C
static BOOL DATAFILE_DELETE_REQUESTED_FILE(int requestId) { return invoke<BOOL>(0xD9DE50, requestId); } // 0xD1BF9B570A0EBA3A
static BOOL UGC_CREATE_CONTENT(Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p7) { return invoke<BOOL>(0xD9DE80, data, dataCount, contentName, description, tagsCsv, contentTypeName, publish, p7); } // 0x58977C73F104C1B2
static BOOL UGC_CREATE_MISSION(const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p5) { return invoke<BOOL>(0xD9DEE0, contentName, description, tagsCsv, contentTypeName, publish, p5); } // 0xF3AB7B665999602E
static BOOL UGC_UPDATE_CONTENT(const char* contentId, Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p7) { return invoke<BOOL>(0xD9DF20, contentId, data, dataCount, contentName, description, tagsCsv, contentTypeName, p7); } // 0xC87EAB233B259C6E
static BOOL UGC_UPDATE_MISSION(const char* contentId, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p5) { return invoke<BOOL>(0xD9DF70, contentId, contentName, description, tagsCsv, contentTypeName, p5); } // 0x605AAC6915C9EFC7
static BOOL UGC_SET_PLAYER_DATA(const char* contentId, float rating, const char* contentTypeName, Any p3) { return invoke<BOOL>(0xD9DFB0, contentId, rating, contentTypeName, p3); } // 0x18EEF6291DBCAC51
static BOOL DATAFILE_SELECT_UGC_DATA(int p0, Any p1) { return invoke<BOOL>(0xD9DFE0, p0, p1); } // 0x7C54D010A8B19CEC
static BOOL DATAFILE_SELECT_UGC_STATS(int p0, BOOL p1, Any p2) { return invoke<BOOL>(0xD9E010, p0, p1, p2); } // 0x91052312822C7C59
static BOOL DATAFILE_SELECT_UGC_PLAYER_DATA(int p0, Any p1) { return invoke<BOOL>(0xD9E040, p0, p1); } // 0x71CC7FE2C69822E1
static BOOL DATAFILE_SELECT_CREATOR_STATS(int p0, Any p1) { return invoke<BOOL>(0xD9E070, p0, p1); } // 0x5B82DD87BDF8750F
static BOOL DATAFILE_LOAD_OFFLINE_UGC(const char* filename, Any p1) { return invoke<BOOL>(0xD9E0A0, filename, p1); } // 0x571A025B07823518
static void DATAFILE_CREATE(int p0) { invoke<Void>(0xD9E0D0, p0); } // 0x87BA8B7277ED162C
static void DATAFILE_DELETE(int p0) { invoke<Void>(0xD9E0E0, p0); } // 0x27DEA4A6845A22BC
static void DATAFILE_STORE_MISSION_HEADER(int p0) { invoke<Void>(0xD9E1E0, p0); } // 0x16AC7DBD0702DC76
static void DATAFILE_FLUSH_MISSION_HEADER() { invoke<Void>(0xD9E1F0); } // 0x7D2CE2417CB2FE19
static Any* DATAFILE_GET_FILE_DICT(int p0) { return invoke<Any*>(0xD9E2C0, p0); } // 0x6C99356A4D3C7B09
static BOOL DATAFILE_START_SAVE_TO_CLOUD(const char* filename, Any p1) { return invoke<BOOL>(0xD9E2F0, filename, p1); } // 0xA8F33BC779C28BFB
static BOOL DATAFILE_UPDATE_SAVE_TO_CLOUD(BOOL* p0) { return invoke<BOOL>(0xD9E380, p0); } // 0x3CBCE367459737AD
static BOOL DATAFILE_IS_SAVE_PENDING() { return invoke<BOOL>(0xD9E3D0); } // 0xB00920C3C99A34C5
static BOOL DATAFILE_LOAD_OFFLINE_UGC_FOR_ADDITIONAL_DATA_FILE(Any p0, Any p1) { return invoke<BOOL>(0xD9E3F0, p0, p1); } // 0xCCCB75189BBBA6DE
static void DATAFILE_DELETE_FOR_ADDITIONAL_DATA_FILE(Any p0) { invoke<Void>(0xD9E420, p0); } // 0xEFE2DF6B67066118
static Any* DATAFILE_GET_FILE_DICT_FOR_ADDITIONAL_DATA_FILE(Any p0) { return invoke<Any*>(0xD9E520, p0); } // 0xDC393E3CE8A00E9D
static void DATADICT_SET_BOOL(Any* objectData, const char* key, BOOL value) { invoke<Void>(0xD9E550, objectData, key, value); } // 0xC98890A6BBB9A0D4
static void DATADICT_SET_INT(Any* objectData, const char* key, int value) { invoke<Void>(0xD9E570, objectData, key, value); } // 0xCBF0312D1370143F
static void DATADICT_SET_FLOAT(Any* objectData, const char* key, float value) { invoke<Void>(0xD9E590, objectData, key, value); } // 0xEA11FA8AE2EB4025
static void DATADICT_SET_STRING(Any* objectData, const char* key, const char* value) { invoke<Void>(0xD9E5B0, objectData, key, value); } // 0xA47FC2B828F55E4D
static void DATADICT_SET_VECTOR(Any* objectData, const char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0xD9E5D0, objectData, key, valueX, valueY, valueZ); } // 0xD0DC0D28BA9FD4AD
static Any* DATADICT_CREATE_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xD9E600, objectData, key); } // 0x5E298CFB85D1AEE8
static Any* DATADICT_CREATE_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xD9E630, objectData, key); } // 0xC24FD04ED00751BC
static BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return invoke<BOOL>(0xD9E660, objectData, key); } // 0x9F0EF572EFEE0A9C
static int DATADICT_GET_INT(Any* objectData, const char* key) { return invoke<int>(0xD9E710, objectData, key); } // 0x81A9ADA13F72AEDD
static float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return invoke<float>(0xD9E7B0, objectData, key); } // 0xA481424344CBC893
static const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return invoke<const char*>(0xD9E870, objectData, key); } // 0xC2ED3920E9296F36
static Vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return invoke<Vector3>(0xD9E920, objectData, key); } // 0xEF1E4460FF33D01E
static Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xD9E9F0, objectData, key); } // 0x6BDE656A2A2932FC
static Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xD9EA90, objectData, key); } // 0x8FBF3E1A58A9D798
static int DATADICT_GET_TYPE(Any* objectData, const char* key) { return invoke<int>(0xD9EB30, objectData, key); } // 0xA8F96580C10C5F9E
static void DATAARRAY_ADD_BOOL(Any* arrayData, BOOL value) { invoke<Void>(0xD9EBD0, arrayData, value); } // 0xDE4827405E9BE9A9
static void DATAARRAY_ADD_INT(Any* arrayData, int value) { invoke<Void>(0xD9EBF0, arrayData, value); } // 0x4BEA39F9F6950599
static void DATAARRAY_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0xD9EC10, arrayData, value); } // 0x0F24467993708BCC
static void DATAARRAY_ADD_STRING(Any* arrayData, const char* value) { invoke<Void>(0xD9EC30, arrayData, value); } // 0xABC288F63B017656
static void DATAARRAY_ADD_VECTOR(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0xD9EC50, arrayData, valueX, valueY, valueZ); } // 0xB8DA6C44772DBE30
static Any* DATAARRAY_ADD_DICT(Any* arrayData) { return invoke<Any*>(0xD9EC80, arrayData); } // 0xFA8B98F1023E7B3E
static BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0xD9ECB0, arrayData, arrayIndex); } // 0x2150C2FC641364CC
static int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return invoke<int>(0xD9ED20, arrayData, arrayIndex); } // 0xB64F599E8DBD9678
static float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xD9ED80, arrayData, arrayIndex); } // 0xCEBBA737179CE3D0
static const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<const char*>(0xD9EDF0, arrayData, arrayIndex); } // 0x446BB52C35DB68A0
static Vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0xD9EE60, arrayData, arrayIndex); } // 0x83D3CBA972660C58
static Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0xD9EEE0, arrayData, arrayIndex); } // 0x5B54BD7ACF637593
static int DATAARRAY_GET_COUNT(Any* arrayData) { return invoke<int>(0xD9EF40, arrayData); } // 0x2A32420E04AE5787
static int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0xD9EF60, arrayData, arrayIndex); } // 0x939FE19A2CFC3266
static BOOL DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) { return invoke<BOOL>(0xDA0030, entity, propertyName, timestamp); } // 0xD54324BF37C12BEE
static BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0xDA0060, entity, propertyName, value); } // 0xF46ECFD5526E8FF7
static BOOL DECOR_SET_FLOAT(Entity entity, const char* propertyName, float value) { return invoke<BOOL>(0xDA0140, entity, propertyName, value); } // 0x2475DDACFF83CF93
static BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0xDA0220, entity, propertyName, value); } // 0xEE8559BBFC27701B
static BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return invoke<BOOL>(0xDA02F0, entity, propertyName); } // 0x3F40AE65F056B43D
static float DECOR_GET_FLOAT(Entity entity, const char* propertyName) { return invoke<float>(0xDA03B0, entity, propertyName); } // 0x3D421DC31587DC44
static int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0xDA0480, entity, propertyName); } // 0xE2F6FE9B61232165
static BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0xDA0540, entity, propertyName); } // 0xD130E7CDEE903624
static BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0xDA05C0, entity, propertyName); } // 0x97AC7D93ABD65D96
static void DECOR_REGISTER(const char* propertyName, int type) { invoke<Void>(0xDA0640, propertyName, type); } // 0x93900D232987104E
static BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0xDA06C0, propertyName, type); } // 0x77B62CAA5DF0922A
static void DECOR_REGISTER_LOCK() { invoke<Void>(0xDA0730); } // 0x1B3E687F45E0A870
static BOOL ARE_ANY_CCS_PENDING() { return invoke<BOOL>(0xDD2B50); } // 0x822B00714BA99033
static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0xDD2B80, dlcHash); } // 0x087611B922B50F13
static BOOL DLC_CHECK_CLOUD_DATA_CORRECT() { return invoke<BOOL>(0xDD2BB0); } // 0xAB737F5FE1576754
static int GET_EXTRACONTENT_CLOUD_RESULT() { return invoke<int>(0xDD2BC0); } // 0x3FB25645DE01436C
static BOOL DLC_CHECK_COMPAT_PACK_CONFIGURATION() { return invoke<BOOL>(0xDD2BD0); } // 0xDB6AE360ACDD6885
static BOOL GET_EVER_HAD_BAD_PACK_ORDER() { return invoke<BOOL>(0xDD2BE0); } // 0x0859E74838FA7854
static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xDD2C00); } // 0xDCE42B3C644D1A4E
static BOOL GET_IS_INITIAL_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xDD2C20); } // 0x55002CD5D725C226
static BOOL HAS_CLOUD_REQUESTS_FINISHED(BOOL* p0, int unused) { return invoke<BOOL>(0xDD2C30, p0, unused); } // 0x80A220AA99C04E50
static void ON_ENTER_SP() { invoke<Void>(0xDD2C50); } // 0xCD2016D0514F1788
static void ON_ENTER_MP() { invoke<Void>(0xDD2CA0); } // 0x81F7C34FD4E856D5
static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xDB2290, entity); } // 0xFC8BFE4B41177C22
static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0xDB22F0, entity, p1); } // 0x7C9905528EE2C3AB
static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0xDB2370, entity); } // 0xF98CC1C0E657B6CB
static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0xDB23D0, entity); } // 0x4DBCC7D5D01D67FA
static BOOL DOES_ENTITY_HAVE_SKELETON(Entity entity) { return invoke<BOOL>(0xDB2430, entity); } // 0x3D4B0DBFA0E78D88
static BOOL DOES_ENTITY_HAVE_ANIM_DIRECTOR(Entity entity) { return invoke<BOOL>(0xDB24C0, entity); } // 0x14A90D05363A2A09
static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return invoke<BOOL>(0xDB2520, entity, animDict, animName, p3); } // 0x67C276550F2DBF33
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xDB2550, entity); } // 0x6E470765558FCD9E
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0xDB25B0, entity); } // 0xF76AF9D45D6BDA45
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xDB2610, entity); } // 0xFFF4FB66DA549D0F
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0xDB2670, entity1, entity2, p2); } // 0x9B3D4335E0EDB0BE
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xDB26A0, entity1, entity2, traceType); } // 0xAD915B5E38F323E5
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_ADJUST_FOR_COVER(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xDB26D0, entity1, entity2, traceType); } // 0x4EAD67A3E57A9458
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0xDB2700, entity1, entity2); } // 0x300A997AE991C0A8
static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0xDB2730, entity); } // 0x14E25ED5E75102C8
static Entity _GET_LAST_ENTITY_HIT_BY_ENTITY(Entity entity) { return invoke<Entity>(0xDB27B0, entity); } // 0xDA02F6FBBDEBF43D
static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0xDB2840, entity); } // 0x28637BDE402A5913
static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0xDB2920, entity); } // 0xB6BF12B4CF844B3E
static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0xDB2A20, entity); } // 0x2B2ECB6F6371E59E
static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xDB2A90, entity, animDict, animName); } // 0x82E64DE58A6B84A8
static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xDB2AC0, entity, animDict, animName); } // 0x58C2315AA20FAF06
static float GET_ANIM_DURATION(const char* animDict, const char* animName) { return invoke<float>(0xDB2AF0, animDict, animName); } // 0x6CEF2D1ADD6A5E7F
static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xDB2B30, entity); } // 0xAD0F9A0F639285AA
static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0xDB2BC0, entity, alive); } // 0xD1A6A821F5AC81DB
static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0xDB2C70, entity); } // 0x90D0E0397D3F7690
static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xDB2D10, entity); } // 0xE4833C1EFC5928A6
static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0xDB2D80, entity); } // 0xD7A7E267DEDA742E
static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0xDB2DF0, entity); } // 0xCFC0C995455A6204
static float GET_ENTITY_HEADING_FROM_EULERS(Entity entity) { return invoke<float>(0xDB2EA0, entity); } // 0xC5A566D912050568
static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0xDB3010, entity); } // 0x8D91ADE44AC79BC9
static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xDB3060, entity); } // 0xF8A78594664D23A6
static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0xDB30B0, entity, value); } // 0xF0259D91B002AE9F
static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0xDB3120, entity, X, Y, Z, atTop, inWorldCoords); } // 0x12C7364D43F17CF1
static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xDB3160, entity); } // 0x2399A6E4929050EE
static void GET_ENTITY_MATRIX(Entity entity, Vector3* forwardVector, Vector3* rightVector, Vector3* upVector, Vector3* position) { invoke<Void>(0xDB31E0, entity, forwardVector, rightVector, upVector, position); } // 0xAAB58D9C726404C0
static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0xDB3330, entity); } // 0x4B423FAA24E8ABF0
static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0xDB3350, entity, posX, posY, posZ); } // 0xAD8278DAEC2CC059
static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, Vector3 xyz) { return invoke<Vector3>(0xDB3470, entity, xyz); } // 0x0D1381B6E0F3987D
static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0xDB3530, entity); } // 0xED4193081E867405
static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0xDB3560, entity, x, y, z, w); } // 0xB66CD98548798F26
static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0xDB36A0, entity); } // 0x5E674CD80769B53A
static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<Vector3>(0xDB36D0, entity, rotationOrder); } // 0x88124E0D60FB8D11
static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0xDB3840, entity); } // 0x47507DD57C93B472
static const char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<const char*>(0xDB3920, entity, script); } // 0xED22194AB8539910
static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xDB3980, entity); } // 0xDF93B3CFAC96698F
static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0xDB3A30, entity, relative); } // 0x4ED40BE47D8C1896
static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0xDB3B70, entity); } // 0x032CEF99C0D59B73
static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0xDB3BC0, entity); } // 0xE5741C6B6539231F
static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xDB3C90, entity); } // 0x0646D07BB2D516CD
static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0xDB3CA0, entity); } // 0xBD545F8729E9F413
static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0xDB3CB0, entity); } // 0xE93EDE86BBB66532
static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0xDB3CC0, entity, boneIndex); } // 0x75DF72FC74EED046
static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0xDB3D30, entity); } // 0xBD9259F686649141
static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0xDB3D70, entity, team); } // 0x87384D2CF86135EB
static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0xDB3DD0, entity); } // 0x75A2D1BBA9D95D0E
static int GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xDB3E40, entity); } // 0xA598E8A456B0A2F7
static BOOL IS_AN_ENTITY(ScrHandle handle) { return invoke<BOOL>(0xDB3EB0, handle); } // 0x5DA1DE6C940D22C1
static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0xDB3EF0, entity); } // 0x0101C509A6E67F99
static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0xDB3F50, entity); } // 0x110821AE6C63DD4F
static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0xDB3FB0, entity); } // 0x55B80B6E7AB61270
static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xDB4010, entity); } // 0xBE79A96C521F4432
static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0xDB4070, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); } // 0x65FFA94B82A71741
static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0xDB40C0, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0xFAA48325A90263BE
static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xDB4110, entity); } // 0xA3736D76B0E93E93
static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xDB41A0, entity); } // 0x592E6281C16BB0F2
static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0xDB4230, entity); } // 0x5B9219522937741D
static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xDB42C0, entity); } // 0xB431D60610E7F85F
static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0xDB4350, from, to); } // 0x21478251925DBFD7
static BOOL IS_ENTITY_DEAD(Entity entity, BOOL p1) { return invoke<BOOL>(0xDB4380, entity, p1); } // 0x1C2F771CDC87A3A5
static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0xDB4440, entity); } // 0x3F18810075C77D41
static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ, Any p10) { return invoke<BOOL>(0xDB4470, entity, x1, y1, z1, x2, y2, z2, width, debug, includeZ, p10); } // 0x5105BE70DEF1F5FB
static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0xDB44C0, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0xFCEB38AB3EDCF9BE
static BOOL IS_ENTITY_IN_ZONE(Entity entity, const char* zone) { return invoke<BOOL>(0xDB4510, entity, zone); } // 0xDECEB0709855F876
static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xDB4600, entity); } // 0x69799E0840A34AFB
static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0xDB4630, entity); } // 0x837FF265C016E3B7
static void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity entity, BOOL toggle) { invoke<Void>(0xDB46A0, entity, toggle); } // 0xD1426896B0800D21
static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xDB4700, entity); } // 0xCB5CAFF0A4A8B74B
static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return invoke<BOOL>(0xDB47A0, entity, animDict, animName, taskFlag); } // 0x13CCB1AD131C1082
static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0xDB47D0, entity); } // 0x0D7186810BF44109
static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0xDB4830, entity, targetEntity); } // 0x685171EED42BC4DF
static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0xDB4860, entity, modelHash); } // 0xE68E61D23A75BC3E
static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xDB4890, entity, angle); } // 0xE99B9AC112F55D16
static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xDB4920, entity); } // 0xD1F1A906BA9226BE
static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0xDB4980, entity); } // 0xE5E2AE8B19267B8A
static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0xDB49E0, entity); } // 0x870372B586EFB3EE
static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0xDB4A60, entity); } // 0xF6C26AE940C14749
static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xDB4A90, entityModelHash, x, y, z, p4); } // 0xB74F8EB686030603
static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0xDB4AD0, entity); } // 0x642A49B0C066F723
static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { invoke<Void>(0xDB4BA0, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); } // 0x96CCECDBC57DA984
static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { invoke<Void>(0xDB4C40, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); } // 0xE592D924D5438108
static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, Any p15) { invoke<Void>(0xDB4CC0, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15); } // 0x4D306DD94DD6FDBA
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0xDB4E60, entity1, entity2, boneIndex1, boneIndex2, p4, p5); } // 0x8026FC64F8CCD292
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE_Y_FORWARD(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0xDB4E90, entity1, entity2, boneIndex1, boneIndex2, p4, p5); } // 0xB30977F20556F296
static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0xDB4EC0, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); } // 0xDE55146A7765454D
static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0xDB5020, entity); } // 0x0D84113E3B923524
static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return invoke<int>(0xDB5030, entity, boneName); } // 0x365DC1E8054AF31A
static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0xDB5100, entity); } // 0xE4DC7B3DD712372B
static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xDB5160, entity); } // 0x81A7F3CD719DD53B
static void DETACH_ENTITY(Entity entity, BOOL dynamic, BOOL collision) { invoke<Void>(0xDB5170, entity, dynamic, collision); } // 0x837D67618BF89034
static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0xDB5190, entity, toggle); } // 0x5D7CD709B34C90F0
static void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity entity, BOOL toggle) { invoke<Void>(0xDB51B0, entity, toggle); } // 0x11C125313CB8ADA2
static BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0xDB52A0, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); } // 0x5ED9595F4AC7D134
static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0xDB5310, entity, syncedScene, animation, propName, p4, p5, p6, p7); } // 0x381D671BCFC294D9
static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2, const char* p6, const char* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0xDB5360, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9, p10, p11); } // 0xB75A7F8E568F3BE6
static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2) { return invoke<BOOL>(0xDB5450, x1, y1, z1, x2, y2, z2); } // 0xDA2A1BB9D3A890AC
static BOOL STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return invoke<BOOL>(0xDB54F0, entity, animation, animGroup, p3); } // 0x1D949F0AD44C7F05
static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xDB5510, entity, p1, p2); } // 0xC0086E5CBF13BBF7
static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0xDB5550, entity, actionHash); } // 0x5D640DD02AFD9F75
static BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xDB5580, animDictionary, animName, p2, p3, p4); } // 0xA2A6AE50772C4FDB
static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) { invoke<Void>(0xDB55C0, entity, animDictionary, animName, time); } // 0x6D75623C644D6F83
static void SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) { invoke<Void>(0xDB55E0, entity, animDictionary, animName, speedMultiplier); } // 0x458AA1A01F53901E
static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xDB5600, entity, p1, p2); } // 0xEE0BCDB1B5E36BCB
static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0xDB5620, entity); } // 0x76AD45C3946F87DD
static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0xDB5680, ped); } // 0xF09E30AF1B8FB379
static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0xDB56E0, vehicle); } // 0x68298CA6191CDFDB
static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0xDB5740, object); } // 0xB3B56385ECA230B4
static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xDB57A0, entity, toggle); } // 0x999C62072AF920FD
static BOOL GET_ENTITY_CAN_BE_DAMAGED(Entity entity) { return invoke<BOOL>(0xDB5830, entity); } // 0xCC7210A943D5E698
static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { invoke<Void>(0xDB5890, entity, bCanBeDamaged, relGroup); } // 0x5355DCB5D35ADF0F
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0xDB5960, entity, toggle); } // 0x8FEAF7F0538CEF55
static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xDB59E0, entity, toggle); } // 0xE78E66BE6EB7D534
static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xDB5AE0, entity, toggle, keepPhysics); } // 0x44C48AC14D3C09ED
static BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return invoke<BOOL>(0xDB5B10, entity); } // 0x8473361800D1B85B
static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xDB5B70, entity, toggle, keepPhysics); } // 0x52528272B59EBA11
static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0xDB5BA0, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0xB2BD5837A8D3CEDA
static void SET_ENTITY_COORDS_WITHOUT_PLANTS_RESET(Entity entity, float xPos, float yPos, float zPos, BOOL alive, BOOL deadFlag, BOOL ragdollFlag, BOOL clearArea) { invoke<Void>(0xDB5BF0, entity, xPos, yPos, zPos, alive, deadFlag, ragdollFlag, clearArea); } // 0x4FFCA145489D86B7
static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float x, float y, float z, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0xDB5C40, entity, x, y, z, xAxis, yAxis, zAxis); } // 0x62C438C53BB57AFD
static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0xDB5C70, entity, toggle); } // 0xC7D381E526A969D3
static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0xDB5CF0, entity, heading); } // 0x5C96CEA06531AB03
static void SET_ENTITY_HEALTH(Entity entity, int health, int p2) { invoke<Void>(0xDB5D00, entity, health, p2); } // 0xD25E9BDC14A0B649
static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0xDB5D20, entity, toggle); } // 0x935364B4448CD584
static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0xDB5E00, entity, p1, p2); } // 0x87EDE48547CC8942
static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0xDB5F20, entity, toggle); } // 0x4CD0763EB5DCD503
static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle, Any p2) { invoke<Void>(0xDB5F90, entity, toggle, p2); } // 0x788F35D395511DFE
static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0xDB5FE0, entity); } // 0x5E22EA3310AF52EA
static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xDB6050, entity, speed); } // 0xB4E9A7A3A518ECC1
static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0xDB60C0, entity, toggle); } // 0x1F7539C841C2A71F
static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0xDB6140, entity, p1, p2); } // 0x7AF89DBF250A2C27
static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL steamProof, BOOL p7, BOOL waterProof) { invoke<Void>(0xDB6210, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, waterProof); } // 0xD0F1DB0E50B367AD
static BOOL GET_ENTITY_PROOFS(Entity entity, BOOL* bulletProof, BOOL* fireProof, BOOL* explosionProof, BOOL* collisionProof, BOOL* meleeProof, BOOL* steamProof, BOOL* p7, BOOL* drownProof) { return invoke<BOOL>(0xDB6350, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, drownProof); } // 0x3A4536D7E89CD377
static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xDB6480, entity, x, y, z, w); } // 0xF425E0B05426E088
static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0xDB6650, entity, toggle); } // 0x3A95CBA6857C4C37
static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { invoke<Void>(0xDB66A0, entity, pitch, roll, yaw, rotationOrder, p5); } // 0xCF39804E8C88080E
static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL p2) { invoke<Void>(0xDB66C0, entity, toggle, p2); } // 0x4285E11B28063EE0
static void SET_ENTITY_WATER_REFLECTION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0xDB66E0, entity, toggle); } // 0x119BDA4392B5BAB2
static void SET_ENTITY_MIRROR_REFLECTION_FLAG(Entity entity, BOOL p1) { invoke<Void>(0xDB6750, entity, p1); } // 0xDE9AC11F2927457D
static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xDB67C0, entity, x, y, z); } // 0x1AB7223AC0702871
static void SET_ENTITY_ANGULAR_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xDB6850, entity, x, y, z); } // 0x7B6B10D7260C93CF
static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0xDB68E0, entity, toggle); } // 0xBF861D73D95BF415
static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0xDB6A00, entity, value); } // 0xF88FC425EC7D675D
static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0xDB6A50, entity); } // 0x5748CF36AE9EC4E1
static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0xDB6AB0, entity, alphaLevel, skin); } // 0xC1DAC4DA85BB166D
static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0xDB6B10, entity); } // 0x3D2DD3A02C8AA9A8
static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0xDB6B70, entity); } // 0xC14A2FED36D0EBB9
static void RESET_PICKUP_ENTITY_GLOW(Entity entity) { invoke<Void>(0xDB6B80, entity); } // 0x5145F9B426021578
static void SET_PICKUP_COLLIDES_WITH_PROJECTILES(Any p0, Any p1) { invoke<Void>(0xDB6BC0, p0, p1); } // 0xD28214FC77C81F2E
static void SET_ENTITY_SORT_BIAS(Entity entity, float p1) { invoke<Void>(0xDB6C20, entity, p1); } // 0xF1E557B19688B30D
static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0xDB6C80, entity, toggle); } // 0x05177DCE3DD6F271
static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0xDB6CE0, entity, toggle); } // 0x0615DFA55885D5B3
static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0xDB6D60, entity, state); } // 0x20FF02ED0F707CBC
static void SET_ENTITY_IS_IN_VEHICLE(Entity entity) { invoke<Void>(0xDB6DC0, entity); } // 0x1F6D8B404B68A2BC
static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xDB6E20, x, y, z, radius, originalModel, newModel, p6); } // 0x7C601010148C8DDB
static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xDB6F00, x, y, z, radius, originalModel, newModel, p6); } // 0xD80C3522AC21FDB8
static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xDB6F90, x, y, z, radius, modelHash, p5); } // 0xE226F16D30AF5945
static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xDB7060, x, y, z, radius, modelHash, p5); } // 0x77AE88CF56FF88EA
static void REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xDB7130, x, y, z, radius, modelHash, p5); } // 0xC94AE68759E1B3BD
static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0xDB71C0, x, y, z, p3, modelHash, p5); } // 0x9D23D954FF4403CD
static void REMOVE_FORCED_OBJECT(float x, float y, float z, float p3, Hash modelHash) { invoke<Void>(0xDB7290, x, y, z, p3, modelHash); } // 0x66D6CECFEEC87130
static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { invoke<Void>(0xDB7310, entity1, entity2, thisFrameOnly); } // 0x015E1BBD4DB33542
static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0xDB7340, entity, toggle); } // 0xD7AC50B9FB801C60
static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xDB73A0, entity, toggle); } // 0x06A3C9A5604F9F4C
static void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xDB7420, entity, toggle); } // 0xE59BDA10CE05FD35
static void SET_WAIT_FOR_COLLISIONS_BEFORE_PROBE(Entity entity, BOOL toggle) { invoke<Void>(0xDB74A0, entity, toggle); } // 0x5A91FB116578FE09
static void SET_ENTITY_NOWEAPONDECALS(Entity entity, BOOL p1) { invoke<Void>(0xDB7500, entity, p1); } // 0x33D2D42AC3E42D0B
static void SET_ENTITY_USE_MAX_DISTANCE_FOR_WATER_REFLECTION(Entity entity, BOOL p1) { invoke<Void>(0xDB7570, entity, p1); } // 0xAC895C06C6322C1E
static Vector3 GET_ENTITY_BONE_ROTATION(Entity entity, int boneIndex) { return invoke<Vector3>(0xDB75D0, entity, boneIndex); } // 0x8ED7A7A44B79007B
static Vector3 GET_ENTITY_BONE_POSTION(Entity entity, int boneIndex) { return invoke<Vector3>(0xDB7640, entity, boneIndex); } // 0x1D49B6C92B9A5B1C
static Vector3 GET_ENTITY_BONE_OBJECT_ROTATION(Entity entity, int boneIndex) { return invoke<Vector3>(0xDB76B0, entity, boneIndex); } // 0x5834A431DBD4B5E5
static Vector3 GET_ENTITY_BONE_OBJECT_POSTION(Entity entity, int boneIndex) { return invoke<Vector3>(0xDB7720, entity, boneIndex); } // 0xD7F3495D8307C112
static int GET_ENTITY_BONE_COUNT(Entity entity) { return invoke<int>(0xDB7810, entity); } // 0x132FBDC52691A1A7
static void ENABLE_ENTITY_BULLET_COLLISION(Entity entity) { invoke<Void>(0xDB78C0, entity); } // 0x9C69236A3D0F1B96
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0xDB7920, entity1, entity2); } // 0x6662B1F8A5BFA0F2
static void SET_ENTITY_CANT_CAUSE_COLLISION_DAMAGED_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0xDB79A0, entity1, entity2); } // 0x37419414971A4C4B
static void SET_ALLOW_MIGRATE_TO_SPECTATOR(Entity entity, Any p1) { invoke<Void>(0xDB7A20, entity, p1); } // 0xAD93DB374DA8B3C7
static Entity GET_ENTITY_OF_TYPE_ATTACHED_TO_ENTITY(Entity entity, Hash modelHash) { return invoke<Entity>(0xDB7A90, entity, modelHash); } // 0x21B8871CE9CD1479
static void SET_PICK_UP_BY_CARGOBOB_DISABLED(Entity entity, BOOL toggle) { invoke<Void>(0xDB7B30, entity, toggle); } // 0x70BAF7723F26069A
static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0xDB9360, ped, name); } // 0x26FA2603829F9CF9
static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int eventType) { invoke<Void>(0xDB93C0, name, eventType); } // 0x0A0952DE8943B17C
static void BLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xDB9400, name, eventType); } // 0x7A4EC4F532D19DFA
static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xDB9430, name, eventType); } // 0x6E32AA16336291E4
static int ADD_SHOCKING_EVENT_AT_POSITION(int eventType, float x, float y, float z, float duration) { return invoke<int>(0xDB9470, eventType, x, y, z, duration); } // 0x18B384412B836744
static int ADD_SHOCKING_EVENT_FOR_ENTITY(int eventType, Entity entity, float duration) { return invoke<int>(0xDB9500, eventType, entity, duration); } // 0x378DEB95883BFE01
static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int eventType, float x, float y, float z, float radius) { return invoke<BOOL>(0xDB95B0, eventType, x, y, z, radius); } // 0xD633AC6AD3D4D297
static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0xDB95E0, event); } // 0x6E8A7BB566D1F7AF
static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xDB9610, p0); } // 0xEAFAA716662898B8
static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xDB9630); } // 0x8113594C36A951EF
static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0xDB9640); } // 0xE33015D5CE800786
static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int eventType) { invoke<Void>(0xDB9650, eventType); } // 0x75043178E34E4D3C
static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0xDB9670); } // 0x6DB23D1A50246D3A
static int GET_NUM_TATTOO_SHOP_DLC_ITEMS(int character) { return invoke<int>(0xDA23B0, character); } // 0x82D6E3FDBD0A80B6
static BOOL GET_TATTOO_SHOP_DLC_ITEM_DATA(int characterType, int decorationIndex, Any* outComponent) { return invoke<BOOL>(0xDA23E0, characterType, decorationIndex, outComponent); } // 0xC8FF7E3E267EBEF5
static int GET_TATTOO_SHOP_DLC_ITEM_INDEX(Hash overlayHash, Any p1, int character) { return invoke<int>(0xDA2490, overlayHash, p1, character); } // 0xE80EBC1CABE1C8A7
static void INIT_SHOP_PED_COMPONENT(Any* outComponent) { invoke<Void>(0xDA24D0, outComponent); } // 0x15D20F88F06530A5
static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0xDA2510, outProp); } // 0x7A491C9A90975007
static int SETUP_SHOP_PED_APPAREL_QUERY(int p0, int p1, int p2, int p3) { return invoke<int>(0xDA2550, p0, p1, p2, p3); } // 0xD9B1BDDEA510CD90
static int SETUP_SHOP_PED_APPAREL_QUERY_TU(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0xDA25D0, character, p1, p2, p3, p4, componentId); } // 0x7B6C0A0D604E68FA
static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0xDA2640, componentId, outComponent); } // 0xD36906FE7BBBDB62
static int GET_SHOP_PED_QUERY_COMPONENT_INDEX(Hash componentHash) { return invoke<int>(0xDA2650, componentHash); } // 0x55FF07D3A2FE8317
static void GET_SHOP_PED_COMPONENT(Hash componentHash, Any* outComponent) { invoke<Void>(0xDA2680, componentHash, outComponent); } // 0xA5690D702773BED4
static void GET_SHOP_PED_QUERY_PROP(int componentId, Any* outProp) { invoke<Void>(0xDA2690, componentId, outProp); } // 0x2DBB2D25D50A5392
static int GET_SHOP_PED_QUERY_PROP_INDEX(Hash componentHash) { return invoke<int>(0xDA26A0, componentHash); } // 0x289EDE99827978AD
static void GET_SHOP_PED_PROP(Hash componentHash, Any* outProp) { invoke<Void>(0xDA26D0, componentHash, outProp); } // 0x09A485A642AEADEF
static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0xDA26E0, entity, componentId, drawableVariant, textureVariant); } // 0x94B8A32AA940A6B5
static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0xDA2720, entity, componentId, propIndex, propTextureIndex); } // 0x6B7AEB5F3D578298
static int GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xDA2760, componentHash); } // 0x5A3F0A3B7ECCBD32
static int GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Hash propHash) { return invoke<int>(0xDA2790, propHash); } // 0xCD6EB4A3CCA20602
static void GET_VARIANT_COMPONENT(Hash componentHash, int variantComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xDA27C0, componentHash, variantComponentIndex, nameHash, enumValue, componentType); } // 0x0249B53AB91BF9D0
static void GET_VARIANT_PROP(Hash componentHash, int variantPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0xDA27F0, componentHash, variantPropIndex, nameHash, enumValue, anchorPoint); } // 0x5C6B8DD2E15C6B3C
static int GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xDA2820, componentHash); } // 0x9FB2D71D9CEC8B5A
static int GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(Hash componentHash) { return invoke<int>(0xDA2850, componentHash); } // 0xCBBA20766F48DC67
static void GET_FORCED_COMPONENT(Hash componentHash, int forcedComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xDA2880, componentHash, forcedComponentIndex, nameHash, enumValue, componentType); } // 0xCF4D7500E7DA5D8E
static void GET_FORCED_PROP(Hash componentHash, int forcedPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0xDA28B0, componentHash, forcedPropIndex, nameHash, enumValue, anchorPoint); } // 0x24F0ED4836CD2E4D
static BOOL DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Hash componentHash, Hash restrictionTagHash, int componentId) { return invoke<BOOL>(0xDA28E0, componentHash, restrictionTagHash, componentId); } // 0x304A39EB177D246B
static BOOL DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0xDA2910, ped, componentId, restrictionTagHash); } // 0xCA362C769B0F4F0E
static BOOL DOES_CURRENT_PED_PROP_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0xDA29C0, ped, componentId, restrictionTagHash); } // 0x6C309E623368F96B
static int SETUP_SHOP_PED_OUTFIT_QUERY(int character, BOOL p1) { return invoke<int>(0xDA2A70, character, p1); } // 0xF2DDA7CE028AB9CB
static void GET_SHOP_PED_QUERY_OUTFIT(int outfitIndex, Any* outfit) { invoke<Void>(0xDA2AB0, outfitIndex, outfit); } // 0x808A8ABE207631DF
static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0xDA2AC0, p0, p1); } // 0x565B95D20273E8CD
static int GET_SHOP_PED_OUTFIT_LOCATE(Any p0) { return invoke<int>(0xDA2AD0, p0); } // 0x1D814CA2350EAA9E
static BOOL GET_SHOP_PED_OUTFIT_PROP_VARIANT(Hash outfitHash, int variantIndex, Any* outPropVariant) { return invoke<BOOL>(0xDA2B10, outfitHash, variantIndex, outPropVariant); } // 0xCD4F2395AE80D510
static BOOL GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Hash outfitHash, int variantIndex, Any* outComponentVariant) { return invoke<BOOL>(0xDA2B90, outfitHash, variantIndex, outComponentVariant); } // 0xABE43EB6EBE5F2F5
static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xDA2C10); } // 0x62B04373BFAD9B85
static Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return invoke<Hash>(0xDA2C30, dlcVehicleIndex); } // 0xBDEBCB00EBC6F89E
static BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, Any* outData) { return invoke<BOOL>(0xDA2C60, dlcVehicleIndex, outData); } // 0x92EAC7DBD5D1D750
static int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return invoke<int>(0xDA2CB0, dlcVehicleIndex); } // 0x6A1E7E50A4AF1FBD
static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xDA2CF0); } // 0x9A7818E159C72516
static int GET_NUM_DLC_WEAPONS_SP() { return invoke<int>(0xDA2D10); } // 0xAFA659708600A8CD
static BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xDA2D40, dlcWeaponIndex, outData); } // 0xDF94727C5BBB298F
static BOOL GET_DLC_WEAPON_DATA_SP(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xDA2D70, dlcWeaponIndex, outData); } // 0xA40B513DA7201333
static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0xDA2DC0, dlcWeaponIndex); } // 0x660FA55F8D417CAB
static int GET_NUM_DLC_WEAPON_COMPONENTS_SP(int dlcWeaponIndex) { return invoke<int>(0xDA2DF0, dlcWeaponIndex); } // 0x0A334014DFD4952C
static BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xDA2E20, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x737024F2814ABDDD
static BOOL GET_DLC_WEAPON_COMPONENT_DATA_SP(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xDA2E50, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x38A1582CAC3F4E95
static BOOL IS_CONTENT_ITEM_LOCKED(Hash itemHash) { return invoke<BOOL>(0xDA2EB0, itemHash); } // 0x4BFA043D318BF9AE
static BOOL IS_DLC_VEHICLE_MOD(Hash hash) { return invoke<BOOL>(0xDA2EE0, hash); } // 0xC638DA98694CE80F
static Hash GET_DLC_VEHICLE_MOD_LOCK_HASH(Hash hash) { return invoke<Hash>(0xDA2F40, hash); } // 0x1F6B09FE73B99828
static void EXECUTE_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0xDA2FA0, hash); } // 0x5A8C2218A9C71C65
static void REVERT_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0xDA2FC0, hash); } // 0x5D75D30DF32ECA8E
static FireId START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<FireId>(0xDBAFF0, X, Y, Z, maxChildren, isGasFire); } // 0xC86536B840EE3AB3
static void REMOVE_SCRIPT_FIRE(FireId fireHandle) { invoke<Void>(0xDBB0C0, fireHandle); } // 0xCA60A45D232EEDDB
static FireId START_ENTITY_FIRE(Entity entity) { return invoke<FireId>(0xDBB100, entity); } // 0x604C09F6A880730D
static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0xDBB180, entity); } // 0xC9B695B7C0126DCC
static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0xDBB1F0, entity); } // 0x5B702A5D1F2635BE
static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0xDBB260, x, y, z, radius); } // 0xE8D2BD34CCB74431
static void SET_FLAMMABILITY_MULTIPLIER(float p0) { invoke<Void>(0xDBB2A0, p0); } // 0xBF956145ADC1339E
static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0xDBB2E0, x, y, z, radius); } // 0xD7ABE01242C5B8E3
static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0xDBB310, outPosition, x, y, z); } // 0xDDF99E38A910C346
static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake, BOOL noDamage) { invoke<Void>(0xDBB3E0, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake, noDamage); } // 0xD2FD15A3D9DEE4CC
static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xDBB420, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x8F03CD462437C002
static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xDBB460, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); } // 0x4F2F5C4D814331B7
static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xDBB490, explosionType, x1, y1, z1, x2, y2, z2); } // 0x8AC0662A292C36F4
static BOOL IS_EXPLOSION_ACTIVE_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xDBB560, explosionType, x1, y1, z1, x2, y2, z2); } // 0x9C5BA0994231CF92
static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xDBB630, explosionType, x, y, z, radius); } // 0x8764A5B95AE1F967
static Entity GET_OWNER_OF_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<Entity>(0xDBB6B0, explosionType, x, y, z, radius); } // 0x4E890D800CBC4BD9
static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<BOOL>(0xDBB740, explosionType, x1, y1, z1, x2, y2, z2, width); } // 0x9D27D35452DED6B5
static Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0xDBB7D0, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0xCBE5AFAE59C1BB3A
static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0xDCB750, enabled); } // 0x9C091F2E9354854A
static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xDCB760, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x9E36887F0AA9DF6D
static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0xDCB770, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); } // 0x7B26600F66208BC6
static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB780, x, y, z, radius, red, green, blue, alpha); } // 0x94DBB0363601E643
static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xDCB790, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0xF16E78BBC716DB17
static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7A0, x, y, z, size, red, green, blue, alpha); } // 0x5A0030BCCECA3297
static void DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7B0, text, x, y, z, red, green, blue, alpha); } // 0x8B47D286AAC499D6
static void DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7C0, text, x, y, z, red, green, blue, alpha); } // 0xBBB7593C7244A846
static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7D0, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0xC9A38C22BE8013F2
static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB8A0, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); } // 0xCCE5AAE0F04B23CC
static void DRAW_TEXTURED_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0xDCB980, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); } // 0x7FB3FBAF75E52D57
static void DRAW_TEXTURED_POLY_WITH_THREE_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float red1, float green1, float blue1, int alpha1, float red2, float green2, float blue2, int alpha2, float red3, float green3, float blue3, int alpha3, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0xDCB9F0, x1, y1, z1, x2, y2, z2, x3, y3, z3, red1, green1, blue1, alpha1, red2, green2, blue2, alpha2, red3, green3, blue3, alpha3, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); } // 0xCAB0D2338E17B2AB
static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xDCBA80, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0x66ECCFB3761A11CA
static void SET_BACKFACECULLING(BOOL toggle) { invoke<Void>(0xDCBB50, toggle); } // 0x89150F21586978DF
static void SET_DEPTHWRITING(BOOL toggle) { invoke<Void>(0xDCBB70, toggle); } // 0x3547E68D04DBECAD
static BOOL BEGIN_TAKE_MISSION_CREATOR_PHOTO() { return invoke<BOOL>(0xDCBBB0); } // 0xB8D7546CD4CFAF85
static int GET_STATUS_OF_TAKE_MISSION_CREATOR_PHOTO() { return invoke<int>(0xDCBBD0); } // 0x4E411746D4FFB0B1
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { invoke<Void>(0xDCBBF0); } // 0x9B1F963686B6F6A3
static BOOL LOAD_MISSION_CREATOR_PHOTO(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xDCBC00, p0, p1, p2, p3); } // 0x34BE4D7B1AB22F48
static int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(Any* p0) { return invoke<int>(0xDCBC60, p0); } // 0x86AAD2BE6D9F7463
static BOOL BEGIN_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<BOOL>(0xDCBC90); } // 0x7AF299087F97C750
static int GET_STATUS_OF_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<int>(0xDCBCC0); } // 0x530D6F0F54C3DDB7
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO_PREVIEW() { invoke<Void>(0xDCBCF0); } // 0x0222C94B2B39C467
static BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return invoke<BOOL>(0xDCBD00); } // 0x48B40FC81A85F44B
static int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xDCBD20); } // 0xB6C7ECEA9936790D
static void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { invoke<Void>(0xDCBD40); } // 0xE379C4B49924485C
static void SET_TAKEN_PHOTO_IS_MUGSHOT(BOOL toggle) { invoke<Void>(0xDCBD50, toggle); } // 0x21DA82F574DDCFD2
static void SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Any p0, int p1) { invoke<Void>(0xDCBD70, p0, p1); } // 0x0F7689113DC97142
static void SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(Any p0) { invoke<Void>(0xDCBD80, p0); } // 0xF4575C44910A9DF9
static BOOL SAVE_HIGH_QUALITY_PHOTO(int unused) { return invoke<BOOL>(0xDCBDA0, unused); } // 0xBA0D235D624BE8BD
static int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xDCBDC0); } // 0x9FE1211A2B698F5D
static BOOL BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Any p0) { return invoke<BOOL>(0xDCBDE0, p0); } // 0xF8E79D92A7C6EFE0
static int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int p0) { return invoke<int>(0xDCBE10, p0); } // 0x39CD1674039F82E0
static void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { invoke<Void>(0xDCBE30); } // 0x464C2B9EE565B093
static void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(BOOL p0, BOOL p1) { invoke<Void>(0xDCBE40, p0, p1); } // 0x4FA503A6757253A7
static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xDCBE60); } // 0x209F5DE8084C2803
static int GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xDCBE70); } // 0xA0BFBD756D313CF2
static int GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xDCBE80); } // 0x991C49208F09B7C0
static BOOL QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(Any p0) { return invoke<BOOL>(0xDCBEA0, p0); } // 0xAE1965746C93F8D5
static int GET_STATUS_OF_SORTED_LIST_OPERATION(Any p0) { return invoke<int>(0xDCBED0, p0); } // 0x62830FDE95255DE5
static void CLEAR_STATUS_OF_SORTED_LIST_OPERATION() { invoke<Void>(0xDCBF00); } // 0x60B12E049FB8FF1C
static BOOL DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(Any p0) { return invoke<BOOL>(0xDCBF10, p0); } // 0xA536EFAB049B26A3
static BOOL LOAD_HIGH_QUALITY_PHOTO(Any p0) { return invoke<BOOL>(0xDCBF20, p0); } // 0xE2935008625A1BE0
static int GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(int p0) { return invoke<int>(0xDCBF30, p0); } // 0x7522B8298919A016
static void DRAW_LIGHT_WITH_RANGEEX(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0xDCBF40, x, y, z, r, g, b, range, intensity, shadow); } // 0x0AD7E30D4E0D1254
static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0xDCBF70, posX, posY, posZ, colorR, colorG, colorB, range, intensity); } // 0x748651DF4DA0A890
static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { invoke<Void>(0xDCBFA0, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); } // 0xE2E1B9096BCD8C5C
static void DRAW_SHADOWED_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { invoke<Void>(0xDCBFD0, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); } // 0x2037C6627E628A1B
static void FADE_UP_PED_LIGHT(float p0) { invoke<Void>(0xDCC040, p0); } // 0xAE634DE5D86EE96A
static void UPDATE_LIGHTS_ON_ENTITY(Entity entity) { invoke<Void>(0xDCC050, entity); } // 0xFF1E5DCD728C42E2
static void SET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE(Any p0) { invoke<Void>(0xDCC0F0, p0); } // 0xEC4B7DC773123827
static float GET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE() { return invoke<float>(0xDCC100); } // 0xB891D572748D432C
static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { invoke<Void>(0xDCC120, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x7E763410A91A972B
static void DRAW_MARKER_EX(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, Any p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts, BOOL p24, BOOL p25) { invoke<Void>(0xDCC200, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts, p24, p25); } // 0x9DC025C4B814AA09
static void DRAW_MARKER_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, float alpha) { invoke<Void>(0xDCC300, x, y, z, radius, red, green, blue, alpha); } // 0x426E16FFFB6D7AF1
static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float diameter, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0xDCC460, type, posX1, posY1, posZ1, posX2, posY2, posZ2, diameter, red, green, blue, alpha, reserved); } // 0xDCC9FF4954D6DCB1
static void SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(int checkpoint, float scale) { invoke<Void>(0xDCC540, checkpoint, scale); } // 0xF7A330D622F9A04F
static void SET_CHECKPOINT_INSIDE_CYLINDER_SCALE(int checkpoint, float scale) { invoke<Void>(0xDCC590, checkpoint, scale); } // 0xE0B16D14D440A7C9
static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<Void>(0xDCC5E0, checkpoint, nearHeight, farHeight, radius); } // 0xA7DD2E2BCBD9C8D5
static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xDCC650, checkpoint, red, green, blue, alpha); } // 0xEDC9B904B870CE80
static void SET_CHECKPOINT_RGBA2(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xDCC6D0, checkpoint, red, green, blue, alpha); } // 0xF7408C8F340BA88B
static void SET_CHECKPOINT_CLIPPLANE_WITH_POS_NORM(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<Void>(0xDCC750, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); } // 0xEA8732A7013AB8DC
static void SET_CHECKPOINT_FORCE_OLD_ARROW_POINTING(int checkpoint) { invoke<Void>(0xDCC7D0, checkpoint); } // 0xA46D09CA7F9EE44B
static void SET_CHECKPOINT_DECAL_ROT_ALIGNED_TO_CAMERA_ROT(int checkpoint) { invoke<Void>(0xDCC810, checkpoint); } // 0x6F331FADCE88574B
static void SET_CHECKPOINT_FORCE_DIRECTION(int checkpoint) { invoke<Void>(0xDCC850, checkpoint); } // 0x0E90B81955102A66
static void SET_CHECKPOINT_DIRECTION(int checkpoint, float posX, float posY, float posZ) { invoke<Void>(0xDCC890, checkpoint, posX, posY, posZ); } // 0xA3ADA3BEDDCBD88B
static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0xDCC8F0, checkpoint); } // 0xC2A5E7DCD1900AA1
static void DONT_RENDER_IN_GAME_UI(BOOL p0) { invoke<Void>(0xDCC930, p0); } // 0xF5AB6155B7363507
static void FORCE_RENDER_IN_GAME_UI(BOOL toggle) { invoke<Void>(0xDCC950, toggle); } // 0xE1DC9972544E4160
static void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { invoke<Void>(0xDCC970, textureDict, p1); } // 0xD0D00ED689D6CA81
static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return invoke<BOOL>(0xDCCA00, textureDict); } // 0x38D063D8CF6D1967
static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { invoke<Void>(0xDCCA60, textureDict); } // 0x633E3833FB96BCCB
static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a) { invoke<Void>(0xDCCAC0, x, y, width, height, r, g, b, a); } // 0x81645EE95A114FAE
static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { invoke<Void>(0xDCCB00, toggle); } // 0xA66AC5949E305457
static void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { invoke<Void>(0xDCCB20, drawOrder); } // 0xA4F67CEB594AE064
static void SET_SCRIPT_GFX_ALIGN(int horizontalAlign, int verticalAlign) { invoke<Void>(0xDCCBB0, horizontalAlign, verticalAlign); } // 0x9A122D542F2BB60E
static void RESET_SCRIPT_GFX_ALIGN() { invoke<Void>(0xDCCBD0); } // 0x90B531766063C5CD
static void SET_SCRIPT_GFX_ALIGN_PARAMS(float x, float y, float w, float h) { invoke<Void>(0xDCCBF0, x, y, w, h); } // 0x9C066F8D86A1A438
static void GET_SCRIPT_GFX_ALIGN_POSITION(float x, float y, float* calculatedX, float* calculatedY) { invoke<Void>(0xDCCC30, x, y, calculatedX, calculatedY); } // 0x2BF75F235283775A
static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0xDCCCB0); } // 0x897B441FF18ECBBB
static void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha) { invoke<Void>(0xDCCCD0, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha); } // 0xFFA2B456A81EA1EB
static void DRAW_SPRITE_ARX(const char* textureDict, const char* textureName, float x, float y, float width, float height, float p6, int red, int green, int blue, int alpha, Any p11, Any p12) { invoke<Void>(0xDCCE30, textureDict, textureName, x, y, width, height, p6, red, green, blue, alpha, p11, p12); } // 0xC54B91005A54695F
static void DRAW_SPRITE_NAMED_RENDERTARGET(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, Any p11) { invoke<Void>(0xDCCF90, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); } // 0xF13626F74924F72A
static void DRAW_SPRITE_ARX_WITH_UV(const char* textureDict, const char* textureName, float x, float y, float width, float height, float u1, float v1, float u2, float v2, float heading, int red, int green, int blue, int alpha, Any p15) { invoke<Void>(0xDCD0E0, textureDict, textureName, x, y, width, height, u1, v1, u2, v2, heading, red, green, blue, alpha, p15); } // 0xF9AAC4780D507BBC
static int ADD_ENTITY_ICON(Entity entity, const char* icon) { return invoke<int>(0xDCD330, entity, icon); } // 0x2EB73EDE5BD6492D
static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xDCD3C0, entity, toggle); } // 0xE71F327DD7F42EE2
static void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { invoke<Void>(0xDCD420, entity, red, green, blue, alpha); } // 0x371531C96D032099
static void SET_DRAW_ORIGIN(float x, float y, float z, BOOL p3) { invoke<Void>(0xDCD4C0, x, y, z, p3); } // 0xB56F2B356187E2E0
static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xDCD580); } // 0xCE3DA51E28972A56
static int SET_BINK_MOVIE(const char* name) { return invoke<int>(0xDCD590, name); } // 0x7DB4C41144D9961A
static void PLAY_BINK_MOVIE(int binkMovie) { invoke<Void>(0xDCD620, binkMovie); } // 0x202024EB1E643238
static void STOP_BINK_MOVIE(int binkMovie) { invoke<Void>(0xDCD660, binkMovie); } // 0x3A525484C63925D6
static void RELEASE_BINK_MOVIE(int binkMovie) { invoke<Void>(0xDCD6A0, binkMovie); } // 0xA3B3261566EE06A5
static void DRAW_BINK_MOVIE(int binkMovie, float p1, float p2, float p3, float p4, float p5, int r, int g, int b, int a) { invoke<Void>(0xDCD6F0, binkMovie, p1, p2, p3, p4, p5, r, g, b, a); } // 0xAED06A53B3F23CC1
static void SET_BINK_MOVIE_TIME(int binkMovie, float progress) { invoke<Void>(0xDCD820, binkMovie, progress); } // 0xBB1B3BE5A5E8B50C
static float GET_BINK_MOVIE_TIME(int binkMovie) { return invoke<float>(0xDCD880, binkMovie); } // 0x2362B981748EB883
static void SET_BINK_MOVIE_VOLUME(int binkMovie, float value) { invoke<Void>(0xDCD8E0, binkMovie, value); } // 0xA24E6A436BF61457
static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0xDCD920, entity); } // 0xC850B483ACC98D91
static void SET_BINK_MOVIE_AUDIO_FRONTEND(int binkMovie, BOOL p1) { invoke<Void>(0xDCD990, binkMovie, p1); } // 0x8892E917CE7A0CB0
static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0xDCD9D0, toggle); } // 0x1BDD93397AF09D53
static void SET_BINK_SHOULD_SKIP(int binkMovie, BOOL bShouldSkip) { invoke<Void>(0xDCD9F0, binkMovie, bShouldSkip); } // 0x068BA02ADFAA2B2F
static int LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) { return invoke<int>(0xDCDA40, movieMeshSetName); } // 0x60E2ADCDDFECC019
static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<Void>(0xDCDAB0, movieMeshSet); } // 0xE76A989290862FBF
static int QUERY_MOVIE_MESH_SET_STATE(Any p0) { return invoke<int>(0xDCDAF0, p0); } // 0x097EC9C4BC1C0F2E
static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xDCDB30, x, y); } // 0x5949C3C031610A30
static void GET_ACTUAL_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xDCDB50, x, y); } // 0x21564F65F997D833
static float GET_ASPECT_RATIO(BOOL b) { return invoke<float>(0xDCDB80, b); } // 0x4AE9635532D92447
static float GET_SCREEN_ASPECT_RATIO() { return invoke<float>(0xDCDBB0); } // 0x0DEE1875A0F6FC5F
static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0xDCDBE0); } // 0x485ADB2D2728D748
static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xDCDC00); } // 0xC003EE4BA64FE66C
static void ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9() { invoke<Void>(0xDCDC20); } // 0x82987E4477EBF250
static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0xDCDC30, toggle); } // 0x7E732AC97C7488C2
static BOOL GET_REQUESTINGNIGHTVISION() { return invoke<BOOL>(0xDCDC50); } // 0x9A207D2459EC3958
static BOOL GET_USINGNIGHTVISION() { return invoke<BOOL>(0xDCDC60); } // 0xDC7D2B438B687A13
static void SET_EXPOSURETWEAK(BOOL toggle) { invoke<Void>(0xDCDCB0, toggle); } // 0xBEE1FB2B37222CF5
static void FORCE_EXPOSURE_READBACK(BOOL toggle) { invoke<Void>(0xDCDCD0, toggle); } // 0xCB373F25B2EAB622
static void OVERRIDE_NIGHTVISION_LIGHT_RANGE(float p0) { invoke<Void>(0xDCDCF0, p0); } // 0x23F669E51BF7ABC7
static void SET_NOISEOVERIDE(BOOL toggle) { invoke<Void>(0xDCDD00, toggle); } // 0xA394F5DE4A5BE6D5
static void SET_NOISINESSOVERIDE(float value) { invoke<Void>(0xDCDD20, value); } // 0xF0E0A26499BF51AD
static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xDCDD40, worldX, worldY, worldZ, screenX, screenY); } // 0x2F8A75C70AF54208
static Vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return invoke<Vector3>(0xDCDDB0, textureDict, textureName); } // 0x32D86930C15E1159
static BOOL OVERRIDE_PED_CREW_LOGO_TEXTURE(Ped ped, const char* txd, const char* txn) { return invoke<BOOL>(0xDCDE20, ped, txd, txn); } // 0xAAE0CF56E250FA77
static void SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(float p0) { invoke<Void>(0xDCDE50, p0); } // 0x8AFA674B4DE9BCAE
static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0xDCDE70, p0, p1, fadeIn, duration, fadeOut); } // 0x6CC07FAD61035099
static void DISABLE_OCCLUSION_THIS_FRAME() { invoke<Void>(0xDCDEA0); } // 0x66AA5AE1BFE28CA0
static void SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) { invoke<Void>(0xDCDEB0, state); } // 0x771FE86D2A331DD7
static void SET_ARTIFICIAL_VEHICLE_LIGHTS_STATE(BOOL toggle) { invoke<Void>(0xDCDED0, toggle); } // 0x5249247B8F69A39E
static void DISABLE_HDTEX_THIS_FRAME() { invoke<Void>(0xDCDEF0); } // 0xABCF34ADFD86B645
static int CREATE_TRACKED_POINT() { return invoke<int>(0xDCDF00); } // 0x5008F9D1AD061D8C
static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<Void>(0xDCDF20, point, x, y, z, radius); } // 0x9C0020A372AF7F16
static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0xDCDFD0, point); } // 0x8018AA59F97FA9E3
static void DESTROY_TRACKED_POINT(int point) { invoke<Void>(0xDCE000, point); } // 0x4FD2A45FD634CE58
static int SET_GRASS_CULL_SPHERE(float p0, float p1, float p2, float p3) { return invoke<int>(0xDCE010, p0, p1, p2, p3); } // 0x5F3592B356EE3A4C
static void REMOVE_GRASS_CULL_SPHERE(int handle) { invoke<Void>(0xDCE020, handle); } // 0xB7F6A8F981EF6068
static void PROCGRASS_ENABLE_CULLSPHERE(int handle, float x, float y, float z, float scale) { invoke<Void>(0xDCE030, handle, x, y, z, scale); } // 0xACA69FD04F5F38B9
static void PROCGRASS_DISABLE_CULLSPHERE(int handle) { invoke<Void>(0xDCE090, handle); } // 0x85183ED7096BA9E5
static BOOL PROCGRASS_IS_CULLSPHERE_ENABLED(int handle) { return invoke<BOOL>(0xDCE0B0, handle); } // 0x67A272C42918EF9F
static void PROCGRASS_ENABLE_AMBSCALESCAN() { invoke<Void>(0xDCE0E0); } // 0xC6FE351F50854849
static void PROCGRASS_DISABLE_AMBSCALESCAN() { invoke<Void>(0xDCE0F0); } // 0x8DCD9871820858E5
static void DISABLE_PROCOBJ_CREATION() { invoke<Void>(0xDCE100); } // 0x7EEDA53E80999F2C
static void ENABLE_PROCOBJ_CREATION() { invoke<Void>(0xDCE110); } // 0x976136EB2D134543
static void GRASSBATCH_ENABLE_FLATTENING_EXT_IN_SPHERE(float x, float y, float z, Any p3, float p4, float p5, float p6, float scale) { invoke<Void>(0xDCE120, x, y, z, p3, p4, p5, p6, scale); } // 0x69F7527E6819E2B5
static void GRASSBATCH_ENABLE_FLATTENING_IN_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6) { invoke<Void>(0xDCE1B0, x, y, z, radius, p4, p5, p6); } // 0x400EE8EE61051687
static void GRASSBATCH_DISABLE_FLATTENING() { invoke<Void>(0xDCE240); } // 0x3BB0AB71DA07AD52
static void CASCADE_SHADOWS_INIT_SESSION() { invoke<Void>(0xDCE250); } // 0x714097CFC7878BD0
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0xDCE270, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA4D68014F63795B7
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(float p0) { invoke<Void>(0xDCE2B0, p0); } // 0xD1EDF428E9679161
static void CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(float p0) { invoke<Void>(0xDCE2C0, p0); } // 0xA38ACCBA88BEF30D
static void CASCADE_SHADOWS_SET_SPLIT_Z_EXP_WEIGHT(float p0) { invoke<Void>(0xDCE2D0, p0); } // 0x76C8F25CE400DBC9
static void CASCADE_SHADOWS_SET_BOUND_POSITION(Any p0) { invoke<Void>(0xDCE2E0, p0); } // 0x33DE7FF46025FB11
static void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(BOOL toggle) { invoke<Void>(0xDCE2F0, toggle); } // 0x70F19143E4E40117
static void CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(BOOL p0) { invoke<Void>(0xDCE310, p0); } // 0x029E1B2A8ED6262B
static void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* type) { invoke<Void>(0xDCE330, type); } // 0x2327CC3214428B97
static void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { invoke<Void>(0xDCE340); } // 0xA4F783C5B84288F2
static void CASCADE_SHADOWS_SET_AIRCRAFT_MODE(BOOL p0) { invoke<Void>(0xDCE350, p0); } // 0x5222710997DF7E10
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(BOOL p0) { invoke<Void>(0xDCE370, p0); } // 0x89ACA8B99257E016
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(float p0) { invoke<Void>(0xDCE390, p0); } // 0x4FC2C77501EDCC1A
static void CASCADE_SHADOWS_ENABLE_FREEZER(BOOL p0) { invoke<Void>(0xDCE3A0, p0); } // 0x9EFA902715EB835D
static void WATER_REFLECTION_SET_SCRIPT_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0xDCE3C0, p0); } // 0xF0A089C4753B822D
static void GOLF_TRAIL_SET_ENABLED(BOOL toggle) { invoke<Void>(0xDCE3E0, toggle); } // 0x1100D0FDA8244965
static void GOLF_TRAIL_SET_PATH(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xDCE400, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x79C9D43F3FE4480B
static void GOLF_TRAIL_SET_RADIUS(float p0, float p1, float p2) { invoke<Void>(0xDCE450, p0, p1, p2); } // 0xFB8F1D6097145CC6
static void GOLF_TRAIL_SET_COLOUR(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xDCE470, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xF3DB862660144254
static void GOLF_TRAIL_SET_TESSELLATION(int p0, int p1) { invoke<Void>(0xDCE4E0, p0, p1); } // 0x91A1DC814CBBB7AF
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT_ENABLE(BOOL p0) { invoke<Void>(0xDCE4F0, p0); } // 0x6171C9E04571F992
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { invoke<Void>(0xDCE510, type, xPos, yPos, zPos, p4, red, green, blue, alpha); } // 0x4081B44AA3E3FAD3
static void GOLF_TRAIL_SET_SHADER_PARAMS(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xDCE5D0, p0, p1, p2, p3, p4); } // 0xAB60C5CC1A3FCEB6
static void GOLF_TRAIL_SET_FACING(BOOL p0) { invoke<Void>(0xDCE600, p0); } // 0xD4C0EC928BB68223
static float GOLF_TRAIL_GET_MAX_HEIGHT() { return invoke<float>(0xDCE620); } // 0xAE8417FD434CE2AD
static Vector3 GOLF_TRAIL_GET_VISUAL_CONTROL_POINT(int p0) { return invoke<Vector3>(0xDCE640, p0); } // 0x76AF286385CB7A3A
static void SET_SEETHROUGH(BOOL toggle) { invoke<Void>(0xDCE690, toggle); } // 0x29D3BA4C46972A1C
static BOOL GET_USINGSEETHROUGH() { return invoke<BOOL>(0xDCE6D0); } // 0x8735D1F8A7023128
static void SEETHROUGH_RESET() { invoke<Void>(0xDCE6E0); } // 0x20F3F547E98C23D8
static void SEETHROUGH_SET_FADE_STARTDISTANCE(float distance) { invoke<Void>(0xDCE6F0, distance); } // 0xB2F5BE72B0EC2DEE
static void SEETHROUGH_SET_FADE_ENDDISTANCE(float distance) { invoke<Void>(0xDCE710, distance); } // 0x223BF824658215CB
static float SEETHROUGH_GET_MAX_THICKNESS() { return invoke<float>(0xDCE730); } // 0xA315036610507841
static void SEETHROUGH_SET_MAX_THICKNESS(float thickness) { invoke<Void>(0xDCE750, thickness); } // 0x1D01A8724381340E
static void SEETHROUGH_SET_NOISE_MIN(float amount) { invoke<Void>(0xDCE780, amount); } // 0x8FC9D74BE81B474E
static void SEETHROUGH_SET_NOISE_MAX(float amount) { invoke<Void>(0xDCE7A0, amount); } // 0x32A8433C67882382
static void SEETHROUGH_SET_HILIGHT_INTENSITY(float intensity) { invoke<Void>(0xDCE7C0, intensity); } // 0xEE38FB77BB7A9700
static void SEETHROUGH_SET_HIGHLIGHT_NOISE(float noise) { invoke<Void>(0xDCE7E0, noise); } // 0xD736F4EC169C0407
static void SEETHROUGH_SET_HEATSCALE(int index, float heatScale) { invoke<Void>(0xDCE800, index, heatScale); } // 0xC5F88620264793E1
static void SEETHROUGH_SET_COLOR_NEAR(int red, int green, int blue) { invoke<Void>(0xDCE840, red, green, blue); } // 0x37ED09D2BF486A04
static void SET_MOTIONBLUR_MAX_VEL_SCALER(float p0) { invoke<Void>(0xDCE8C0, p0); } // 0x23A6A0C736CAD705
static float GET_MOTIONBLUR_MAX_VEL_SCALER() { return invoke<float>(0xDCE8E0); } // 0x69AFCC77DCADB9BE
static void SET_FORCE_MOTIONBLUR(BOOL toggle) { invoke<Void>(0xDCE900, toggle); } // 0xB13A0D3DD3B674C6
static void TOGGLE_PLAYER_DAMAGE_OVERLAY(BOOL toggle) { invoke<Void>(0xDCE920, toggle); } // 0xA48EAC4D241222D3
static void RESET_ADAPTATION(int p0) { invoke<Void>(0xDCE950, p0); } // 0xE3349610A15FA0D0
static BOOL TRIGGER_SCREENBLUR_FADE_IN(float transitionTime) { return invoke<BOOL>(0xDCE960, transitionTime); } // 0xC9C9496CFAAB8396
static BOOL TRIGGER_SCREENBLUR_FADE_OUT(float transitionTime) { return invoke<BOOL>(0xDCE9B0, transitionTime); } // 0xB63687B4F0E3E236
static void DISABLE_SCREENBLUR_FADE() { invoke<Void>(0xDCEA10); } // 0xD2D97A8EA35312E0
static float GET_SCREENBLUR_FADE_CURRENT_TIME() { return invoke<float>(0xDCEA20); } // 0x6C91BB4DA2CAE9B1
static BOOL IS_SCREENBLUR_FADE_RUNNING() { return invoke<BOOL>(0xDCEA40); } // 0xF2CF182F5FDA78DF
static void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { invoke<Void>(0xDCEA80, toggle); } // 0xDD98B34A4A3AFA89
static BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke<BOOL>(0xDCEAA0); } // 0x26A0105F181C2828
static void RESET_PAUSED_RENDERPHASES() { invoke<Void>(0xDCEAC0); } // 0x063FC71162B675A0
static void GRAB_PAUSEMENU_OWNERSHIP() { invoke<Void>(0xDCEAD0); } // 0x414B57BC2AF5A7B1
static void SET_HIDOF_OVERRIDE(BOOL p0, BOOL p1, float nearplaneOut, float nearplaneIn, float farplaneOut, float farplaneIn) { invoke<Void>(0xDCEAF0, p0, p1, nearplaneOut, nearplaneIn, farplaneOut, farplaneIn); } // 0xC31DA93280D5F36A
static void SET_LOCK_ADAPTIVE_DOF_DISTANCE(BOOL p0) { invoke<Void>(0xDCEB40, p0); } // 0x4F35B6F682DEE8FA
static BOOL PHONEPHOTOEDITOR_TOGGLE(BOOL p0) { return invoke<BOOL>(0xDCEB60, p0); } // 0x6256A54A328A35E6
static BOOL PHONEPHOTOEDITOR_IS_ACTIVE() { return invoke<BOOL>(0xDCEBC0); } // 0xB18CDB475D274A8E
static BOOL PHONEPHOTOEDITOR_SET_FRAME_TXD(const char* textureDict, BOOL p1) { return invoke<BOOL>(0xDCEBE0, textureDict, p1); } // 0xEB4A8AC9A591F10E
static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0xDCEC10, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0xE56FEB6B12B5A32C
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<BOOL>(0xDCECF0, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0x190E4141A4C4A1CA
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEDE0, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x5B5B2AE530F511CC
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEE70, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x4E547C301F81B801
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEF00, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0xDD19F75405614D3C
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEF90, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0x51CD258B1EC7AB66
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCF020, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x73F69F74011DDBCA
static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0xDCF0A0, r, g, b); } // 0x857B645DF072448C
static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0xDCF0C0, alpha); } // 0x7C087208DD019397
static void SET_PARTICLE_FX_NON_LOOPED_SCALE(float scale) { invoke<Void>(0xDCF0F0, scale); } // 0xCB9A6C2693F6BC7D
static void SET_PARTICLE_FX_NON_LOOPED_EMITTER_SIZE(float p0, float p1, float scale) { invoke<Void>(0xDCF100, p0, p1, scale); } // 0x1B4B0BAF27CD18DB
static void SET_PARTICLE_FX_FORCE_VEHICLE_INTERIOR(BOOL toggle) { invoke<Void>(0xDCF120, toggle); } // 0x66AEB7CADFF26E0B
static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0xDCF140, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0x56E8A6AA712B10C2
static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xDCF1A0, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0x2CC6B29B569945CC
static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xDCF200, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x62750FD2BDD8BD49
static int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xDCF290, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0x3B8EE54DFE24F06C
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xDCF320, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, r, g, b, a); } // 0xB5BD5079F58A395F
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xDCF3B0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis, r, g, b, a); } // 0x9BE6297091AF1898
static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0xDCF440, ptfxHandle, p1); } // 0x182120534CCF9023
static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0xDCF460, ptfxHandle, p1); } // 0x5301FEC6BB8F21DF
static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0xDCF480, entity); } // 0x8177A2A9DC5BD5B0
static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0xDCF4D0, X, Y, Z, radius); } // 0xA69DCC67B2B61AD1
static void FORCE_PARTICLE_FX_IN_VEHICLE_INTERIOR(Any p0, Any p1) { invoke<Void>(0xDCF500, p0, p1); } // 0x4E96B177783A9BA6
static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0xDCF520, ptfxHandle); } // 0x9CFFB7009B578840
static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0xDCF550, ptfxHandle, x, y, z, rotX, rotY, rotZ); } // 0xE1CDA05FEF060763
static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { invoke<Void>(0xDCF5A0, ptfxHandle, propertyName, amount, noNetwork); } // 0xABAD28B5A427340D
static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0xDCF5C0, ptfxHandle, r, g, b, p4); } // 0x6154AB43546C6437
static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0xDCF5F0, ptfxHandle, alpha); } // 0x1C53039135495CAE
static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0xDCF600, ptfxHandle, scale); } // 0x8ABEEFFE3E33A4FA
static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float range) { invoke<Void>(0xDCF610, ptfxHandle, range); } // 0xC3E3C19E6844ABAB
static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0xDCF630, p0); } // 0x2F30818D75D66C5B
static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDCF650, vehicle, p1); } // 0xEE3CD2D847C128FA
static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0xDCF6D0, p0); } // 0x8AC9895670AC9049
static void CLEAR_PARTICLE_FX_SHOOTOUT_BOAT() { invoke<Void>(0xDCF740); } // 0x85771CA6A17CC68F
static void SET_PARTICLE_FX_BLOOD_SCALE(Any p0) { invoke<Void>(0xDCF770, p0); } // 0xEF93301BC8E9BF71
static void DISABLE_IN_WATER_PTFX(BOOL toggle) { invoke<Void>(0xDCF7B0, toggle); } // 0xA9EDD0FB09620618
static void DISABLE_DOWNWASH_PTFX(BOOL toggle) { invoke<Void>(0xDCF7E0, toggle); } // 0x8D16FC917312C618
static void SET_PARTICLE_FX_SLIPSTREAM_LODRANGE_SCALE(float scale) { invoke<Void>(0xDCF810, scale); } // 0x3E9F81F9260D4C72
static void ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xDCF850, toggle); } // 0xC826EB0F21193234
static void ENABLE_ALIEN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xDCF890, toggle); } // 0xB8F49F9656A5277B
static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { invoke<Void>(0xDCF8D0, scale); } // 0x036C12D7B5744CAF
static void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float p0) { invoke<Void>(0xDCF910, p0); } // 0xB16EFD3957DD7FAD
static void SET_PARTICLE_FX_BULLET_TRACE_NO_ANGLE_REJECT(BOOL p0) { invoke<Void>(0xDCF950, p0); } // 0x2B05C87E14049BBF
static void SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(float p0) { invoke<Void>(0xDCF980, p0); } // 0xB260FC482D6B50B9
static void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float p0) { invoke<Void>(0xDCF9C0, p0); } // 0xD07BB7EF3C9F43D8
static void SET_PARTICLE_FX_FOOT_OVERRIDE_NAME(const char* p0) { invoke<Void>(0xDCFA00, p0); } // 0x8E22BC7CC1BBF7E4
static void SET_SKIDMARK_RANGE_SCALE(float scale) { invoke<Void>(0xDCFA80, scale); } // 0x19270EAC91F9CFA8
static void SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(Any p0) { invoke<Void>(0xDCFAC0, p0); } // 0x081A40A40A77958E
static void REGISTER_POSTFX_BULLET_IMPACT(float weaponWorldPosX, float weaponWorldPosY, float weaponWorldPosZ, float intensity) { invoke<Void>(0xDCFAF0, weaponWorldPosX, weaponWorldPosY, weaponWorldPosZ, intensity); } // 0xB0B142E5C2067BC4
static void FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(BOOL p0) { invoke<Void>(0xDCFB60, p0); } // 0x989F8AD94D00CA21
static void USE_PARTICLE_FX_ASSET(const char* name) { invoke<Void>(0xDCFB80, name); } // 0xD03F4780B97A39AE
static void SET_PARTICLE_FX_OVERRIDE(const char* oldAsset, const char* newAsset) { invoke<Void>(0xDCFBA0, oldAsset, newAsset); } // 0xFCD81108C00214FE
static void RESET_PARTICLE_FX_OVERRIDE(const char* name) { invoke<Void>(0xDCFBD0, name); } // 0x9C1E2E25111A648E
static void SET_WEATHER_PTFX_USE_OVERRIDE_SETTINGS(BOOL p0) { invoke<Void>(0xDCFC50, p0); } // 0xC4551CF3C3F087F3
static void SET_WEATHER_PTFX_OVERRIDE_CURR_LEVEL(float p0) { invoke<Void>(0xDCFC70, p0); } // 0x4E6B849A6CDF70A3
static void WASH_DECALS_IN_RANGE(float x, float y, float z, float range, float p4) { invoke<Void>(0xDCFC90, x, y, z, range, p4); } // 0xA2EEF7A44465A04D
static void WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) { invoke<Void>(0xDCFCD0, vehicle, p1); } // 0x8FD28E44F7FF2A54
static void FADE_DECALS_IN_RANGE(float x, float y, float z, float p3, float p4) { invoke<Void>(0xDCFD30, x, y, z, p3, p4); } // 0x726D5358D13D53BD
static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0xDCFD70, x, y, z, range); } // 0x5926A824AF54BCC3
static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0xDCFDB0, obj); } // 0x73715B38A9962E7E
static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0xDCFE10, obj, x, y, z); } // 0x6434E0F1FB054F78
static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDCFE80, vehicle); } // 0xFEC8EAE457274AD3
static int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return invoke<int>(0xDCFEE0, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); } // 0x0153AEF89004E87C
static int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0xDCFF70, x, y, z, groundLvl, width, transparency); } // 0x037E59D590865D5A
static int ADD_OIL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0xDCFFF0, x, y, z, groundLvl, width, transparency); } // 0x55A40CDFD8F6BD17
static void START_PETROL_TRAIL_DECALS(float p0) { invoke<Void>(0xDD0070, p0); } // 0xE01851169F9A48A4
static void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { invoke<Void>(0xDD00D0, x, y, z, p3); } // 0x83993C32C04DE125
static void END_PETROL_TRAIL_DECALS() { invoke<Void>(0xDD0100); } // 0x28F49AC9C6000789
static void REMOVE_DECAL(int decal) { invoke<Void>(0xDD0110, decal); } // 0x93E1EA1609ABF230
static BOOL IS_DECAL_ALIVE(int decal) { return invoke<BOOL>(0xDD0130, decal); } // 0x1A22029316A4B46C
static float GET_DECAL_WASH_LEVEL(int decal) { return invoke<float>(0xDD0160, decal); } // 0xC437B7DF8EEE7C1D
static void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME() { invoke<Void>(0xDD0190); } // 0xAB03CF772B43A288
static void SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME() { invoke<Void>(0xDD01A0); } // 0x6D268E74310FA45D
static void SET_DISABLE_DECAL_RENDERING_THIS_FRAME() { invoke<Void>(0xDD01B0); } // 0xAF28608F1D388164
static BOOL GET_IS_PETROL_DECAL_IN_RANGE(float xCoord, float yCoord, float zCoord, float radius) { return invoke<BOOL>(0xDD01C0, xCoord, yCoord, zCoord, radius); } // 0x5713DE6DB59E98EB
static void PATCH_DECAL_DIFFUSE_MAP(int decalType, const char* textureDict, const char* textureName) { invoke<Void>(0xDD0270, decalType, textureDict, textureName); } // 0x1CB4702EAE3C89AB
static void UNPATCH_DECAL_DIFFUSE_MAP(int decalType) { invoke<Void>(0xDD02B0, decalType); } // 0x1B3B68D4F1783EBF
static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0xDD02D0, p0, p1); } // 0xC1FEB5766814FAB4
static BOOL ADD_VEHICLE_CREW_EMBLEM(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0xDD0360, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); } // 0x6A808266C74B0678
static BOOL ABORT_VEHICLE_CREW_EMBLEM_REQUEST(int* p0) { return invoke<BOOL>(0xDD03B0, p0); } // 0x932EFF1079425E72
static void REMOVE_VEHICLE_CREW_EMBLEM(Vehicle vehicle, int p1) { invoke<Void>(0xDD0400, vehicle, p1); } // 0x5429B2C176877208
static int GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(Vehicle vehicle, int p1) { return invoke<int>(0xDD0460, vehicle, p1); } // 0xCF9D3F0358793BA8
static BOOL DOES_VEHICLE_HAVE_CREW_EMBLEM(Vehicle vehicle, int p1) { return invoke<BOOL>(0xDD04C0, vehicle, p1); } // 0x0BCE48C8677F9824
static void DISABLE_COMPOSITE_SHOTGUN_DECALS(BOOL toggle) { invoke<Void>(0xDD0530, toggle); } // 0x30046CB0BDCE65EF
static void DISABLE_SCUFF_DECALS(BOOL toggle) { invoke<Void>(0xDD0560, toggle); } // 0xBC31667BB0F6F0E5
static void SET_DECAL_BULLET_IMPACT_RANGE_SCALE(float p0) { invoke<Void>(0xDD0590, p0); } // 0xEB49514A4F04D59F
static void OVERRIDE_INTERIOR_SMOKE_NAME(const char* name) { invoke<Void>(0xDD05D0, name); } // 0x81A1F979AAA91E2B
static void OVERRIDE_INTERIOR_SMOKE_LEVEL(float level) { invoke<Void>(0xDD0600, level); } // 0xB9574E68CF98080B
static void OVERRIDE_INTERIOR_SMOKE_END() { invoke<Void>(0xDD0620); } // 0xA5EC3D4652F6CB02
static void REGISTER_NOIR_LENS_EFFECT() { invoke<Void>(0xDD0630); } // 0x3BE1F84A537B34E0
static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0xDD0660, toggle); } // 0x8A427A89051C6578
static void RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(BOOL p0) { invoke<Void>(0xDD0680, p0); } // 0x4DA9E018E2F3A01C
static void REQUEST_EARLY_LIGHT_CHECK() { invoke<Void>(0xDD06A0); } // 0x9E75427EC4E37CA5
static void USE_SNOW_FOOT_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0xDD06B0, toggle); } // 0x1258AD6DBC2FBAE1
static void USE_SNOW_WHEEL_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0xDD06F0, toggle); } // 0xD7DE01DAA350496A
static void DISABLE_REGION_VFX(Any p0) { invoke<Void>(0xDD0710, p0); } // 0x45059C350D918C38
static void PRESET_INTERIOR_AMBIENT_CACHE(const char* timecycleModifierName) { invoke<Void>(0xDD0760, timecycleModifierName); } // 0x8CBAC8B951402F69
static void SET_TIMECYCLE_MODIFIER(const char* modifierName) { invoke<Void>(0xDD07B0, modifierName); } // 0x5C483F4653DC993C
static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0xDD0830, strength); } // 0x886C31F5E888F079
static void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) { invoke<Void>(0xDD0850, modifierName, transition); } // 0xDA3EE68EF78AA786
static void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float strength) { invoke<Void>(0xDD08B0, strength); } // 0x20C160A285F3529C
static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0xDD08D0); } // 0x80F87A4A3B930613
static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0xDD0910); } // 0x8960847E5FD7B48F
static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke<int>(0xDD0930); } // 0x765B41E82372AA97
static BOOL GET_IS_TIMECYCLE_TRANSITIONING_OUT() { return invoke<BOOL>(0xDD0950); } // 0x382F60C368A6D416
static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0xDD0970); } // 0x74C42E6AE0F9355E
static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0xDD0980); } // 0x7232CF6DD26DC563
static void SET_CURRENT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xDD0990, modifierName); } // 0xFE602AB8B7E9AF7D
static void SET_PLAYER_TCMODIFIER_TRANSITION(float value) { invoke<Void>(0xDD0A60, value); } // 0x58DF2EDF7CB54B60
static void SET_NEXT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xDD0A80, modifierName); } // 0xAFB25B9F2232474E
static void ADD_TCMODIFIER_OVERRIDE(const char* modifierName1, const char* modifierName2) { invoke<Void>(0xDD0B30, modifierName1, modifierName2); } // 0x20F21369990AB23F
static void CLEAR_ALL_TCMODIFIER_OVERRIDES(const char* p0) { invoke<Void>(0xDD0BA0, p0); } // 0x96EB2A3044CE3688
static void SET_EXTRA_TCMODIFIER(const char* modifierName) { invoke<Void>(0xDD0BB0, modifierName); } // 0x23DAA15014BC100F
static void CLEAR_EXTRA_TCMODIFIER() { invoke<Void>(0xDD0C30); } // 0x15BEA5263EB7BF2A
static int GET_EXTRA_TCMODIFIER() { return invoke<int>(0xDD0C50); } // 0xA81182F96782A8EE
static void ENABLE_MOON_CYCLE_OVERRIDE(float strength) { invoke<Void>(0xDD0C70, strength); } // 0xF1759D35AF2F023B
static void DISABLE_MOON_CYCLE_OVERRIDE() { invoke<Void>(0xDD0CA0); } // 0x36AC7953BF22FE97
static int REQUEST_SCALEFORM_MOVIE(const char* scaleformName) { return invoke<int>(0xDD0CC0, scaleformName); } // 0x8DE4F68A9728925E
static int REQUEST_SCALEFORM_MOVIE_WITH_IGNORE_SUPER_WIDESCREEN(const char* scaleformName) { return invoke<int>(0xDD0CF0, scaleformName); } // 0xEDB29E4B0AB3D876
static int REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) { return invoke<int>(0xDD0D20, scaleformName); } // 0x5AF05959A6F22BB4
static int REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(const char* scaleformName) { return invoke<int>(0xDD0D50, scaleformName); } // 0xED28B9E18E376D5D
static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0xDD0D80, scaleformHandle); } // 0xA0C7B98BCF1EEF9E
static BOOL IS_ACTIVE_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xDD0E90, val); } // 0xA19744810BB29B74
static BOOL IS_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xDD0F10, val); } // 0xF44F8CDAE3ED0ACB
static BOOL HAS_SCALEFORM_MOVIE_FILENAME_LOADED(const char* scaleformName) { return invoke<BOOL>(0xDD0F50, scaleformName); } // 0xE47743FF8F06F8C0
static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<BOOL>(0xDD0FF0, scaleformHandle); } // 0xD1417F25E6970920
static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { invoke<Void>(0xDD1020, scaleformHandle); } // 0xD314260005F064BF
static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0xDD10A0, scaleform, toggle); } // 0x2EE4366DBD59BB7A
static void SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0xDD1100, scaleformHandle, toggle); } // 0x32323864D97FCFF0
static void SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0xDD1150, scaleformHandle, toggle); } // 0x6CDCD138191E7A06
static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { invoke<Void>(0xDD11A0, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); } // 0x6D16B99FEB0AFFF1
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int p5) { invoke<Void>(0xDD11F0, scaleform, red, green, blue, alpha, p5); } // 0xA91A4C18A2DB01BD
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0xDD12C0, scaleform1, scaleform2, red, green, blue, alpha); } // 0xDBCD9A6B9D073786
static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xDD12E0, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); } // 0x3D1B3BF5963D08DE
static void DRAW_SCALEFORM_MOVIE_3D_SOLID(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xDD1300, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); } // 0xCC3DB9CC9CA34EE8
static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) { invoke<Void>(0xDD1320, scaleform, method); } // 0xB750FE3C9F094356
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(int scaleform, const char* methodName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0xDD13F0, scaleform, methodName, param1, param2, param3, param4, param5); } // 0xDBCE37B37A697642
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(int scaleform, const char* methodName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) { invoke<Void>(0xDD14C0, scaleform, methodName, param1, param2, param3, param4, param5); } // 0x4A536D06AFED1D5B
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(int scaleform, const char* methodName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) { invoke<Void>(0xDD15A0, scaleform, methodName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); } // 0x5EA38B125B8B37E5
static BOOL BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD(int hudComponent, const char* methodName) { return invoke<BOOL>(0xDD1680, hudComponent, methodName); } // 0x192A6D8B6BBD4F41
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* methodName) { return invoke<BOOL>(0xDD16D0, scaleform, methodName); } // 0x88F483FBD433696A
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(const char* methodName) { return invoke<BOOL>(0xDD17B0, methodName); } // 0xF3F7B05FC4684A7C
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER(const char* methodName) { return invoke<BOOL>(0xDD1810, methodName); } // 0x23F66A35FFBE3FFA
static void END_SCALEFORM_MOVIE_METHOD() { invoke<Void>(0xDD1870); } // 0xE6B753D52F4CA222
static int END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE() { return invoke<int>(0xDD1880); } // 0x6CA3F2B87712B6A4
static BOOL IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(int methodReturn) { return invoke<BOOL>(0xDD18A0, methodReturn); } // 0xA6F779AA284EB20E
static int GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(int methodReturn) { return invoke<int>(0xDD18D0, methodReturn); } // 0x5DEF122A58D4F685
static BOOL GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(int methodReturn) { return invoke<BOOL>(0xDD18F0, methodReturn); } // 0x59252C070F1B0428
static const char* GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING(int methodReturn) { return invoke<const char*>(0xDD1920, methodReturn); } // 0xB78DC0F63757FBD4
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(int value) { invoke<Void>(0xDD1990, value); } // 0x330108B080A2132F
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(float value) { invoke<Void>(0xDD19A0, value); } // 0x74BF156C860580D4
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(BOOL value) { invoke<Void>(0xDD19C0, value); } // 0x557F1E2300EF1A3E
static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) { invoke<Void>(0xDD19E0, componentType); } // 0x882AEFD55B8D51FB
static void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<Void>(0xDD19F0); } // 0xCFAD3D478C87321A
static void END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING() { invoke<Void>(0xDD1A00); } // 0xF84BAB6A609E97D4
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(const char* string) { invoke<Void>(0xDD1A10, string); } // 0xA9A70CB35AC098D9
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(const char* string) { invoke<Void>(0xDD1A30, string); } // 0x3585BEBEDC67FCC7
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(const char* string) { invoke<Void>(0xDD1A50, string); } // 0xCE3E870AC37B4253
static BOOL DOES_LATEST_BRIEF_STRING_EXIST(int p0) { return invoke<BOOL>(0xDD1A70, p0); } // 0x9004B02246EEC817
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(int value) { invoke<Void>(0xDD1AA0, value); } // 0x2EF4D786C0BC9419
static void REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xDD1B10, hudComponent); } // 0x98930EDD857375BF
static BOOL HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(int hudComponent) { return invoke<BOOL>(0xDD1B30, hudComponent); } // 0x9E7C5A44096EB799
static void REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xDD1B60, hudComponent); } // 0xE38DA3B12A4DAB3B
static BOOL PASS_KEYBOARD_INPUT_TO_SCALEFORM(int scaleformHandle) { return invoke<BOOL>(0xDD1B70, scaleformHandle); } // 0x026879F0D0AF82C3
static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xDD1BA0, channel); } // 0xECDF98280946398E
static int GET_TV_CHANNEL() { return invoke<int>(0xDD1BC0); } // 0x6609A7E82612E0DF
static void SET_TV_VOLUME(float volume) { invoke<Void>(0xDD1BD0, volume); } // 0xBAF43CF1A42D5B1A
static float GET_TV_VOLUME() { return invoke<float>(0xDD1BE0); } // 0x666CD06EF4DA7E5F
static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<Void>(0xDD1C00, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); } // 0x1A926FCDE89B4E6E
static void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { invoke<Void>(0xDD1D20, tvChannel, playlistName, restart); } // 0x7C7F282055FB517C
static void SET_TV_CHANNEL_PLAYLIST_AT_HOUR(int tvChannel, const char* playlistName, int hour) { invoke<Void>(0xDD1D40, tvChannel, playlistName, hour); } // 0x836D2C7CBC0248D9
static void CLEAR_TV_CHANNEL_PLAYLIST(int tvChannel) { invoke<Void>(0xDD1D80, tvChannel); } // 0xF03C7B57F88A5BD3
static BOOL IS_PLAYLIST_ON_CHANNEL(int tvChannel, Any p1) { return invoke<BOOL>(0xDD1DA0, tvChannel, p1); } // 0xF03BF645614F3175
static BOOL IS_TVSHOW_CURRENTLY_PLAYING(Hash videoCliphash) { return invoke<BOOL>(0xDD1DD0, videoCliphash); } // 0x2200033BCF24787D
static void ENABLE_MOVIE_KEYFRAME_WAIT(BOOL toggle) { invoke<Void>(0xDD1E00, toggle); } // 0x24D021DE46A198D2
static void SET_TV_PLAYER_WATCHING_THIS_FRAME(Any p0) { invoke<Void>(0xDD1E20, p0); } // 0xAFD4869CC7EDDF08
static Hash GET_CURRENT_TV_CLIP_NAMEHASH() { return invoke<Hash>(0xDD1E70); } // 0xE51354CCCD89945F
static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0xDD1E90, toggle); } // 0x85B701372CB0390F
static BOOL UI3DSCENE_IS_AVAILABLE() { return invoke<BOOL>(0xDD1EB0); } // 0xAFF91C9040AC6A43
static BOOL UI3DSCENE_PUSH_PRESET(const char* presetName) { return invoke<BOOL>(0xDD1ED0, presetName); } // 0xCB55C62F869F934A
static BOOL UI3DSCENE_ASSIGN_PED_TO_SLOT(const char* presetName, Ped ped, int slot, float posX, float posY, float posZ) { return invoke<BOOL>(0xDD1F40, presetName, ped, slot, posX, posY, posZ); } // 0xBB0128A9D53B1935
static void UI3DSCENE_CLEAR_PATCHED_DATA() { invoke<Void>(0xDD2040); } // 0xA33BDA0B7720976B
static void UI3DSCENE_MAKE_PUSHED_PRESET_PERSISTENT(BOOL toggle) { invoke<Void>(0xDD2060, toggle); } // 0xEB1896D38B4F1DB4
static void TERRAINGRID_ACTIVATE(BOOL toggle) { invoke<Void>(0xDD2080, toggle); } // 0x3DA00A8D58908B2C
static void TERRAINGRID_SET_PARAMS(float x, float y, float z, float forwardX, float forwardY, float forwardZ, float sizeX, float sizeY, float sizeZ, float gridScale, float glowIntensity, float normalHeight, float heightDiff) { invoke<Void>(0xDD20A0, x, y, z, forwardX, forwardY, forwardZ, sizeX, sizeY, sizeZ, gridScale, glowIntensity, normalHeight, heightDiff); } // 0xDF3F4CBE546A000D
static void TERRAINGRID_SET_COLOURS(int lowR, int lowG, int lowB, int lowAlpha, int r, int g, int b, int alpha, int highR, int highG, int highB, int highAlpha) { invoke<Void>(0xDD2180, lowR, lowG, lowB, lowAlpha, r, g, b, alpha, highR, highG, highB, highAlpha); } // 0x8FE53A17E3B48F44
static void ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) { invoke<Void>(0xDD21F0, effectName, duration, looped); } // 0xDCAFFD08A08087EB
static void ANIMPOSTFX_STOP(const char* effectName) { invoke<Void>(0xDD2280, effectName); } // 0x21172E4DF035B893
static float ANIMPOSTFX_GET_CURRENT_TIME(const char* effectName) { return invoke<float>(0xDD22E0, effectName); } // 0xF854E7F9C196DEFE
static BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke<BOOL>(0xDD2350, effectName); } // 0x47CB3D397940E783
static void ANIMPOSTFX_STOP_ALL() { invoke<Void>(0xDD23C0); } // 0x7919995BD2B8745C
static void ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS(const char* effectName) { invoke<Void>(0xDD23E0, effectName); } // 0x8A9BBDEAE0867331
static void BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(const char* string) { invoke<Void>(0xDDFAC0, string); } // 0xB661D6EC3F065818
static void END_TEXT_COMMAND_BUSYSPINNER_ON(int busySpinnerType) { invoke<Void>(0xDDFAD0, busySpinnerType); } // 0x654AFEEF256E650F
static void BUSYSPINNER_OFF() { invoke<Void>(0xDDFAE0); } // 0x65662724C6BC4810
static void PRELOAD_BUSYSPINNER() { invoke<Void>(0xDDFAF0); } // 0x8CBD7E751A3A6A85
static BOOL BUSYSPINNER_IS_ON() { return invoke<BOOL>(0xDDFB00); } // 0x73F9AE5F32ABCCA9
static BOOL BUSYSPINNER_IS_DISPLAYING() { return invoke<BOOL>(0xDDFB20); } // 0x92E1F6B57257471D
static void DISABLE_PAUSEMENU_SPINNER(BOOL p0) { invoke<Void>(0xDDFB40, p0); } // 0x5E174DAD9D215609
static void SET_MOUSE_CURSOR_THIS_FRAME() { invoke<Void>(0xDDFB50); } // 0xA6DB7FC56DBDFB82
static void SET_MOUSE_CURSOR_STYLE(int spriteId) { invoke<Void>(0xDDFB60, spriteId); } // 0x30EBBB1D4EDC8FE4
static void SET_MOUSE_CURSOR_VISIBLE(BOOL toggle) { invoke<Void>(0xDDFB70, toggle); } // 0x26BBBC01C3E132A7
static BOOL IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS() { return invoke<BOOL>(0xDDFB80); } // 0x2135EF5011FECD68
static BOOL GET_MOUSE_EVENT(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0xDDFB90, scaleformHandle, p1, p2, p3); } // 0xEE00DCC111704F16
static void THEFEED_ONLY_SHOW_TOOLTIPS(BOOL toggle) { invoke<Void>(0xDDFBA0, toggle); } // 0xD3D5E152F6D9A5F6
static void THEFEED_SET_SCRIPTED_MENU_HEIGHT(float pos) { invoke<Void>(0xDDFBF0, pos); } // 0x043244A32AD6E17D
static void THEFEED_HIDE() { invoke<Void>(0xDDFC20); } // 0xC5F6E5CC785FEC20
static void THEFEED_HIDE_THIS_FRAME() { invoke<Void>(0xDDFC40); } // 0x0C9B2F8C2BD128C2
static void THEFEED_SHOW() { invoke<Void>(0xDDFC60); } // 0x8875527DD4E42C07
static void THEFEED_FLUSH_QUEUE() { invoke<Void>(0xDDFC80); } // 0xC138265FD0CDEA4E
static void THEFEED_REMOVE_ITEM(int notificationId) { invoke<Void>(0xDDFCA0, notificationId); } // 0xFE3A52C5B7AE3101
static void THEFEED_FORCE_RENDER_ON() { invoke<Void>(0xDDFCD0); } // 0x787E27CA7632AC90
static void THEFEED_FORCE_RENDER_OFF() { invoke<Void>(0xDDFCF0); } // 0x6B4FEC23A5AD2DC0
static void THEFEED_PAUSE() { invoke<Void>(0xDDFD10); } // 0x5C6622EF2CEA902F
static void THEFEED_RESUME() { invoke<Void>(0xDDFD30); } // 0xCCC82B30A1C53626
static BOOL THEFEED_IS_PAUSED() { return invoke<BOOL>(0xDDFD50); } // 0xBB7AD75D26AF0143
static void THEFEED_REPORT_LOGO_ON() { invoke<Void>(0xDDFD70); } // 0x8020F127745ED3F5
static void THEFEED_REPORT_LOGO_OFF() { invoke<Void>(0xDDFD90); } // 0xB11A8AFB3C6DEFEE
static int THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() { return invoke<int>(0xDDFDB0); } // 0x8DB6B5124B5217E1
static void THEFEED_AUTO_POST_GAMETIPS_ON() { invoke<Void>(0xDDFDE0); } // 0x9EABCC9DA69DEDC2
static void THEFEED_AUTO_POST_GAMETIPS_OFF() { invoke<Void>(0xDDFE00); } // 0x1E528DDB9C065FB7
static void THEFEED_SET_BACKGROUND_COLOR_FOR_NEXT_POST(int hudColorIndex) { invoke<Void>(0xDDFE20, hudColorIndex); } // 0xE37CD12400926DE5
static void THEFEED_SET_RGBA_PARAMETER_FOR_NEXT_MESSAGE(int red, int green, int blue, int alpha) { invoke<Void>(0xDDFE50, red, green, blue, alpha); } // 0xDE4E5CC177B7051F
static void THEFEED_SET_FLASH_DURATION_PARAMETER_FOR_NEXT_MESSAGE(int count) { invoke<Void>(0xDDFEB0, count); } // 0xF96D051DEBF38D64
static void THEFEED_SET_VIBRATE_PARAMETER_FOR_NEXT_MESSAGE(BOOL toggle) { invoke<Void>(0xDDFEE0, toggle); } // 0x4ECB46EDAD7EA53D
static void THEFEED_RESET_ALL_PARAMETERS() { invoke<Void>(0xDDFF10); } // 0x17E18CDB962AC915
static void THEFEED_FREEZE_NEXT_POST() { invoke<Void>(0xDDFF30); } // 0x7C64D5DE5CA79A81
static void THEFEED_CLEAR_FROZEN_POST() { invoke<Void>(0xDDFF50); } // 0x9C5AF6A77EBFAFDC
static void THEFEED_UPDATE_ITEM_TEXTURE(const char* txdString1, const char* txnString1, const char* txdString2, const char* txnString2) { invoke<Void>(0xDDFF70, txdString1, txnString1, txdString2, txnString2); } // 0x4CF6314488B07405
static void BEGIN_TEXT_COMMAND_THEFEED_POST(const char* text) { invoke<Void>(0xDDFFC0, text); } // 0xCCDB0041859B85A6
static int END_TEXT_COMMAND_THEFEED_POST_STATS(const char* statTitle, int iconEnum, BOOL stepVal, int barValue, BOOL isImportant, const char* pictureTextureDict, const char* pictureTextureName) { return invoke<int>(0xDDFFD0, statTitle, iconEnum, stepVal, barValue, isImportant, pictureTextureDict, pictureTextureName); } // 0x0AAAE599E05E67D2
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xDE0010, txdName, textureName, flash, iconType, sender, subject); } // 0x5C7E2225D7451992
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xDE0080, txdName, textureName, flash, iconType, sender, subject); } // 0xB8ACFA63585700CC
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration) { return invoke<int>(0xDE0130, txdName, textureName, flash, iconType, sender, subject, duration); } // 0x6015BF83F19DAE5C
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration, const char* clanTag) { return invoke<int>(0xDE01A0, txdName, textureName, flash, iconType, sender, subject, duration, clanTag); } // 0xE4DA8A1904D03AB9
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(const char* txdName, const char* textureName, BOOL flash, int iconType1, const char* sender, const char* subject, float duration, const char* clanTag, int iconType2, int p9) { return invoke<int>(0xDE0210, txdName, textureName, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); } // 0x0D54BCD3F7048BFA
static int END_TEXT_COMMAND_THEFEED_POST_TICKER(BOOL blink, BOOL p1) { return invoke<int>(0xDE0280, blink, p1); } // 0x25ABFB435E16C7D9
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(BOOL blink, BOOL p1) { return invoke<int>(0xDE02C0, blink, p1); } // 0x320F2F5B5607E425
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(BOOL blink, BOOL p1) { return invoke<int>(0xDE0330, blink, p1); } // 0x1962888D78D95402
static int END_TEXT_COMMAND_THEFEED_POST_AWARD(const char* textureDict, const char* textureName, int rpBonus, int colorOverlay, const char* titleLabel) { return invoke<int>(0xDE0370, textureDict, textureName, rpBonus, colorOverlay, titleLabel); } // 0xD52B1CDE8B03CE86
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0xDE03A0, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); } // 0xB262204BCFF28FCC
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, const char* playerName, int R, int G, int B) { return invoke<int>(0xDE0420, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); } // 0x4252EAF1B00ED825
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK(const char* gxtLabel1, int p1, const char* gxtLabel2) { return invoke<int>(0xDE04B0, gxtLabel1, p1, gxtLabel2); } // 0x7A7782BC954C994B
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(const char* gxtLabel1, int p1, const char* gxtLabel2, int p3) { return invoke<int>(0xDE04E0, gxtLabel1, p1, gxtLabel2, p3); } // 0xC98870E86912B9E0
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<int>(0xDE0520, p0, p1, p2, p3, p4, p5); } // 0x54CF97A068ED5618
static int END_TEXT_COMMAND_THEFEED_POST_MPTICKER(BOOL blink, BOOL p1) { return invoke<int>(0xDE0560, blink, p1); } // 0x438D03085FECB959
static int END_TEXT_COMMAND_THEFEED_POST_CREW_RANKUP_WITH_LITERAL_FLAG(const char* p0, const char* p1, const char* p2, BOOL p3, BOOL p4) { return invoke<int>(0xDE05A0, p0, p1, p2, p3, p4); } // 0xC36615DCBE463B8A
static int END_TEXT_COMMAND_THEFEED_POST_VERSUS_TU(const char* txdName1, const char* textureName1, int count1, const char* txdName2, const char* textureName2, int count2, int hudColor1, int hudColor2) { return invoke<int>(0xDE05E0, txdName1, textureName1, count1, txdName2, textureName2, count2, hudColor1, hudColor2); } // 0x4B4E142A1E3653A4
static void BEGIN_TEXT_COMMAND_PRINT(const char* GxtEntry) { invoke<Void>(0xDE0630, GxtEntry); } // 0x17EA339F685C42D2
static void END_TEXT_COMMAND_PRINT(int duration, BOOL drawImmediately) { invoke<Void>(0xDE0640, duration, drawImmediately); } // 0x0A3136AD174470CC
static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(const char* text) { invoke<Void>(0xDE0660, text); } // 0x32A590914F10401C
static BOOL END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<BOOL>(0xDE0670); } // 0x96DEE7666C9409E5
static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(const char* text) { invoke<Void>(0xDE0690, text); } // 0xEAEB6E7D3FAEBD5B
static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y, int p2) { invoke<Void>(0xDE06C0, x, y, p2); } // 0x25DD447A6EB3A86F
static void BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(const char* text) { invoke<Void>(0xDE0710, text); } // 0x282D5DA1EE14950F
static float END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(BOOL p0) { return invoke<float>(0xDE0720, p0); } // 0x43026780D77E3DC0
static void BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(const char* entry) { invoke<Void>(0xDE0750, entry); } // 0x012F78DEB1F1AF9C
static int END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(float x, float y) { return invoke<int>(0xDE0760, x, y); } // 0x83FBFC2ED3CA1611
static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(const char* inputType) { invoke<Void>(0xDE0790, inputType); } // 0xAC98CA65AD9A3215
static void END_TEXT_COMMAND_DISPLAY_HELP(int p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0xDE07A0, p0, loop, beep, shape); } // 0x5E01B6B1F460FE3F
static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* labelName) { invoke<Void>(0xDE07D0, labelName); } // 0x39DCBE5519BD783A
static BOOL END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<BOOL>(0xDE07E0, p0); } // 0x7EBCD400E7DE179C
static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(const char* textLabel) { invoke<Void>(0xDE0810, textLabel); } // 0xF3D182B81172EAB6
static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0xDE0820, blip); } // 0xFB605529038475D2
static void BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(const char* p0) { invoke<Void>(0xDE0830, p0); } // 0x2E787BE7A586A8E0
static void END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xDE0840, p0); } // 0x77AFF2EAF772F223
static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(const char* text) { invoke<Void>(0xDE0860, text); } // 0x7C59282918D59E1B
static void END_TEXT_COMMAND_CLEAR_PRINT() { invoke<Void>(0xDE0870); } // 0xD4C961FBE468D19D
static void BEGIN_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(const char* gxtEntry) { invoke<Void>(0xDE0880, gxtEntry); } // 0xF394C416AB393C2D
static void END_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(int p0) { invoke<Void>(0xDE0890, p0); } // 0xC5999CADF163C996
static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0xDE08A0, value); } // 0x511D14ED2DA887E1
static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0xDE08B0, value, decimalPlaces); } // 0x7DCF91CE9137DE0E
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(const char* labelName) { invoke<Void>(0xDE08C0, labelName); } // 0xACF853FB3F6EA7D4
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Hash gxtEntryHash) { invoke<Void>(0xDE08D0, gxtEntryHash); } // 0xD4006E065B0782FA
static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { invoke<Void>(0xDE08E0, blip); } // 0x273F00982486DCC6
static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(const char* text) { invoke<Void>(0xDE08F0, text); } // 0x60D332F23943B34F
static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0xDE0900, timestamp, flags); } // 0xBD34A69071611974
static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, BOOL commaSeparated) { invoke<Void>(0xDE0910, value, commaSeparated); } // 0xB5DF3215F3864B3F
static void ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(const char* p0, int p1) { invoke<Void>(0xDE0920, p0, p1); } // 0x6CA7A80BDD78C062
static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(const char* website) { invoke<Void>(0xDE09B0, website); } // 0x74E878E9E51685BE
static void ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(const char* string) { invoke<Void>(0xDE09C0, string); } // 0xB993F5B7A74B2A85
static void SET_COLOUR_OF_NEXT_TEXT_COMPONENT(int hudColor) { invoke<Void>(0xDE09D0, hudColor); } // 0x4E5A3D96808F7F84
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(const char* text, int position, int length) { return invoke<const char*>(0xDE09E0, text, position, length); } // 0xA4FC5B871651C9F9
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(const char* text, int position, int length, int maxLength) { return invoke<const char*>(0xDE0A10, text, position, length, maxLength); } // 0x96793ADAC5A06FCB
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(const char* text, int startPosition, int endPosition) { return invoke<const char*>(0xDE0A40, text, startPosition, endPosition); } // 0xE82BC2F91FAEEAE8
static const char* GET_FILENAME_FOR_AUDIO_CONVERSATION(const char* labelName) { return invoke<const char*>(0xDE0A80, labelName); } // 0xFACCDE46E24AD056
static void CLEAR_PRINTS() { invoke<Void>(0xDE0B10); } // 0x406CBCEA35499884
static void CLEAR_BRIEF() { invoke<Void>(0xDE0B20); } // 0x3FE29AE9C01FA3C2
static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xDE0B40); } // 0xAD01710361B8BCF5
static void CLEAR_THIS_PRINT(const char* p0) { invoke<Void>(0xDE0B50, p0); } // 0x4E8E15513E171E54
static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xDE0CD0); } // 0xFFD79EDD25B8EC72
static BOOL DOES_TEXT_BLOCK_EXIST(const char* gxt) { return invoke<BOOL>(0xDE0CE0, gxt); } // 0x00F2D73E763510A4
static void REQUEST_ADDITIONAL_TEXT(const char* gxt, int slot) { invoke<Void>(0xDE0D20, gxt, slot); } // 0xF2CB0224D3BE0B42
static void REQUEST_ADDITIONAL_TEXT_FOR_DLC(const char* gxt, int slot) { invoke<Void>(0xDE0D40, gxt, slot); } // 0x4AB15E3851FF326B
static BOOL HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<BOOL>(0xDE0D60, slot); } // 0xDCB78A15E5F495DC
static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { invoke<Void>(0xDE0D90, p0, p1); } // 0xA790E8E6FD7393AC
static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0xDE0DB0, p0); } // 0x134994A89C4A6F71
static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(const char* gxt, int slot) { return invoke<BOOL>(0xDE0DE0, gxt, slot); } // 0xCC2EFE4B1D0EE422
static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xDE0E10); } // 0xFBA523E6F8ACE541
static BOOL DOES_TEXT_LABEL_EXIST(const char* gxt) { return invoke<BOOL>(0xDE0E30, gxt); } // 0x6BA487C862DB8DDF
static const char* GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(const char* string, int length) { return invoke<const char*>(0xDE0E60, string, length); } // 0x570D616FD7B4715D
static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(const char* gxt) { return invoke<int>(0xDE0ED0, gxt); } // 0x7BA6D9664C39BE6D
static int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0xDE0F20, string); } // 0x09112CCF7824FE38
static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* string) { return invoke<int>(0xDE0F50, string); } // 0x31A0D8A679F7D5A7
static const char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<const char*>(0xDE0F80, hash); } // 0x816A63C007D39838
static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xDE1040); } // 0x5775F8AC61C2CAE1
static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xDE1060); } // 0xC1FF684795F27005
static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xDE1080); } // 0x5994A2F6D4FFFE4D
static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0xDE10A0, toggle); } // 0x747786364137DC63
static void DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xDE10D0); } // 0xDB1A0120CD3E3005
static void DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME() { invoke<Void>(0xDE10F0); } // 0x915CC2D1BD15DFDF
static void DISPLAY_RADAR(BOOL toggle) { invoke<Void>(0xDE1110, toggle); } // 0x37B894853929BF1A
static void SET_FAKE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xDE1140, toggle); } // 0x41CA829CEAEC6F29
static BOOL GET_FAKE_SPECTATOR_MODE() { return invoke<BOOL>(0xDE1160); } // 0x88F53A922D4F476E
static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xDE1170); } // 0xC5D15A335232A15D
static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0xDE1190); } // 0xBE259DBA45F2996E
static BOOL IS_MINIMAP_RENDERING() { return invoke<BOOL>(0xDE11B0); } // 0x6DA5456258FF887A
static void USE_VEHICLE_TARGETING_RETICULE(Any p0) { invoke<Void>(0xDE11C0, p0); } // 0xEC214A1AB38E0C2B
static void ADD_VALID_VEHICLE_HIT_HASH(Any p0) { invoke<Void>(0xDE1200, p0); } // 0x045DEDB275874D85
static void CLEAR_VALID_VEHICLE_HIT_HASHES() { invoke<Void>(0xDE12B0); } // 0xEF8AE79C28640CD2
static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0xDE12F0, blip, enabled); } // 0xBC64B805EE071A37
static void CLEAR_ALL_BLIP_ROUTES() { invoke<Void>(0xDE1310); } // 0xCABB9B176D4BC0C6
static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0xDE1320, blip, colour); } // 0x032F99DF3B301AFA
static void SET_FORCE_SHOW_GPS(BOOL toggle) { invoke<Void>(0xDE1340, toggle); } // 0x7F13032016798DAB
static void SET_USE_SET_DESTINATION_IN_PAUSE_MAP(BOOL toggle) { invoke<Void>(0xDE1360, toggle); } // 0x5E0F50AE21F74BC0
static void SET_BLOCK_WANTED_FLASH(BOOL disabled) { invoke<Void>(0xDE1380, disabled); } // 0xAAD5B1BB340D06A2
static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xDE13A0, p0); } // 0x3EC26139639016E5
static void FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(int p0) { invoke<Void>(0xDE13C0, p0); } // 0xC8B1536BA5FC0F03
static void SET_RADAR_ZOOM_PRECISE(float zoom) { invoke<Void>(0xDE13E0, zoom); } // 0xC4C6378884E06FBD
static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0xDE1420, zoomLevel); } // 0x4D2F1CB87CBF249D
static void SET_RADAR_ZOOM_TO_BLIP(Blip blip, float zoom) { invoke<Void>(0xDE14D0, blip, zoom); } // 0x0F16C412C8DE5D52
static void SET_RADAR_ZOOM_TO_DISTANCE(float zoom) { invoke<Void>(0xDE15A0, zoom); } // 0xD09188DB6289E413
static void UPDATE_RADAR_ZOOM_TO_BLIP() { invoke<Void>(0xDE15E0); } // 0x77C721059FFCEE39
static void GET_HUD_COLOUR(int hudColorIndex, int* r, int* g, int* b, int* a) { invoke<Void>(0xDE15F0, hudColorIndex, r, g, b, a); } // 0xA306E6FD2A6558E6
static void SET_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xDE1650, r, g, b, a); } // 0xDBEFC24929CE2C54
static void SET_SECOND_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xDE1670, r, g, b, a); } // 0x7E94C30FC8631308
static void REPLACE_HUD_COLOUR(int hudColorIndex, int hudColorIndex2) { invoke<Void>(0xDE1690, hudColorIndex, hudColorIndex2); } // 0x1800980A1FBB4257
static void REPLACE_HUD_COLOUR_WITH_RGBA(int hudColorIndex, int r, int g, int b, int a) { invoke<Void>(0xDE16D0, hudColorIndex, r, g, b, a); } // 0x2BC0725CAF2E0D6B
static void SET_ABILITY_BAR_VISIBILITY(BOOL visible) { invoke<Void>(0xDE1700, visible); } // 0x5B23CA453BC57FC2
static void SET_ALLOW_ABILITY_BAR(BOOL toggle) { invoke<Void>(0xDE1720, toggle); } // 0x46787A693F6EFA94
static void FLASH_ABILITY_BAR(int millisecondsToFlash) { invoke<Void>(0xDE1750, millisecondsToFlash); } // 0x8E8EDF5205B15D28
static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0xDE1760, p0, p1); } // 0x8349F3048B5A74C7
static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0xDE1780, p0); } // 0x3C77232660BA1403
static void FORCE_OFF_WANTED_STAR_FLASH(BOOL toggle) { invoke<Void>(0xDE17A0, toggle); } // 0xA87B62BE7F8F4476
static void SET_CUSTOM_MP_HUD_COLOR(int hudColorId) { invoke<Void>(0xDE17C0, hudColorId); } // 0x34337F322B990169
static float GET_RENDERED_CHARACTER_HEIGHT(float size, int font) { return invoke<float>(0xDE1810, size, font); } // 0x3D634C7F6A6D4CA4
static void SET_TEXT_SCALE(float scale, float size) { invoke<Void>(0xDE18D0, scale, size); } // 0xBFE94E91C83D8794
static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0xDE18F0, red, green, blue, alpha); } // 0x5A18938160AE52D0
static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0xDE1930, align); } // 0xEAF65721ACB2FDFB
static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0xDE1950, toggle); } // 0x16EC7160BEBE7A6F
static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0xDE1970, justifyType); } // 0x2873B596E322DCDA
static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0xDE19A0, start, end); } // 0xE05EB1EAE7CCDC59
static void SET_TEXT_LEADING(int p0) { invoke<Void>(0xDE19C0, p0); } // 0xFB193A91887FFAB1
static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xDE19E0, p0); } // 0xEA62FB8CA7210CF3
static void SET_TEXT_FONT(int fontType) { invoke<Void>(0xDE19F0, fontType); } // 0x8413CD3BCEEAD8DC
static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0xDE1A10); } // 0x2B50C29142312934
static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0xDE1A20, distance, r, g, b, a); } // 0xB91BC43E3A58E2C8
static void SET_TEXT_OUTLINE() { invoke<Void>(0xDE1A40); } // 0xF18BC069A9C882EC
static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<Void>(0xDE1A50, p0, r, g, b, a); } // 0xBE923A0FDD781C93
static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0xDE1A60, renderId); } // 0x61055542D9D877AE
static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0xDE1AD0); } // 0xB803C9D209A7C3DC
static BOOL REGISTER_NAMED_RENDERTARGET(const char* name, BOOL p1) { return invoke<BOOL>(0xDE1AE0, name, p1); } // 0x106F99CDCDEED9A0
static BOOL IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke<BOOL>(0xDE1BA0, name); } // 0xC13AFEAFC3F7AD96
static BOOL RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke<BOOL>(0xDE1BE0, name); } // 0xF8211BE23F0D0552
static void LINK_NAMED_RENDERTARGET(Hash modelHash) { invoke<Void>(0xDE1C20, modelHash); } // 0xF1C26EB47E689774
static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke<int>(0xDE1CD0, name); } // 0x08732C0099FA1813
static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash modelHash) { return invoke<BOOL>(0xDE1D10, modelHash); } // 0x4D05B3FECBCB8D97
static void CLEAR_HELP(BOOL toggle) { invoke<Void>(0xDE1DD0, toggle); } // 0x428C32CC68809A35
static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0xDE1DF0); } // 0x3273F980CC5E02CD
static BOOL HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME() { return invoke<BOOL>(0xDE1E50); } // 0x89817276E6872917
static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xDE1E70); } // 0x4C705AAF75363287
static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0xDE1E90); } // 0xA5DAECD045AA8024
static void SET_HELP_MESSAGE_STYLE(int style, int hudColor, int alpha, int p3, int p4) { invoke<Void>(0xDE1EB0, style, hudColor, alpha, p3, p4); } // 0x55DAC9CDA320120B
static int GET_STANDARD_BLIP_ENUM_ID() { return invoke<int>(0xDE1ED0); } // 0x8CC13B3BF7A9890A
static int GET_WAYPOINT_BLIP_ENUM_ID() { return invoke<int>(0xDE1EE0); } // 0x2A3612A4B836469E
static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0xDE1EF0); } // 0xC802478C8862BDAD
static Blip GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xDE1F60, blipSprite); } // 0xA3F6143A8F610118
static Blip GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xDE1F80, blipSprite); } // 0xD56419CB9E15983F
static Blip GET_CLOSEST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xDE1FB0, blipSprite); } // 0xB981254932E1095E
static Vector3 GET_BLIP_INFO_ID_COORD(Blip blip) { return invoke<Vector3>(0xDE1FD0, blip); } // 0x7DFE6973AE84B6ED
static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0xDE2080, blip); } // 0xC4BDFF590B6DE7A5
static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0xDE20C0, blip); } // 0x6AEAF32EC173BB39
static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0xDE2100, blip); } // 0xA143F1936B350BD0
static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0xDE2170, blip); } // 0xFBDAF3DB03D61421
static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0xDE2180, entity); } // 0xCA048D064CB64920
static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0xDE21A0, posX, posY, posZ, radius); } // 0x339BF323C4261E69
static Blip ADD_BLIP_FOR_AREA(float x, float y, float z, float width, float height) { return invoke<Blip>(0xDE2260, x, y, z, width, height); } // 0xAF737D3DF3BD2AD0
static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0xDE2290, entity); } // 0x18E23E031A9B798F
static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xDE22B0, pickup); } // 0xA1521B7DF72BC9C8
static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0xDE22D0, x, y, z); } // 0x34864AB7DA700AA6
static void TRIGGER_SONAR_BLIP(float posX, float posY, float posZ, float radius, int p4) { invoke<Void>(0xDE2380, posX, posY, posZ, radius, p4); } // 0xEECAD62659A58BDE
static void ALLOW_SONAR_BLIPS(BOOL toggle) { invoke<Void>(0xDE23F0, toggle); } // 0xCB3A062F0CD9B0CD
static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0xDE2410, blip, posX, posY, posZ); } // 0xDABC73EF230B6665
static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0xDE24B0, blip); } // 0x3CF9D442F2C902BD
static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0xDE2560, blip, spriteId); } // 0x4C905FB262965D5D
static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0xDE2580, blip); } // 0x8FACE824AEC046E8
static void SET_COP_BLIP_SPRITE(int p0, float p1) { invoke<Void>(0xDE25C0, p0, p1); } // 0x6C7DF9AC1E90132A
static void SET_COP_BLIP_SPRITE_AS_STANDARD() { invoke<Void>(0xDE25E0); } // 0xF0E6476CF8FDB1A3
static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* gxtEntry) { invoke<Void>(0xDE2600, blip, gxtEntry); } // 0x594D5D0D7071B0DE
static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0xDE2640, blip, player); } // 0x4C8213F2F1BE87F7
static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0xDE2680, blip, alpha); } // 0xF42EBD7CD0682A8B
static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0xDE26C0, blip); } // 0xF03FBAFA0284124E
static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { invoke<Void>(0xDE2700, blip, opacity, duration); } // 0xDA2127CA9B43A877
static int GET_BLIP_FADE_DIRECTION(Blip blip) { return invoke<int>(0xDE2730, blip); } // 0x0857F7FF8AA07F67
static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0xDE2760, blip, rotation); } // 0x0C4EDD88E2185B8F
static void SET_BLIP_ROTATION_WITH_FLOAT(Blip blip, float heading) { invoke<Void>(0xDE2780, blip, heading); } // 0xA1BA8AD71EF8F11A
static int GET_BLIP_ROTATION(Blip blip) { return invoke<int>(0xDE27A0, blip); } // 0x350EDDA8A9A3C23D
static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xDE27E0, blip, duration); } // 0x8D777E1B885E428C
static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0xDE2800, blip, p1); } // 0xB562F84CE9B07D89
static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0xDE2820, blip, color); } // 0x61183D6239A9D7B8
static void SET_BLIP_SECONDARY_COLOUR(Blip blip, int r, int g, int b) { invoke<Void>(0xDE2840, blip, r, g, b); } // 0x40B5D81DD20A370B
static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xDE28C0, blip); } // 0xA247F53580E53DCE
static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0xDE2900, blip); } // 0x2B91B956D741B8CE
static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xDE29A0, blip); } // 0xFA7642FA8EE73EEE
static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0xDE29E0, blip); } // 0xE38FA95DFF747E7C
static BOOL DOES_BLIP_HAVE_GPS_ROUTE(Blip blip) { return invoke<BOOL>(0xDE2A20, blip); } // 0x6308A5C1C94EABC0
static void SET_BLIP_HIDDEN_ON_LEGEND(Blip blip, BOOL toggle) { invoke<Void>(0xDE2A60, blip, toggle); } // 0xA1DFF583C8070610
static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { invoke<Void>(0xDE2A80, blip, toggle); } // 0x3C6F00DDEA51A2DA
static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2AA0, blip, toggle); } // 0xEDFFFD65B4603707
static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0xDE2AC0, blip); } // 0xBA5BA0D4E8539C9C
static Blip GET_NEW_SELECTED_MISSION_CREATOR_BLIP() { return invoke<Blip>(0xDE2B00); } // 0x02C5E86CEA1BE784
static BOOL IS_HOVERING_OVER_MISSION_CREATOR_BLIP() { return invoke<BOOL>(0xDE2B40); } // 0x4F9B9AA859613995
static void SHOW_START_MISSION_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xDE2B90, toggle); } // 0xD441661EA68E9C70
static void SHOW_CONTACT_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xDE2BE0, toggle); } // 0x4BA996FCD0F9D100
static void RELOAD_MAP_MENU() { invoke<Void>(0xDE2C80); } // 0x95A329CAEBBB3E76
static void SET_BLIP_MARKER_LONG_DISTANCE(Any p0, Any p1) { invoke<Void>(0xDE2CA0, p0, p1); } // 0xD54D26545A07FB31
static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0xDE2CC0, blip, toggle); } // 0x861AC9C2D48CEA7F
static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0xDE2CE0, blip, toggle); } // 0xAB1FFF93A0BBFCDB
static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0xDE2D00, blip); } // 0x4B889DE2DAC956DB
static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { invoke<Void>(0xDE2D40, blip, toggle); } // 0x360B279488A775FC
static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xDE2D60, blip, scale); } // 0x5D3946F818C6B331
static void SET_BLIP_SCALE_2D(Blip blip, float xScale, float yScale) { invoke<Void>(0xDE2D80, blip, xScale, yScale); } // 0xF7323733F48D067F
static void SET_BLIP_PRIORITY(Blip blip, int priority) { invoke<Void>(0xDE2DF0, blip, priority); } // 0x1456FD5C0C438B19
static void SET_BLIP_DISPLAY(Blip blip, int displayId) { invoke<Void>(0xDE2E10, blip, displayId); } // 0xF55F62DA99DB0C2F
static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0xDE2E30, blip, index); } // 0x084D9FE4DB5714CF
static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0xDE2E50, blip); } // 0xFE54B8568B2ABD12
static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0xDE2EC0, blip, toggle); } // 0x6A52036D51C7E18E
static void PULSE_BLIP(Blip blip) { invoke<Void>(0xDE2EE0, blip); } // 0x26D449828A6673C7
static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0xDE2F00, blip, number); } // 0x5765DD63F0ECC572
static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0xDE2F30, blip); } // 0x2E229E178F36A415
static void SHOW_HEIGHT_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2F50, blip, toggle); } // 0x89FE619BFBB2024B
static void SHOW_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2F70, blip, toggle); } // 0x80595F890177CB50
static void SHOW_GOLD_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2F90, blip, toggle); } // 0xDE551C7F0C84F5D5
static void SHOW_FOR_SALE_ICON_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2FB0, blip, toggle); } // 0x082FBF1124B27D02
static void SHOW_HEADING_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2FD0, blip, toggle); } // 0x0C56573D93709254
static void SHOW_OUTLINE_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2FF0, blip, toggle); } // 0xAA090F5FC303F771
static void SHOW_FRIEND_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE3010, blip, toggle); } // 0x06058DF029F581C6
static void SHOW_CREW_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE3030, blip, toggle); } // 0x65195BC76F41B298
static void SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(Blip blip, BOOL toggle) { invoke<Void>(0xDE3050, blip, toggle); } // 0xC4F090C2EC0D0FBF
static void SET_BLIP_SHORT_HEIGHT_THRESHOLD(Any p0, Any p1) { invoke<Void>(0xDE3070, p0, p1); } // 0x3E0E9367127283D7
static void SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(Blip blip, Any p1) { invoke<Void>(0xDE3090, blip, p1); } // 0xFAE0C242A432A1F2
static void SET_BLIP_AS_MINIMAL_ON_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xDE30B0, blip, toggle); } // 0xA446583E4503CCD9
static void SET_RADIUS_BLIP_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xDE30D0, blip, toggle); } // 0x641FCCDF2824DCFD
static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xDE30F0, blip); } // 0xC450B06E5AAA0985
static void SET_WAYPOINT_OFF() { invoke<Void>(0xDE3120); } // 0xA4C1E1845880C098
static void DELETE_WAYPOINTS_FROM_THIS_PLAYER() { invoke<Void>(0xDE3130); } // 0x51A6E4D010C4EA83
static void REFRESH_WAYPOINT() { invoke<Void>(0xDE3150); } // 0xB43DFE4F244E0F8E
static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0xDE3160); } // 0x02213DC34A224533
static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0xDE3190, x, y); } // 0xF8D9A55D2F2892CC
static void SET_BLIP_BRIGHT(Blip blip, BOOL toggle) { invoke<Void>(0xDE3250, blip, toggle); } // 0xEE0DD5760A017C08
static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle, int hudColorIndex) { invoke<Void>(0xDE3270, blip, toggle, hudColorIndex); } // 0xD5888E94B9AE2B51
static void REMOVE_COP_BLIP_FROM_PED(Ped ped) { invoke<Void>(0xDE32C0, ped); } // 0xC0FC6E3E1A8FBF31
static void SETUP_FAKE_CONE_DATA(Blip blip, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, int p8) { invoke<Void>(0xDE3310, blip, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFF89A4A6580A0AB1
static void REMOVE_FAKE_CONE_DATA(Blip blip) { invoke<Void>(0xDE3350, blip); } // 0xA187381CF52D87A8
static void CLEAR_FAKE_CONE_ARRAY() { invoke<Void>(0xDE3360); } // 0x118A68C39B251785
static BOOL SET_MINIMAP_COMPONENT(int componentId, BOOL toggle, int overrideColor) { return invoke<BOOL>(0xDE33C0, componentId, toggle, overrideColor); } // 0xA3EA82ACD0C97C3F
static void SET_MINIMAP_SONAR_SWEEP(BOOL toggle) { invoke<Void>(0xDE3400, toggle); } // 0x3D0BD9B4E36B9BAD
static void SHOW_ACCOUNT_PICKER() { invoke<Void>(0xDE3420); } // 0x030E65C89EF1E38C
static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0xDE3430); } // 0x413A91F497E3428F
static void SET_PM_WARNINGSCREEN_ACTIVE(BOOL p0) { invoke<Void>(0xDE3470, p0); } // 0x69E8B9365B1026DD
static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0xDE3490); } // 0x6B91FA4E397DAB8D
static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int zoom) { invoke<Void>(0xDE34A0, interior, x, y, z, zoom); } // 0xF42A811582CF3AE1
static void SET_INSIDE_VERY_SMALL_INTERIOR(BOOL toggle) { invoke<Void>(0xDE34F0, toggle); } // 0xB9485211BF50817B
static void SET_INSIDE_VERY_LARGE_INTERIOR(BOOL toggle) { invoke<Void>(0xDE3510, toggle); } // 0x060BB8BC8FFE8213
static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xDE3530); } // 0xBB6D152B544953A3
static void SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0xDE3540, x, y); } // 0x83F9B9189E65251B
static void SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(float x, float y, Any p2) { invoke<Void>(0xDE3560, x, y, p2); } // 0x2474C1A1D3FE2888
static BOOL IS_PAUSEMAP_IN_INTERIOR_MODE() { return invoke<BOOL>(0xDE3590); } // 0xD4C023FF0817F386
static void HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xDE35A0); } // 0x2102B34A7006F6C9
static void HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xDE35B0); } // 0xE1945100CB123CBF
static void SET_USE_ISLAND_MAP(BOOL toggle) { invoke<Void>(0xDE35C0, toggle); } // 0x05E996648244715D
static void DONT_TILT_MINIMAP_THIS_FRAME() { invoke<Void>(0xDE35F0); } // 0x35380F6C70B9B01F
static void DONT_ZOOM_MINIMAP_WHEN_RUNNING_THIS_FRAME() { invoke<Void>(0xDE3600); } // 0x19619CF6A5F4EE0A
static void DONT_ZOOM_MINIMAP_WHEN_SNIPING_THIS_FRAME() { invoke<Void>(0xDE3610); } // 0x6A666C5DD5D6F94E
static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xDE3620, p0); } // 0xD46356460DA60CB1
static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0xDE3640, toggle); } // 0x82BC6786EE477292
static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0xDE3660, toggle); } // 0xC940FB68F75D37B9
static void USE_FAKE_MP_CASH(BOOL toggle) { invoke<Void>(0xDE3680, toggle); } // 0x97F5AFA09D818568
static void CHANGE_FAKE_MP_CASH(int cash, int bank) { invoke<Void>(0xDE36A0, cash, bank); } // 0x29F4FA4B0206645D
static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { invoke<Void>(0xDE36B0, display); } // 0xFC14A38C4235E772
static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0xDE36D0); } // 0x62E5C1180798DAB7
static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xDE36E0); } // 0x43AE50D2A33F6E2A
static void ALLOW_DISPLAY_OF_MULTIPLAYER_CASH_TEXT(BOOL allow) { invoke<Void>(0xDE36F0, allow); } // 0x0DD2294269928A9E
static void SET_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xDE3710); } // 0x6DB41C6D84391C64
static void REMOVE_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xDE3730); } // 0x0B54862B1B49F2EA
static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xDE3750); } // 0x06C86CAF67357C8B
static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xDE3770); } // 0x674C05E89511D49B
static void SET_MULTIPLAYER_HUD_CASH(int p0, BOOL p1) { invoke<Void>(0xDE3790, p0, p1); } // 0xAD9A5C40381FE51A
static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0xDE37A0); } // 0x3BE4C55385E815B4
static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0xDE37D0); } // 0x7009D885379C8CDF
static BOOL IS_IME_IN_PROGRESS() { return invoke<BOOL>(0xDE37E0); } // 0xFC57ADE8D9DD22DC
static void DISPLAY_HELP_TEXT_THIS_FRAME(const char* message, BOOL p1) { invoke<Void>(0xDE37F0, message, p1); } // 0x2B742757DC68DB01
static void HUD_FORCE_WEAPON_WHEEL(BOOL show) { invoke<Void>(0xDE3850, show); } // 0x92D8C10950A06B6D
static void HUD_FORCE_SPECIAL_VEHICLE_WEAPON_WHEEL() { invoke<Void>(0xDE3870); } // 0x5809BD29D4D1392D
static void HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME() { invoke<Void>(0xDE3880); } // 0xF25C7C5177203507
static Hash HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED() { return invoke<Hash>(0xDE3890); } // 0xAE146ED24909CAF4
static void HUD_SET_WEAPON_WHEEL_TOP_SLOT(Hash weaponHash) { invoke<Void>(0xDE38B0, weaponHash); } // 0xB0D3DD0BB37136FD
static Hash HUD_GET_WEAPON_WHEEL_TOP_SLOT(int weaponTypeIndex) { return invoke<Hash>(0xDE3900, weaponTypeIndex); } // 0xFCFCA9D377ED6568
static void HUD_SHOWING_CHARACTER_SWITCH_SELECTION(BOOL toggle) { invoke<Void>(0xDE3960, toggle); } // 0xED8161DA7D783683
static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0xDE3980, p0, p1); } // 0xF3603E8FF037B294
static void CLEAR_GPS_FLAGS() { invoke<Void>(0xDE39B0); } // 0xB8A4D35AE2F0B024
static void SET_RACE_TRACK_RENDER(BOOL toggle) { invoke<Void>(0xDE39D0, toggle); } // 0xF91F060344D298A3
static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0xDE39F0); } // 0x3792000AF2959DA0
static void START_GPS_CUSTOM_ROUTE(int hudColor, BOOL displayOnFoot, BOOL followPlayer) { invoke<Void>(0xDE3A00, hudColor, displayOnFoot, followPlayer); } // 0xCCF5B38438599377
static void ADD_POINT_TO_GPS_CUSTOM_ROUTE(float x, float y, float z) { invoke<Void>(0xDE3A20, x, y, z); } // 0x1F3227D731DA86BA
static void SET_GPS_CUSTOM_ROUTE_RENDER(BOOL toggle, int radarThickness, int mapThickness) { invoke<Void>(0xDE3A80, toggle, radarThickness, mapThickness); } // 0x6850C7B3D44B92DA
static void CLEAR_GPS_CUSTOM_ROUTE() { invoke<Void>(0xDE3AA0); } // 0x3C42C704473E4986
static void START_GPS_MULTI_ROUTE(int hudColor, BOOL routeFromPlayer, BOOL displayOnFoot) { invoke<Void>(0xDE3AC0, hudColor, routeFromPlayer, displayOnFoot); } // 0x71D40AB8CFA59157
static void ADD_POINT_TO_GPS_MULTI_ROUTE(float x, float y, float z) { invoke<Void>(0xDE3AE0, x, y, z); } // 0xAD5E8940E3832571
static void SET_GPS_MULTI_ROUTE_RENDER(BOOL toggle) { invoke<Void>(0xDE3B40, toggle); } // 0x0F20DD0DCEB2959F
static void CLEAR_GPS_MULTI_ROUTE() { invoke<Void>(0xDE3B60); } // 0xC3C7C9791CD79114
static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0xDE3B70); } // 0x5026A520BB4620A7
static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xDE3B90, toggle); } // 0xF138B49165C78B6E
static void SET_PLAYER_ICON_COLOUR(int color) { invoke<Void>(0xDE3BB0, color); } // 0x4D66E2ACA1273DC7
static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0xDE3BC0); } // 0x2716F9D3A99349AB
static void FLASH_MINIMAP_DISPLAY_WITH_COLOR(int hudColorIndex) { invoke<Void>(0xDE3BD0, hudColorIndex); } // 0x7F8D9D14BCF34424
static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0xDE3BE0, toggle); } // 0x541F544DCB68FDF2
static void SET_MINIMAP_IN_SPECTATOR_MODE(BOOL toggle, Ped ped) { invoke<Void>(0xDE3C00, toggle, ped); } // 0x4BDB60141FD6E156
static void SET_MISSION_NAME(BOOL p0, const char* name) { invoke<Void>(0xDE3C70, p0, name); } // 0xB51A8DA1DD0D2E4E
static void SET_MISSION_NAME_FOR_UGC_MISSION(BOOL p0, const char* name) { invoke<Void>(0xDE3C90, p0, name); } // 0x9A2CEA4E7EBB6D0C
static void SET_DESCRIPTION_FOR_UGC_MISSION_EIGHT_STRINGS(BOOL p0, const char* p1, const char* p2, const char* p3, const char* p4, const char* p5, const char* p6, const char* p7, const char* p8) { invoke<Void>(0xDE3D00, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xB8D32DDBA1727607
static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL toggle) { invoke<Void>(0xDE3D50, toggle); } // 0x006887B244C43D52
static void SET_MINIMAP_IN_PROLOGUE(BOOL toggle) { invoke<Void>(0xDE3D70, toggle); } // 0x57C73569CFE559CC
static void SET_MINIMAP_HIDE_FOW(BOOL toggle) { invoke<Void>(0xDE3DA0, toggle); } // 0x84DE06FB962FF36D
static float GET_MINIMAP_FOW_DISCOVERY_RATIO() { return invoke<float>(0xDE3DC0); } // 0x6FF69BB93DBFAF25
static BOOL GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(float x, float y, float z) { return invoke<BOOL>(0xDE3DE0, x, y, z); } // 0x9A761B33F5EF75C5
static void SET_MINIMAP_FOW_DO_NOT_UPDATE(BOOL p0) { invoke<Void>(0xDE3E50, p0); } // 0x7FCEE9F97020FFFD
static void SET_MINIMAP_FOW_REVEAL_COORDINATE(float x, float y, float z) { invoke<Void>(0xDE3E70, x, y, z); } // 0x6515FC329EEDD53D
static void SET_MINIMAP_GOLF_COURSE(int hole) { invoke<Void>(0xDE3EC0, hole); } // 0x6E467B341F61426A
static void SET_MINIMAP_GOLF_COURSE_OFF() { invoke<Void>(0xDE3ED0); } // 0x5C2232D1A391966B
static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xDE3EE0, angle); } // 0xCD1B743BDEC39145
static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0xDE3F00); } // 0xF3E3EA936C653F22
static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0xDE3F10, x, y); } // 0x43F4B7E163A31644
static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0xDE3F30); } // 0x33311EBA9464741D
static void SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(float altitude, BOOL p1, Any p2) { invoke<Void>(0xDE3F50, altitude, p1, p2); } // 0x4A12B9AB7A7BA5C0
static void SET_HEALTH_HUD_DISPLAY_VALUES(int health, int capacity, BOOL wasAdded) { invoke<Void>(0xDE3F80, health, capacity, wasAdded); } // 0x8128CB4AD398D07B
static void SET_MAX_HEALTH_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xDE3FA0, maximumValue); } // 0x69EA52C44C3F78D9
static void SET_MAX_ARMOUR_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xDE3FB0, maximumValue); } // 0xEA2F24FFC9F29EDD
static void SET_BIGMAP_ACTIVE(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xDE3FC0, toggleBigMap, showFullMap); } // 0xC2F71CC2AB70CFB1
static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xDE3FE0, id); } // 0x7B035E8A1D320F1B
static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xDE4030, id); } // 0xFF455647AC47F397
static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE4070, id); } // 0xD10838CEA97E4725
static void SHOW_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE4090, id); } // 0x06DF266B26D6C535
static BOOL IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(int id) { return invoke<BOOL>(0xDE40B0, id); } // 0xDBDF2670A7C650DF
static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE40F0, id); } // 0x4EB223432F8FA0A0
static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE4150, id); } // 0x0EE2019295C31BBA
static void HIDE_STREET_AND_CAR_NAMES_THIS_FRAME() { invoke<Void>(0xDE4170); } // 0x0E9AAB792753A7A5
static void RESET_RETICULE_VALUES() { invoke<Void>(0xDE4180); } // 0x8EBF255F4F3F68B5
static void RESET_HUD_COMPONENT_VALUES(int id) { invoke<Void>(0xDE4190, id); } // 0xDCFF86AAD108A201
static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { invoke<Void>(0xDE41B0, id, x, y); } // 0x36A472841BBC9D4A
static Vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<Vector3>(0xDE4210, id); } // 0x93FAFC10F21C7ACA
static void CLEAR_REMINDER_MESSAGE() { invoke<Void>(0xDE42D0); } // 0xF64D9910FB38427C
static int GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<int>(0xDE42E0, worldX, worldY, worldZ, screenX, screenY); } // 0xA495FBDECD4BE208
static void OPEN_REPORTUGC_MENU() { invoke<Void>(0xDE4380); } // 0x3D88441D252699DF
static void FORCE_CLOSE_REPORTUGC_MENU() { invoke<Void>(0xDE43B0); } // 0x335E0BA469D39899
static BOOL IS_REPORTUGC_MENU_OPEN() { return invoke<BOOL>(0xDE43D0); } // 0xF69CA4DDEF6E2A55
static BOOL IS_FLOATING_HELP_TEXT_ON_SCREEN(int hudIndex) { return invoke<BOOL>(0xDE4440, hudIndex); } // 0x00A2121FCB70A45B
static void SET_FLOATING_HELP_TEXT_SCREEN_POSITION(int hudIndex, float x, float y) { invoke<Void>(0xDE44B0, hudIndex, x, y); } // 0xA0FE5620B9E43942
static void SET_FLOATING_HELP_TEXT_WORLD_POSITION(int hudIndex, float x, float y, float z) { invoke<Void>(0xDE4510, hudIndex, x, y, z); } // 0xF2095B7705BD9724
static void SET_FLOATING_HELP_TEXT_TO_ENTITY(int hudIndex, Entity entity, float offsetX, float offsetY) { invoke<Void>(0xDE4570, hudIndex, entity, offsetX, offsetY); } // 0xC8E9EF71F45A1675
static void SET_FLOATING_HELP_TEXT_STYLE(int hudIndex, int p1, int p2, int p3, int p4, int p5) { invoke<Void>(0xDE4610, hudIndex, p1, p2, p3, p4, p5); } // 0x02E651988A21FA54
static void CLEAR_FLOATING_HELP(int hudIndex, BOOL p1) { invoke<Void>(0xDE4630, hudIndex, p1); } // 0x665A7E873A6664BC
static void CREATE_MP_GAMER_TAG_WITH_CREW_COLOR(Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag, int r, int g, int b) { invoke<Void>(0xDE4650, player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag, r, g, b); } // 0xBC529C919C370B10
static BOOL IS_MP_GAMER_TAG_MOVIE_ACTIVE() { return invoke<BOOL>(0xDE4730); } // 0x0ED8AE340A9B5CF5
static int CREATE_FAKE_MP_GAMER_TAG(Ped ped, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag) { return invoke<int>(0xDE4760, ped, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); } // 0x2E4ECC451E3A3AD9
static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<Void>(0xDE4890, gamerTagId); } // 0xA18D0B8D61E559A0
static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<BOOL>(0xDE48B0, gamerTagId); } // 0x2B627A77B9FC284E
static BOOL IS_MP_GAMER_TAG_FREE(int gamerTagId) { return invoke<BOOL>(0xDE48E0, gamerTagId); } // 0x7EF5C276218594E5
static void SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int component, BOOL toggle, Any p3) { invoke<Void>(0xDE4910, gamerTagId, component, toggle, p3); } // 0x7BD00A82CE7156C1
static void SET_ALL_MP_GAMER_TAGS_VISIBILITY(int gamerTagId, BOOL toggle) { invoke<Void>(0xDE4950, gamerTagId, toggle); } // 0xB38A588ED5C50BBD
static void SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0xDE4980, gamerTagId, toggle); } // 0x4E71BD4E0B8022F5
static void SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0xDE49B0, gamerTagId, toggle); } // 0x9AADBEC7664AF43A
static void SET_MP_GAMER_TAGS_POINT_HEALTH(int gamerTagId, int value, int maximumValue) { invoke<Void>(0xDE49E0, gamerTagId, value, maximumValue); } // 0x3BB39BA279D65666
static void SET_MP_GAMER_TAG_COLOUR(int gamerTagId, int component, int hudColorIndex) { invoke<Void>(0xDE4A10, gamerTagId, component, hudColorIndex); } // 0xFEF57A04955B7213
static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(int gamerTagId, int hudColorIndex) { invoke<Void>(0xDE4A40, gamerTagId, hudColorIndex); } // 0x46B70532CC643751
static void SET_MP_GAMER_TAG_ALPHA(int gamerTagId, int component, int alpha) { invoke<Void>(0xDE4A70, gamerTagId, component, alpha); } // 0x4B82F311A9427C3F
static void SET_MP_GAMER_TAG_WANTED_LEVEL(int gamerTagId, int wantedlvl) { invoke<Void>(0xDE4AA0, gamerTagId, wantedlvl); } // 0x9544C7327A08C661
static void SET_MP_GAMER_TAG_NUM_PACKAGES(int gamerTagId, int p1) { invoke<Void>(0xDE4AD0, gamerTagId, p1); } // 0x54BD99D8318FB02A
static void SET_MP_GAMER_TAG_NAME(int gamerTagId, const char* string) { invoke<Void>(0xDE4B00, gamerTagId, string); } // 0xABDAD35D3277104D
static BOOL IS_UPDATING_MP_GAMER_TAG_NAME_AND_CREW_DETAILS(int gamerTagId) { return invoke<BOOL>(0xDE4B30, gamerTagId); } // 0xFF7D32FE4F34D7DD
static void SET_MP_GAMER_TAG_BIG_TEXT(int gamerTagId, const char* string) { invoke<Void>(0xDE4B70, gamerTagId, string); } // 0xB418E0AF8C61B56D
static int GET_CURRENT_WEBPAGE_ID() { return invoke<int>(0xDE4BA0); } // 0x00216940DBDC6A74
static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xDE4BB0); } // 0x118B88D02A49C812
static int GET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { return invoke<int>(0xDE4BC0, flagIndex); } // 0x9E7C5ECC7DC530D0
static void RESET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { invoke<Void>(0xDE4BF0, flagIndex); } // 0x2DD8C72847DFACDF
static BOOL IS_WARNING_MESSAGE_READY_FOR_CONTROL() { return invoke<BOOL>(0xDE4C10); } // 0xFE2A21CD2B0A3547
static void SET_WARNING_MESSAGE(const char* titleMsg, int flags, const char* promptMsg, BOOL p3, int p4, const char* p5, const char* p6, BOOL showBackground, int errorCode) { invoke<Void>(0xDE4C60, titleMsg, flags, promptMsg, p3, p4, p5, p6, showBackground, errorCode); } // 0x7B1776B3B53F8D74
static void SET_WARNING_MESSAGE_WITH_HEADER(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any* showBackground, Any* p7, BOOL p8, Any p9) { invoke<Void>(0xDE4D80, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, showBackground, p7, p8, p9); } // 0xDC38CC1E35B6A5D7
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any additionalIntInfo, const char* additionalTextInfoLine1, const char* additionalTextInfoLine2, BOOL showBackground, int errorCode) { invoke<Void>(0xDE4DF0, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, additionalIntInfo, additionalTextInfoLine1, additionalTextInfoLine2, showBackground, errorCode); } // 0x701919482C74B5AB
static void SET_WARNING_MESSAGE_WITH_HEADER_EXTENDED(const char* entryHeader, const char* entryLine1, int flags, const char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL showBg, Any p9, Any p10) { invoke<Void>(0xDE4E60, entryHeader, entryLine1, flags, entryLine2, p4, p5, p6, p7, showBg, p9, p10); } // 0x38B55259C2E078ED
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS_EXTENDED(const char* labelTitle, const char* labelMessage, int p2, int p3, const char* labelMessage2, BOOL p5, int p6, int p7, const char* p8, const char* p9, BOOL background, int errorCode) { invoke<Void>(0xDE4ED0, labelTitle, labelMessage, p2, p3, labelMessage2, p5, p6, p7, p8, p9, background, errorCode); } // 0x15803FEC3B9A872B
static Hash GET_WARNING_SCREEN_MESSAGE_HASH() { return invoke<Hash>(0xDE4F50); } // 0xDA185E42FEAAF76B
static BOOL SET_WARNING_MESSAGE_OPTION_ITEMS(int index, const char* name, int cash, int rp, int lvl, int colour) { return invoke<BOOL>(0xDE4F70, index, name, cash, rp, lvl, colour); } // 0x0C5A80A9E096D529
static BOOL SET_WARNING_MESSAGE_OPTION_HIGHLIGHT(Any p0) { return invoke<BOOL>(0xDE4FB0, p0); } // 0x3E13E4D6100E6A83
static void REMOVE_WARNING_MESSAGE_OPTION_ITEMS() { invoke<Void>(0xDE4FE0); } // 0x9716F9F525C4A03C
static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xDE4FF0); } // 0xB11671B812399BA2
static void CLEAR_DYNAMIC_PAUSE_MENU_ERROR_MESSAGE() { invoke<Void>(0xDE5030); } // 0x8606422BE9CB6EFC
static void CUSTOM_MINIMAP_SET_ACTIVE(BOOL toggle) { invoke<Void>(0xDE5050, toggle); } // 0xACFD9F78275919B3
static void CUSTOM_MINIMAP_SET_BLIP_OBJECT(int spriteId) { invoke<Void>(0xDE5070, spriteId); } // 0xBC6E3BF0E1E57442
static int CUSTOM_MINIMAP_CREATE_BLIP(float x, float y, float z) { return invoke<int>(0xDE5080, x, y, z); } // 0xCD644A03314C3DF9
static void CUSTOM_MINIMAP_CLEAR_BLIPS() { invoke<Void>(0xDE50F0); } // 0x4F44B8341D970185
static BOOL FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke<BOOL>(0xDE5100); } // 0xF45E267C70ACE01A
static Blip GET_NORTH_BLID_INDEX() { return invoke<Blip>(0xDE5110); } // 0x8999FC36EFA332BC
static void DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(BOOL toggle) { invoke<Void>(0xDE5120, toggle); } // 0x0C0BAEDD9DE7567B
static void DRAW_FRONTEND_BACKGROUND_THIS_FRAME() { invoke<Void>(0xDE5140); } // 0xD3F7CB7571AD8BEB
static void DRAW_HUD_OVER_FADE_THIS_FRAME() { invoke<Void>(0xDE5150); } // 0x91A048F886524873
static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL togglePause, int component) { invoke<Void>(0xDE5160, menuhash, togglePause, component); } // 0xBDBC487A0347C2C1
static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0xDE51B0, menuHash, p1); } // 0x1E80216570AFBFC3
static Hash GET_CURRENT_FRONTEND_MENU_VERSION() { return invoke<Hash>(0xDE51F0); } // 0x470CC97DB37CB63B
static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0xDE5220, toggle); } // 0x915FA95E87D33FF5
static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xDE5240); } // 0x6C978B200DAA54DE
static void SUPPRESS_FRONTEND_RENDERING_THIS_FRAME() { invoke<Void>(0xDE5250); } // 0xE58D20B611F7836C
static void ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xDE5260); } // 0x2AF77E50375C922F
static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0xDE5270, active); } // 0x7946F7681E9E1D79
static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xDE5290); } // 0x4D9174D8796EA622
static BOOL IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN() { return invoke<BOOL>(0xDE52C0); } // 0x4CEC1EF3DCEEDD1C
static int GET_PAUSE_MENU_STATE() { return invoke<int>(0xDE52D0); } // 0x05AA183DA1344935
static Vector3 GET_PAUSE_MENU_POSITION() { return invoke<Vector3>(0xDE52F0); } // 0xE7DCCB6BBE933741
static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xDE5370); } // 0xD3F2DA22950AB7F6
static void FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(const char* p0) { invoke<Void>(0xDE5390, p0); } // 0xB1A3B2B046340845
static void PAUSE_MENUCEPTION_GO_DEEPER(int page) { invoke<Void>(0xDE53A0, page); } // 0xB749E51D216834D8
static void PAUSE_MENUCEPTION_THE_KICK() { invoke<Void>(0xDE53B0); } // 0x4CB2BC42A53598BA
static void PAUSE_TOGGLE_FULLSCREEN_MAP(Any p0) { invoke<Void>(0xDE53C0, p0); } // 0x437E61CD71AF1EBA
static void PAUSE_MENU_ACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xDE53E0, contextHash); } // 0x9BC444D671469DCD
static void PAUSE_MENU_DEACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xDE5420, contextHash); } // 0xB4CD52D6B8305BD4
static BOOL PAUSE_MENU_IS_CONTEXT_ACTIVE(Hash contextHash) { return invoke<BOOL>(0xDE5460, contextHash); } // 0xBFF989187F281795
static BOOL PAUSE_MENU_IS_CONTEXT_MENU_ACTIVE() { return invoke<BOOL>(0xDE54B0); } // 0xDD222CF39CF79FE4
static int PAUSE_MENU_GET_HAIR_COLOUR_INDEX() { return invoke<int>(0xDE5530); } // 0xE5E00092E71FB6A1
static int PAUSE_MENU_GET_MOUSE_HOVER_INDEX() { return invoke<int>(0xDE5550); } // 0xF937D4DCF9CC1CF7
static int PAUSE_MENU_GET_MOUSE_HOVER_UNIQUE_ID() { return invoke<int>(0xDE5570); } // 0x4E537871D44AC56E
static BOOL PAUSE_MENU_GET_MOUSE_CLICK_EVENT(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xDE5590, p0, p1, p2); } // 0x7BB49823B96323C4
static void PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(int p0) { invoke<Void>(0xDE55A0, p0); } // 0x3F85C0CA5FE1527D
static void PAUSE_MENU_SET_BUSY_SPINNER(BOOL p0, int position, int spinnerIndex) { invoke<Void>(0xDE55B0, p0, position, spinnerIndex); } // 0x8307BFA58BB45ED9
static void PAUSE_MENU_SET_WARN_ON_TAB_CHANGE(BOOL p0) { invoke<Void>(0xDE55F0, p0); } // 0x2FDCBFEEE3E1CA38
static BOOL IS_FRONTEND_READY_FOR_CONTROL() { return invoke<BOOL>(0xDE5610); } // 0x1CF551BF1611A6F6
static void TAKE_CONTROL_OF_FRONTEND() { invoke<Void>(0xDE5650); } // 0x26CE50366B7C2760
static void RELEASE_CONTROL_OF_FRONTEND() { invoke<Void>(0xDE5660); } // 0x9A6119E875538DA1
static BOOL CODE_WANTS_SCRIPT_TO_TAKE_CONTROL() { return invoke<BOOL>(0xDE5670); } // 0xB91865281BB9451B
static int GET_SCREEN_CODE_WANTS_SCRIPT_TO_CONTROL() { return invoke<int>(0xDE5690); } // 0x2EE7F7571D5CF4C1
static BOOL IS_NAVIGATING_MENU_CONTENT() { return invoke<BOOL>(0xDE56B0); } // 0xBFF5E63E718E2059
static BOOL HAS_MENU_TRIGGER_EVENT_OCCURRED() { return invoke<BOOL>(0xDE56C0); } // 0x6462E92135CA5CC1
static BOOL HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED() { return invoke<BOOL>(0xDE56D0); } // 0x0A5BC2689B1DF62B
static void SET_SAVEGAME_LIST_UNIQUE_ID(Any p0) { invoke<Void>(0xDE56E0, p0); } // 0xD86E372FF627C3B2
static void GET_MENU_TRIGGER_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xDE56F0, lastItemMenuId, selectedItemUniqueId); } // 0xB6249BA74349F6AB
static void GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xDE5720, lastItemMenuId, selectedItemMenuId, selectedItemUniqueId); } // 0xE869B507D3624306
static BOOL GET_PM_PLAYER_CREW_COLOR(int* r, int* g, int* b) { return invoke<BOOL>(0xDE5770, r, g, b); } // 0x5412721BB04590F1
static BOOL GET_MENU_PED_INT_STAT(Any p0, Any* p1) { return invoke<BOOL>(0xDE57F0, p0, p1); } // 0x074484B0C0972EF8
static BOOL GET_CHARACTER_MENU_PED_INT_STAT(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xDE5820, p0, p1, p2); } // 0x97A3FD175F8D720C
static BOOL GET_MENU_PED_MASKED_INT_STAT(Hash statHash, int* outValue, int mask, BOOL p3) { return invoke<BOOL>(0xDE5850, statHash, outValue, mask, p3); } // 0x77B8D5FD0CF3258F
static BOOL GET_CHARACTER_MENU_PED_MASKED_INT_STAT(Hash statHash, Any* outValue, int p2, int mask, BOOL p4) { return invoke<BOOL>(0xDE58F0, statHash, outValue, p2, mask, p4); } // 0x2D43CD41AC3330E1
static BOOL GET_MENU_PED_FLOAT_STAT(Hash statHash, float* outValue) { return invoke<BOOL>(0xDE5990, statHash, outValue); } // 0xE1A5C172B921BBD6
static BOOL GET_CHARACTER_MENU_PED_FLOAT_STAT(float statHash, float* outValue, BOOL p2) { return invoke<BOOL>(0xDE59C0, statHash, outValue, p2); } // 0xA3DF89A2303DA964
static BOOL GET_MENU_PED_BOOL_STAT(Hash statHash, BOOL* outValue) { return invoke<BOOL>(0xDE59F0, statHash, outValue); } // 0xE72DC686E764EE0F
static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0xDE5A20); } // 0x86CB46F43269108A
static void GIVE_PED_TO_PAUSE_MENU(Ped ped, int p1) { invoke<Void>(0xDE5A60, ped, p1); } // 0x1D16BFDD94C0AE8F
static void SET_PAUSE_MENU_PED_LIGHTING(BOOL state) { invoke<Void>(0xDE5A70, state); } // 0xA6B472383DA6AE23
static void SET_PAUSE_MENU_PED_SLEEP_STATE(BOOL state) { invoke<Void>(0xDE5AD0, state); } // 0xE98A31D3C1927ED6
static void OPEN_ONLINE_POLICIES_MENU() { invoke<Void>(0xDE5B20); } // 0xCC1642C4C1CE902A
static BOOL ARE_ONLINE_POLICIES_UP_TO_DATE() { return invoke<BOOL>(0xDE5B70); } // 0xDD3EE6E5E154DB78
static BOOL IS_ONLINE_POLICIES_MENU_ACTIVE() { return invoke<BOOL>(0xDE5B90); } // 0xEBBFE40DB22B29D2
static void OPEN_SOCIAL_CLUB_MENU() { invoke<Void>(0xDE5BA0); } // 0x20D7E34C22DC60AC
static void CLOSE_SOCIAL_CLUB_MENU() { invoke<Void>(0xDE5BE0); } // 0x694DFE6467A01AAB
static void SET_SOCIAL_CLUB_TOUR(const char* name) { invoke<Void>(0xDE5C00, name); } // 0xDA24B54CF6C0E8B8
static BOOL IS_SOCIAL_CLUB_ACTIVE() { return invoke<BOOL>(0xDE5C30); } // 0x39E7796CCE4DC681
static void SET_TEXT_INPUT_BOX_ENABLED(BOOL p0) { invoke<Void>(0xDE5C40, p0); } // 0x19F42FEE708FB281
static void FORCE_CLOSE_TEXT_INPUT_BOX() { invoke<Void>(0xDE5C50); } // 0x11FFB143F448979C
static void SET_ALLOW_COMMA_ON_TEXT_INPUT(Any p0) { invoke<Void>(0xDE5C60, p0); } // 0x283E9A39F4EE4D14
static void OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(Hash gxtEntryHash) { invoke<Void>(0xDE5C70, gxtEntryHash); } // 0xA9CB5BD48046EF42
static BOOL IS_MP_TEXT_CHAT_TYPING() { return invoke<BOOL>(0xDE5C80); } // 0xF8EFC60132F8109F
static void CLOSE_MP_TEXT_CHAT() { invoke<Void>(0xDE5C90); } // 0x0BD166E025AF0A14
static void MP_TEXT_CHAT_IS_TEAM_JOB(Any p0) { invoke<Void>(0xDE5CA0, p0); } // 0x5C381D09C558ACD0
static void OVERRIDE_MP_TEXT_CHAT_COLOR(int p0, int hudColor) { invoke<Void>(0xDE5CB0, p0, hudColor); } // 0x7F29E8664304CDA7
static void MP_TEXT_CHAT_DISABLE(BOOL toggle) { invoke<Void>(0xDE5CC0, toggle); } // 0xF111804437599169
static void FLAG_PLAYER_CONTEXT_IN_TOURNAMENT(BOOL toggle) { invoke<Void>(0xDE5CD0, toggle); } // 0x622323CECEB8593D
static void SET_PED_HAS_AI_BLIP(Ped ped, BOOL hasCone) { invoke<Void>(0xDE5CF0, ped, hasCone); } // 0x2BF2F8E20C19583C
static void SET_PED_HAS_AI_BLIP_WITH_COLOUR(Ped ped, BOOL hasCone, int color) { invoke<Void>(0xDE5D30, ped, hasCone, color); } // 0xF42995E2FC0559E0
static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0xDE5D70, ped); } // 0xA23AABF378361F85
static void SET_PED_AI_BLIP_GANG_ID(Ped ped, int gangId) { invoke<Void>(0xDE5DA0, ped, gangId); } // 0x8B185FD7C0308117
static void SET_PED_AI_BLIP_HAS_CONE(Ped ped, BOOL toggle) { invoke<Void>(0xDE5DB0, ped, toggle); } // 0x2A253D5DC7CA1CEC
static void SET_PED_AI_BLIP_FORCED_ON(Ped ped, BOOL toggle) { invoke<Void>(0xDE5DD0, ped, toggle); } // 0xB070F32F5FE88A2A
static void SET_PED_AI_BLIP_NOTICE_RANGE(Ped ped, float range) { invoke<Void>(0xDE5DF0, ped, range); } // 0x9FFBD1A17AAE3E0D
static void SET_PED_AI_BLIP_SPRITE(Ped ped, int spriteId) { invoke<Void>(0xDE5E00, ped, spriteId); } // 0x12022943BDF6F088
static Blip GET_AI_PED_PED_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xDE5E10, ped); } // 0xA95E5FB2D27EECF2
static Blip GET_AI_PED_VEHICLE_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xDE5E30, ped); } // 0x294B0261C20A78E0
static BOOL HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE() { return invoke<BOOL>(0xDE5E50); } // 0x97246390EF16DFC3
static void SET_DIRECTOR_MODE_LAUNCHED_BY_SCRIPT() { invoke<Void>(0xDE5E60); } // 0x1DC460B8E8F5A142
static void SET_PLAYER_IS_IN_DIRECTOR_MODE(BOOL toggle) { invoke<Void>(0xDE5E70, toggle); } // 0x8BF557F9256B2A6E
static void SET_DIRECTOR_MODE_AVAILABLE(BOOL toggle) { invoke<Void>(0xDE5E90, toggle); } // 0x38236280C567C045
static void HIDE_HUDMARKERS_THIS_FRAME() { invoke<Void>(0xDE5EB0); } // 0x7D2CDF366EDD8ADD
static float GET_INTERIOR_HEADING(Interior interior) { return invoke<float>(0xDE8060, interior); } // 0xB70C73407E942734
static void GET_INTERIOR_LOCATION_AND_NAMEHASH(Interior interior, Vector3* position, Hash* nameHash) { invoke<Void>(0xDE80B0, interior, position, nameHash); } // 0x97A631B5F81A6197
static int GET_INTERIOR_GROUP_ID(Interior interior) { return invoke<int>(0xDE8190, interior); } // 0x1F6CFCD52206CDB0
static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z) { return invoke<Vector3>(0xDE81E0, interior, x, y, z); } // 0xB849529ACBFB3D85
static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0xDE82C0); } // 0x4B7DCB210992A9F7
static BOOL IS_VALID_INTERIOR(Interior interior) { return invoke<BOOL>(0xDE82D0, interior); } // 0xF8A8852F99E201DD
static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0xDE82F0, entity); } // 0x1ACA339FBE1A59EA
static void FORCE_ROOM_FOR_ENTITY(Entity entity, Interior interior, Hash roomHashKey) { invoke<Void>(0xDE8380, entity, interior, roomHashKey); } // 0x10D289FA72A25777
static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xDE83A0, entity); } // 0xAB74A6FE5E16479E
static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0xDE83C0, entity); } // 0xC69E0125145BB58A
static Interior GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<Interior>(0xDE8450, entity); } // 0xF8F35890F43ED2AE
static void RETAIN_ENTITY_IN_INTERIOR(Entity entity, Interior interior) { invoke<Void>(0xDE8470, entity, interior); } // 0xD29996371F9BD0FD
static void CLEAR_INTERIOR_STATE_OF_ENTITY(Entity entity) { invoke<Void>(0xDE84E0, entity); } // 0xDE69E5D63A1F57E0
static void FORCE_ACTIVATING_TRACKING_ON_ENTITY(Any p0, Any p1) { invoke<Void>(0xDE8530, p0, p1); } // 0x6E562EEC4008A0C5
static void FORCE_ROOM_FOR_GAME_VIEWPORT(int interiorID, Hash roomHashKey) { invoke<Void>(0xDE8590, interiorID, roomHashKey); } // 0xA88C91AADCB02A8A
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(const char* roomName) { invoke<Void>(0xDE85A0, roomName); } // 0xDC750660004ECB83
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(Hash roomHashKey) { invoke<Void>(0xDE85B0, roomHashKey); } // 0x2EFEB897BDD17B5B
static Hash GET_ROOM_KEY_FOR_GAME_VIEWPORT() { return invoke<Hash>(0xDE86E0); } // 0xA491B07310DC58BE
static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { invoke<Void>(0xDE8740); } // 0xCC3ADBA41991FF4E
static Interior GET_INTERIOR_FROM_PRIMARY_VIEW() { return invoke<Interior>(0xDE87F0); } // 0x92EA98681B1610F2
static Interior GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Interior>(0xDE8830, x, y, z); } // 0x0E171121A3A25363
static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, const char* roomName) { invoke<Void>(0xDE88A0, pickup, roomName); } // 0x57303BAC3E5DA035
static void PIN_INTERIOR_IN_MEMORY(Interior interior) { invoke<Void>(0xDE88F0, interior); } // 0x74C1590CC91B3930
static void UNPIN_INTERIOR(Interior interior) { invoke<Void>(0xDE8960, interior); } // 0xBBB6D0F765409642
static BOOL IS_INTERIOR_READY(Interior interior) { return invoke<BOOL>(0xDE89A0, interior); } // 0xD0B0D1BD29678350
static BOOL SET_INTERIOR_IN_USE(Interior interior) { return invoke<BOOL>(0xDE8A00, interior); } // 0x75E4D52830820775
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) { return invoke<Interior>(0xDE8A50, x, y, z, interiorType); } // 0x0556019E7EE8EC9A
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(float x, float y, float z, Hash typeHash) { return invoke<Interior>(0xDE8AF0, x, y, z, typeHash); } // 0x98915B4A834CE874
static void ACTIVATE_INTERIOR_GROUPS_USING_CAMERA() { invoke<Void>(0xDE8B60); } // 0x87B6357C65356CB1
static BOOL IS_COLLISION_MARKED_OUTSIDE(float x, float y, float z) { return invoke<BOOL>(0xDE8B70, x, y, z); } // 0x7830326EF9D54DBB
static Interior GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<Interior>(0xDE8C00, x, y, z); } // 0x91398220755C14BF
static void ENABLE_STADIUM_PROBES_THIS_FRAME(BOOL toggle) { invoke<Void>(0xDE8CB0, toggle); } // 0xBC9CDE5AE8D32EF2
static void ACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xDE8CE0, interior, entitySetName); } // 0x907994FF361E5295
static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xDE8D70, interior, entitySetName); } // 0x62BCE536D41AC07D
static BOOL IS_INTERIOR_ENTITY_SET_ACTIVE(Interior interior, const char* entitySetName) { return invoke<BOOL>(0xDE8E00, interior, entitySetName); } // 0x9491D4E34E4389CD
static void SET_INTERIOR_ENTITY_SET_TINT_INDEX(Interior interior, const char* entitySetName, int color) { invoke<Void>(0xDE8EB0, interior, entitySetName, color); } // 0x0A047107933868D4
static void REFRESH_INTERIOR(Interior interior) { invoke<Void>(0xDE8F50, interior); } // 0xEEC112F70F9E6543
static void ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xDE8FC0, mapObjectHash); } // 0xCBC55350FF75F537
static void ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xDE8FF0, mapObjectHash); } // 0x8B8D24263DAB0736
static void DISABLE_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xDE9020, interior, toggle); } // 0xD3EBDA853981B983
static BOOL IS_INTERIOR_DISABLED(Interior interior) { return invoke<BOOL>(0xDE90C0, interior); } // 0xE849FB3A0C73A0D9
static void CAP_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xDE9110, interior, toggle); } // 0xA5C49FC956688050
static BOOL IS_INTERIOR_CAPPED(Interior interior) { return invoke<BOOL>(0xDE91B0, interior); } // 0x79D5985D0CE1880C
static void DISABLE_METRO_SYSTEM(BOOL toggle) { invoke<Void>(0xDE9200, toggle); } // 0x01C8E9BB989C1EEE
static void SET_IS_EXTERIOR_ONLY(Entity entity, BOOL toggle) { invoke<Void>(0xDE9220, entity, toggle); } // 0x9AC70C40670AC02D
static ScrHandle CREATE_ITEMSET(BOOL p0) { return invoke<ScrHandle>(0xDE9630, p0); } // 0x5F6AD54378A3995E
static void DESTROY_ITEMSET(ScrHandle itemset) { invoke<Void>(0xDE96B0, itemset); } // 0x2BDB03D2AA09D565
static BOOL IS_ITEMSET_VALID(ScrHandle itemset) { return invoke<BOOL>(0xDE96F0, itemset); } // 0x3A05653FFCBAFB55
static BOOL ADD_TO_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xDE9730, item, itemset); } // 0x28458D567A56CEFC
static void REMOVE_FROM_ITEMSET(ScrHandle item, ScrHandle itemset) { invoke<Void>(0xDE97A0, item, itemset); } // 0xF7F5C49BCD99E28D
static int GET_ITEMSET_SIZE(ScrHandle itemset) { return invoke<int>(0xDE9800, itemset); } // 0xED06F75C0AB45AAA
static ScrHandle GET_INDEXED_ITEM_IN_ITEMSET(int index, ScrHandle itemset) { return invoke<ScrHandle>(0xDE9850, index, itemset); } // 0xC7CE1F723246133A
static BOOL IS_IN_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xDE98B0, item, itemset); } // 0xD0EC006D02DA188E
static void CLEAN_ITEMSET(ScrHandle itemset) { invoke<Void>(0xDE9920, itemset); } // 0x6C123E50989D9F3C
static BOOL LOBBY_AUTO_MULTIPLAYER_MENU() { return invoke<BOOL>(0xDE9BB0); } // 0x8EE7901EEE84F67E
static BOOL LOBBY_AUTO_MULTIPLAYER_FREEMODE() { return invoke<BOOL>(0xDE9BC0); } // 0xA7D416B098808337
static void LOBBY_SET_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xDE9C00, toggle); } // 0xD0DC425AC19B966E
static BOOL LOBBY_AUTO_MULTIPLAYER_EVENT() { return invoke<BOOL>(0xDE9C20); } // 0x7B661ACC29FA795E
static void LOBBY_SET_AUTO_MULTIPLAYER_EVENT(BOOL toggle) { invoke<Void>(0xDE9C40, toggle); } // 0x7F2A9FAB60E93DB0
static BOOL LOBBY_AUTO_MULTIPLAYER_RANDOM_JOB() { return invoke<BOOL>(0xDE9C60); } // 0xE90EEDCA654B46A9
static void LOBBY_SET_AUTO_MP_RANDOM_JOB(BOOL toggle) { invoke<Void>(0xDE9C80, toggle); } // 0x8191C51F9DD9189D
static void SHUTDOWN_SESSION_CLEARS_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xDE9CA0, toggle); } // 0x994B0E18137346ED
static int LOCALIZATION_GET_SYSTEM_LANGUAGE() { return invoke<int>(0xDE9DD0); } // 0x148785E497902C88
static int GET_CURRENT_LANGUAGE() { return invoke<int>(0xDE9E00); } // 0x8608526719A575EE
static int LOCALIZATION_GET_SYSTEM_DATE_TYPE() { return invoke<int>(0xDE9E30); } // 0xD676FB5DAC59FB72
static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0xDF5740); } // 0x6F4C4DF60C52867E
static int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize) { return invoke<int>(0xDF5770, stackSize); } // 0x546238515F929872
static void SET_RANDOM_SEED(int seed) { invoke<Void>(0xDF5790, seed); } // 0x3B9F35917EDE3ACB
static void SET_TIME_SCALE(float timeScale) { invoke<Void>(0xDF57C0, timeScale); } // 0xE6AC149D1121535D
static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0xDF5800, toggle); } // 0x925970A93719CADE
static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0xDF5850); } // 0x3D2EB53CF281A77E
static void SET_RANDOM_EVENT_FLAG(BOOL toggle) { invoke<Void>(0xDF5870, toggle); } // 0x7EA65A7D5C6CBDB5
static BOOL GET_RANDOM_EVENT_FLAG() { return invoke<BOOL>(0xDF58D0); } // 0x9FA91AA1AC724CD0
static const char* GET_CONTENT_TO_LOAD() { return invoke<const char*>(0xDF58E0); } // 0x3DF0567938549C05
static void ACTIVITY_FEED_CREATE(const char* p0, const char* p1) { invoke<Void>(0xDF5970, p0, p1); } // 0x1C18D23E19C76212
static void ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xDF5980, p0); } // 0x0E68815680F90E0E
static void ACTIVITY_FEED_ADD_LITERAL_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xDF5990, p0); } // 0x7199DFD024AA24F3
static void ACTIVITY_FEED_ADD_INT_TO_CAPTION(Any p0) { invoke<Void>(0xDF59A0, p0); } // 0x1C49F79FA808A72C
static void ACTIVITY_FEED_LARGE_IMAGE_URL(const char* p0) { invoke<Void>(0xDF59C0, p0); } // 0x6304FE01A952A1ED
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(const char* p0, const char* p1) { invoke<Void>(0xDF59E0, p0, p1); } // 0x1ECA72F56ADCE605
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(const char* p0) { invoke<Void>(0xDF59F0, p0); } // 0x1BB362CAE190AD06
static void ACTIVITY_FEED_POST() { invoke<Void>(0xDF5A10); } // 0x3A4500FC2B94720A
static void ACTIVITY_FEED_ONLINE_PLAYED_WITH_POST(const char* p0) { invoke<Void>(0xDF5A30, p0); } // 0x41DBD10907A5CF18
static BOOL HAS_RESUMED_FROM_SUSPEND() { return invoke<BOOL>(0xDF5A40); } // 0x801039B3B8E28F8D
static void SET_SCRIPT_HIGH_PRIO(BOOL toggle) { invoke<Void>(0xDF5A70, toggle); } // 0x21EA3DC8C16770EF
static void SET_THIS_IS_A_TRIGGER_SCRIPT(BOOL toggle) { invoke<Void>(0xDF5AA0, toggle); } // 0x2918C30E34ED2C88
static void INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(const char* p0) { invoke<Void>(0xDF5AD0, p0); } // 0x1F1A910C8AD5C453
static BOOL GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0xDF5AE0, p0, p1, p2, p3); } // 0xC557C842E425A746
static Hash GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xDF5B80); } // 0xED2E53B1A3927830
static Hash GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xDF5BA0); } // 0x60B554F782F2E6A6
static BOOL IS_PREV_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xDF5BC0, weatherType); } // 0x4DC8DC4C28B3BADA
static BOOL IS_NEXT_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xDF5C10, weatherType); } // 0x79C890C56ADBF83B
static void SET_WEATHER_TYPE_PERSIST(const char* weatherType) { invoke<Void>(0xDF5C60, weatherType); } // 0xFD5A87843250F1B3
static void SET_WEATHER_TYPE_NOW_PERSIST(const char* weatherType) { invoke<Void>(0xDF5CB0, weatherType); } // 0xE38A58649E049502
static void SET_WEATHER_TYPE_NOW(const char* weatherType) { invoke<Void>(0xDF5D00, weatherType); } // 0xF286E683D1E1F101
static void SET_WEATHER_TYPE_OVERTIME_PERSIST(const char* weatherType, float time) { invoke<Void>(0xDF5D50, weatherType, time); } // 0xE0F4EA3A654155A3
static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0xDF5DA0); } // 0x9E392E2DB654EE0A
static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0xDF5DC0); } // 0xA21EFB60FCA3D0F6
static void CLEAR_WEATHER_TYPE_NOW_PERSIST_NETWORK(int milliseconds) { invoke<Void>(0xDF5DD0, milliseconds); } // 0x4EAA4126FEE56C40
static void GET_CURR_WEATHER_STATE(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { invoke<Void>(0xDF5E00, weatherType1, weatherType2, percentWeather2); } // 0x239D73A1DE006629
static void SET_CURR_WEATHER_STATE(Hash weatherType1, Hash weatherType2, float percentWeather2) { invoke<Void>(0xDF5E50, weatherType1, weatherType2, percentWeather2); } // 0x2D213D9B5D0FE42B
static void SET_OVERRIDE_WEATHER(const char* weatherType) { invoke<Void>(0xDF5EE0, weatherType); } // 0x88791F880F624022
static void SET_OVERRIDE_WEATHEREX(const char* weatherType, BOOL p1) { invoke<Void>(0xDF5F30, weatherType, p1); } // 0x43BE2F49C708E7B4
static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0xDF5F80); } // 0x58A3B74F26D2B532
static void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xDF5F90, amplitude); } // 0x2D6868095BD2DF64
static void WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xDF5FB0, minAmplitude); } // 0xB39B9674B1E9D097
static void WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xDF5FD0, maxAmplitude); } // 0x5D2587098D2C9CEF
static void WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xDF5FF0, minAmplitude); } // 0xA3F61E8395582E30
static void WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xDF6010, amplitude); } // 0xE8B5A1B75D8BF700
static void WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xDF6030, minAmplitude); } // 0x2CA1243CF0209F78
static void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xDF6050, maxAmplitude); } // 0x1FAABAECFD9A7C83
static void WATER_OVERRIDE_SET_RIPPLEBUMPINESS(float bumpiness) { invoke<Void>(0xDF6070, bumpiness); } // 0x716752DE8ABA2F76
static void WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(float minBumpiness) { invoke<Void>(0xDF6090, minBumpiness); } // 0x3C7E67D89C37CDBA
static void WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(float maxBumpiness) { invoke<Void>(0xDF60B0, maxBumpiness); } // 0x18DEB87CBCBB1C35
static void WATER_OVERRIDE_SET_RIPPLEDISTURB(float disturb) { invoke<Void>(0xDF60D0, disturb); } // 0xAC4F34F6299E2289
static void WATER_OVERRIDE_SET_STRENGTH(float strength) { invoke<Void>(0xDF60F0, strength); } // 0x92425F5F9A2DC557
static void WATER_OVERRIDE_FADE_IN(float p0) { invoke<Void>(0xDF6110, p0); } // 0x2E7312742ADECB25
static void WATER_OVERRIDE_FADE_OUT(float p0) { invoke<Void>(0xDF6130, p0); } // 0xC425B6AC7F4443A0
static void SET_WIND(float speed) { invoke<Void>(0xDF6150, speed); } // 0x65D8EA648927792B
static void SET_WIND_SPEED(float speed) { invoke<Void>(0xDF6170, speed); } // 0xF9CA39E1CCB8EA1D
static float GET_WIND_SPEED() { return invoke<float>(0xDF61A0); } // 0xDD9996B22AD9179C
static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0xDF61C0, direction); } // 0x0A9D04B4275939F5
static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0xDF61E0); } // 0xF12BE04302B5836E
static void SET_RAIN(float intensity) { invoke<Void>(0xDF6250, intensity); } // 0x3AC92E39007E1D09
static float GET_RAIN_LEVEL() { return invoke<float>(0xDF6270); } // 0x12BE8EA03391694B
static void SET_SNOW(float level) { invoke<Void>(0xDF6290, level); } // 0x312CA455A59783FA
static float GET_SNOW_LEVEL() { return invoke<float>(0xDF62B0); } // 0xB68ECCFF52582B84
static void FORCE_LIGHTNING_FLASH() { invoke<Void>(0xDF62D0); } // 0xD4BCC7D6BFB4EF0F
static void SET_CLOUD_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xDF62E0, p0); } // 0x6D47423391C7C131
static void PRELOAD_CLOUD_HAT(const char* name) { invoke<Void>(0xDF6330, name); } // 0xC540300DE977409D
static void LOAD_CLOUD_HAT(const char* name, float transitionTime) { invoke<Void>(0xDF6350, name, transitionTime); } // 0xEE3C332799057645
static void UNLOAD_CLOUD_HAT(const char* name, float p1) { invoke<Void>(0xDF6370, name, p1); } // 0xE6FCB8178DFE489F
static void UNLOAD_ALL_CLOUD_HATS() { invoke<Void>(0xDF6390); } // 0xB7C3B23648284A54
static void SET_CLOUDS_ALPHA(float opacity) { invoke<Void>(0xDF63A0, opacity); } // 0xC05F48B1C4FD8BC9
static float GET_CLOUDS_ALPHA() { return invoke<float>(0xDF63C0); } // 0xB5B278F6D1EBCD53
static int GET_GAME_TIMER() { return invoke<int>(0xDF63E0); } // 0x1DD05E817C89C737
static float GET_FRAME_TIME() { return invoke<float>(0xDF63F0); } // 0x0B852B0BF94A8DC1
static float GET_SYSTEM_TIME_STEP() { return invoke<float>(0xDF6410); } // 0xEC235469207D1121
static int GET_FRAME_COUNT() { return invoke<int>(0xDF6430); } // 0x8034325BF6D6E41F
static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0xDF6440, startRange, endRange); } // 0xD2AA6F822D3A55D2
static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xDF64A0, startRange, endRange); } // 0xC5935DFB3F39785A
static int GET_RANDOM_MWC_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xDF64F0, startRange, endRange); } // 0x4AFA59A11CC00538
static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL ignoreWater, BOOL p5) { return invoke<BOOL>(0xDF65A0, x, y, z, groundZ, ignoreWater, p5); } // 0xB1EAADCB692D69CE
static BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float x, float y, float z, float* groundZ, Vector3* normal) { return invoke<BOOL>(0xDF65E0, x, y, z, groundZ, normal); } // 0x1C23EBEE3AABD4C7
static BOOL GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL p4, BOOL p5) { return invoke<BOOL>(0xDF66E0, x, y, z, groundZ, p4, p5); } // 0x81AB70B3FE98F1DF
static float ASIN(float p0) { return invoke<float>(0xDF6720, p0); } // 0x1670C66FA901C0D8
static float ACOS(float p0) { return invoke<float>(0xDF6770, p0); } // 0x42CDD13001C98400
static float TAN(float p0) { return invoke<float>(0xDF67C0, p0); } // 0xD1AA84345B760931
static float ATAN(float p0) { return invoke<float>(0xDF67F0, p0); } // 0x21CDF75488EFB98B
static float ATAN2(float p0, float p1) { return invoke<float>(0xDF6830, p0, p1); } // 0x4964D7A2BFD2F9A3
static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0xDF6870, x1, y1, z1, x2, y2, z2, useZ); } // 0xED977E2AE2CB16EE
static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0xDF68D0, x1, y1, x2, y2); } // 0x20A3B1C2EC4167BB
static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0xDF6990, dx, dy); } // 0x97BC40FFA2FFCCD2
static float GET_RATIO_OF_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<float>(0xDF6A10, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); } // 0xA2DD309FA5FD1435
static Vector3 GET_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<Vector3>(0xDF6B30, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); } // 0xC14F2F615169363F
static BOOL GET_LINE_PLANE_INTERSECTION(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12) { return invoke<BOOL>(0xDF6C80, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x148F60DDDBC323FD
static BOOL GET_POINT_AREA_OVERLAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<BOOL>(0xDF6D60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0x298E7BBD04F29848
static void SET_BIT(int* address, int offset) { invoke<Void>(0xDF6DA0, address, offset); } // 0x0B0C9A0F9AAEB7F0
static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0xDF6DC0, address, offset); } // 0x8744D2E3FC95740E
static Hash GET_HASH_KEY(const char* string) { return invoke<Hash>(0xDF6DE0, string); } // 0x70E57E9927B6BA58
static void SLERP_NEAR_QUATERNION(float t, float x, float y, float z, float w, float x1, float y1, float z1, float w1, float* outX, float* outY, float* outZ, float* outW) { invoke<Void>(0xDF6E10, t, x, y, z, w, x1, y1, z1, w1, outX, outY, outZ, outW); } // 0x4D16ECAA05186DFE
static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xDF6E70, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xEBC91D4C68FF5260
static BOOL IS_AREA_OCCUPIED_SLOW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<BOOL>(0xDF7050, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x7405FEB2AD8926AC
static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL checkVehicles, BOOL checkPeds, BOOL p7, BOOL p8, Entity ignoreEntity, BOOL p10) { return invoke<BOOL>(0xDF7230, x, y, z, range, p4, checkVehicles, checkPeds, p7, p8, ignoreEntity, p10); } // 0x5A3D7606D599F99A
static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xDF72B0, p0, p1, p2, p3, p4, p5, p6); } // 0xD7813C7A74CA9AF9
static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { invoke<Void>(0xDF7450, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); } // 0x2094BC4B6731BA68
static void CLEAR_AREA_LEAVE_VEHICLE_HEALTH(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xDF7490, x, y, z, radius, p4, p5, p6, p7); } // 0x4FEBA5060BFD5111
static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, Any p10) { invoke<Void>(0xDF74D0, x, y, z, radius, p4, p5, p6, p7, p8, p9, p10); } // 0x60040CDD28AA1BC3
static void CLEAR_ANGLED_AREA_OF_VEHICLES(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0xDF7550, x1, y1, z1, x2, y2, z2, width, p7, p8, p9, p10, p11, p12, p13); } // 0x6F3435F85C932A08
static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7630, x, y, z, radius, flags); } // 0xBAAB54D57B40765E
static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7650, x, y, z, radius, flags); } // 0x55F7AC4B2B875901
static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7670, x, y, z, radius, flags); } // 0x8B0110C1F1D9D177
static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7690, x, y, z, radius, flags); } // 0xEC73DFE5CE55E19C
static void CLEAR_SCENARIO_SPAWN_HISTORY() { invoke<Void>(0xDF76B0); } // 0xE0443EB1DC8A2F79
static void SET_SAVE_MENU_ACTIVE(BOOL ignoreVehicle) { invoke<Void>(0xDF76C0, ignoreVehicle); } // 0x20D668730B14B5F4
static int GET_STATUS_OF_MANUAL_SAVE() { return invoke<int>(0xDF77A0); } // 0xDEBBFB8E738665F4
static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0xDF77B0, toggle); } // 0x810E39899814611D
static void SET_CREDITS_FADE_OUT_WITH_SCREEN(BOOL toggle) { invoke<Void>(0xDF77D0, toggle); } // 0x9969A63702BCDEFE
static BOOL HAVE_CREDITS_REACHED_END() { return invoke<BOOL>(0xDF77F0); } // 0xDCD722759F93678D
static BOOL ARE_CREDITS_RUNNING() { return invoke<BOOL>(0xDF7800); } // 0x45E146165ACF587E
static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* scriptName) { invoke<Void>(0xDF7810, scriptName); } // 0xD13237BC328B938E
static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0xDF7850); } // 0x51CC1333A10C4E09
static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0xDF7870, x, y, z, p3, p4); } // 0x69A4491104E14366
static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0xDF79D0, hospitalIndex, toggle); } // 0x281BDB37010064F5
static int ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<int>(0xDF79F0, p0, p1, p2, p3, p4); } // 0xDFA763BBB6D72603
static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0xDF7B50, policeIndex, toggle); } // 0xD9256F7FF1791115
static void SET_RESTART_COORD_OVERRIDE(float x, float y, float z, float heading) { invoke<Void>(0xDF7B70, x, y, z, heading); } // 0x0B8F3F7DA0F3F93F
static void CLEAR_RESTART_COORD_OVERRIDE() { invoke<Void>(0xDF7C90); } // 0x51F06E07524AD20D
static void PAUSE_DEATH_ARREST_RESTART(BOOL toggle) { invoke<Void>(0xDF7CA0, toggle); } // 0xD43B9D1692F5C06E
static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0xDF7CC0, toggle); } // 0x72B1E2693AC30407
static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0xDF7CE0, toggle); } // 0x31E8D1058586E006
static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0xDF7D00, toggle); } // 0x332262819D51DF61
static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0xDF7D20, toggle); } // 0x40AC02FA167D4D0A
static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0xDF7D40, toggle); } // 0xC83C5315C571C2FE
static int REGISTER_SAVE_HOUSE(float x, float y, float z, float p3, const char* p4, Any p5, Any p6) { return invoke<int>(0xDF7D60, x, y, z, p3, p4, p5, p6); } // 0x869634E57B4F3343
static void SET_SAVE_HOUSE(int savehouseHandle, BOOL p1, BOOL p2) { invoke<Void>(0xDF7DE0, savehouseHandle, p1, p2); } // 0xC372A80C7719DF28
static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0xDF7E00, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x4C6A124A4C49BC22
static BOOL GET_SAVE_HOUSE_DETAILS_AFTER_SUCCESSFUL_LOAD(Vector3* p0, float* p1, BOOL* fadeInAfterLoad, BOOL* p3) { return invoke<BOOL>(0xDF7EE0, p0, p1, fadeInAfterLoad, p3); } // 0xD1CA4C3A111D9BBF
static void DO_AUTO_SAVE() { invoke<Void>(0xDF7FB0); } // 0xE3BCCCA3244EDF82
static BOOL GET_IS_AUTO_SAVE_OFF() { return invoke<BOOL>(0xDF8030); } // 0xB0B88048B5914A7A
static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0xDF8050); } // 0x46150A5112561134
static BOOL HAS_CODE_REQUESTED_AUTOSAVE() { return invoke<BOOL>(0xDF8080); } // 0x9F4AE9BED29CAFA0
static void CLEAR_CODE_REQUESTED_AUTOSAVE() { invoke<Void>(0xDF8090); } // 0xF7F21AEA9B22B838
static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0xDF80A0, p0, p1); } // 0x2133FE32510D05F7
static void ADD_REPLAY_STAT_VALUE(Any value) { invoke<Void>(0xDF80C0, value); } // 0x9012CD429E55212A
static void END_REPLAY_STATS() { invoke<Void>(0xDF80E0); } // 0xCA08FA2F9FE43B29
static BOOL HAVE_REPLAY_STATS_BEEN_STORED() { return invoke<BOOL>(0xDF80F0); } // 0x90168A0DE18A7F1A
static int GET_REPLAY_STAT_MISSION_ID() { return invoke<int>(0xDF8100); } // 0x81D4D874CB1DFBE4
static int GET_REPLAY_STAT_MISSION_TYPE() { return invoke<int>(0xDF8110); } // 0x16C990F0AEBBC7A3
static int GET_REPLAY_STAT_COUNT() { return invoke<int>(0xDF8120); } // 0x536257A79D7C865A
static int GET_REPLAY_STAT_AT_INDEX(int index) { return invoke<int>(0xDF8150, index); } // 0x8BDAC9E7F4C1D9E5
static void CLEAR_REPLAY_STATS() { invoke<Void>(0xDF8180); } // 0x4BB54FF089A08B44
static BOOL QUEUE_MISSION_REPEAT_LOAD() { return invoke<BOOL>(0xDF8190); } // 0x46A69DE38863D8FD
static BOOL QUEUE_MISSION_REPEAT_SAVE() { return invoke<BOOL>(0xDF81B0); } // 0x9F57DA3897B26EAE
static BOOL QUEUE_MISSION_REPEAT_SAVE_FOR_BENCHMARK_TEST() { return invoke<BOOL>(0xDF81D0); } // 0x080152C0ECDC471B
static int GET_STATUS_OF_MISSION_REPEAT_SAVE() { return invoke<int>(0xDF8200); } // 0x7DE5CD18CC7CF0A6
static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0xDF8220); } // 0x8B27A086F4268F56
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0xDF8240, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); } // 0xA934E5D7EEE03C7E
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, Any p14) { invoke<Void>(0xDF82E0, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14); } // 0x2D8982A81816E618
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, Entity targetEntity, BOOL p17, Any p18, Any p19, Any p20) { invoke<Void>(0xDF8380, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, targetEntity, p17, p18, p19, p20); } // 0x5733B7E88AFB2E3B
static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0xDF8480, modelHash, minimum, maximum); } // 0xC93BAF616F1C680F
static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0xDF8500, fakeWantedLevel); } // 0x50FB8785AFA2D59C
static int GET_FAKE_WANTED_LEVEL() { return invoke<int>(0xDF85A0); } // 0x3C273019E2F3471D
static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0xDF85B0, toggle); } // 0xCC1EDB9BCC914639
static void ALLOW_MISSION_CREATOR_WARP(BOOL toggle) { invoke<Void>(0xDF85E0, toggle); } // 0x8D57FA5F8F95730F
static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0xDF8630, toggle); } // 0x58B5B800DED763EE
static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0xDF8650); } // 0x94A7730DEC6E86C8
static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0xDF8670); } // 0x204E68849C425DF0
static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0xDF86B0); } // 0x1156728DBCB1F3B2
static BOOL SHOULD_USE_METRIC_MEASUREMENTS() { return invoke<BOOL>(0xDF86C0); } // 0x4721B5E26C8861C8
static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xDF86E0, profileSetting); } // 0x38640D2193CB547F
static BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0xDF8710, string1, string2); } // 0x1B79E937E91F40C3
static int COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0xDF8750, str1, str2, matchCase, maxLength); } // 0xDCE96FB47C1D0314
static int ABSI(int value) { return invoke<int>(0xDF87A0, value); } // 0x510D0699BE9C6D06
static float ABSF(float value) { return invoke<float>(0xDF87C0, value); } // 0x1D5CD3EAAA7422B0
static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xDF87F0, x1, y1, z1, x2, y2, z2); } // 0xD83D7629BFD65725
static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF88B0, x1, y1, z1, x2, y2, z2, ownedByPlayer); } // 0xE94C7FA27FEB00DD
static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF89B0, x1, y1, z1, x2, y2, z2, type, ownedByPlayer); } // 0x7A082DC02E5E00C1
static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8A10, x1, y1, z1, x2, y2, z2, width, p7, ownedByPlayer); } // 0x9F8FB43463B75A3D
static BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float x, float y, float z, Hash projectileHash, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8A70, x, y, z, projectileHash, radius, ownedByPlayer); } // 0x8EC0BB480F11446F
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Hash projectileHash, Vector3* projectilePos, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8AB0, x1, y1, z1, x2, y2, z2, projectileHash, projectilePos, ownedByPlayer); } // 0x8C538F7B2B233B2C
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_ANGLED_AREA(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float distanceOfOppositeFace, Hash weaponType, Vector3* positionOut, BOOL bIsPlayer) { return invoke<BOOL>(0xDF8B40, vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, distanceOfOppositeFace, weaponType, positionOut, bIsPlayer); } // 0x17D830B00DB4A9DC
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, BOOL p4) { return invoke<BOOL>(0xDF8BE0, ped, weaponHash, distance, outCoords, p4); } // 0xED2558D599937EFD
static BOOL GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, Object* outProjectile, BOOL p5) { return invoke<BOOL>(0xDF8C90, ped, weaponHash, distance, outCoords, outProjectile, p5); } // 0xF67924A428A734EC
static BOOL IS_BULLET_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8D40, x1, y1, z1, x2, y2, z2, width, ownedByPlayer); } // 0xF20EF02FBF173C32
static BOOL IS_BULLET_IN_AREA(float x, float y, float z, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8E00, x, y, z, radius, ownedByPlayer); } // 0x398315D0C90DE6F6
static BOOL IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8EA0, x1, y1, z1, x2, y2, z2, ownedByPlayer); } // 0x5BF86E66F9BF0BE9
static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xDF8F90, x, y, z, p3, p4, p5); } // 0xA646A9FF47E2E515
static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xDF9030, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB7C4B23CEF2B3B58
static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0xDF9120); } // 0x3B880DE16766E9C3
static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xDF9130); } // 0xFD5A25A8B9488D42
static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xDF9140); } // 0x1226C55CA7D2269A
static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0xDF9150); } // 0x0BA1A956D36B210F
static BOOL IS_PC_VERSION() { return invoke<BOOL>(0xDF9160); } // 0x761778199FE1211C
static BOOL IS_STEAM_VERSION() { return invoke<BOOL>(0xDF9170); } // 0x32BC1B96D39D2E38
static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0xDF9190); } // 0x1EF90593EF09F7FA
static BOOL IS_JAPANESE_VERSION() { return invoke<BOOL>(0xDF91A0); } // 0x74C1828126652223
static BOOL IS_XBOX_PLATFORM() { return invoke<BOOL>(0xDF91C0); } // 0xFF449C9B68734F2B
static BOOL IS_SCARLETT_VERSION() { return invoke<BOOL>(0xDF91D0); } // 0x6823557BDD18031C
static BOOL IS_SCE_PLATFORM() { return invoke<BOOL>(0xDF91E0); } // 0xC5D69BE0998EF509
static BOOL IS_PROSPERO_VERSION() { return invoke<BOOL>(0xDF91F0); } // 0x716271729B9FB8E6
static BOOL IS_STRING_NULL(const char* string) { return invoke<BOOL>(0xDF9200, string); } // 0xFF692AB7350A74D7
static BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0xDF9220, string); } // 0xD6F9DEE4765092A9
static BOOL STRING_TO_INT(const char* string, int* outInteger) { return invoke<BOOL>(0xDF9240, string, outInteger); } // 0xA2ADD4A27CA857C2
static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0xDF92E0, var, rangeStart, rangeEnd, p3); } // 0xA11116C8E2E46ED4
static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0xDF9330, var, rangeStart, rangeEnd); } // 0x8B5B2BE72A7C0CF6
static int ADD_STUNT_JUMP(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float camX, float camY, float camZ, int p15, int p16, int p17) { return invoke<int>(0xDF9370, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, camX, camY, camZ, p15, p16, p17); } // 0xC0DBC28967D7BE19
static int ADD_STUNT_JUMP_ANGLED(float x1, float y1, float z1, float x2, float y2, float z2, float radius1, float x3, float y3, float z3, float x4, float y4, float z4, float radius2, float camX, float camY, float camZ, int p17, int p18, int p19) { return invoke<int>(0xDF9450, x1, y1, z1, x2, y2, z2, radius1, x3, y3, z3, x4, y4, z4, radius2, camX, camY, camZ, p17, p18, p19); } // 0x8CD9B5E60B98207A
static void TOGGLE_SHOW_OPTIONAL_STUNT_JUMP_CAMERA(BOOL toggle) { invoke<Void>(0xDF9540, toggle); } // 0xCE366B3838FC5CC5
static void DELETE_STUNT_JUMP(int p0) { invoke<Void>(0xDF9560, p0); } // 0xDE4E7D1D52BD4533
static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xDF9580, p0); } // 0x28365F67ED751FCB
static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xDF95A0, p0); } // 0xF27998ADBDAB9049
static void SET_STUNT_JUMPS_CAN_TRIGGER(BOOL toggle) { invoke<Void>(0xDF95C0, toggle); } // 0x7F0D18D1F5BF6D0F
static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xDF95F0); } // 0xF6D8C7059C3C2495
static BOOL IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<BOOL>(0xDF9620); } // 0xB2E86D4871B30979
static int GET_NUM_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0xDF9650); } // 0x2FED6B8DCEAE8D75
static int GET_TOTAL_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0xDF9680); } // 0x356BDA6BB9847878
static void CANCEL_STUNT_JUMP() { invoke<Void>(0xDF96B0); } // 0xE751ECBA8573687A
static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0xDF96D0, toggle); } // 0x98E393364463951A
static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0xDF9700, toggle); } // 0xAECC5FA98C879D67
static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0xDF9730, toggle); } // 0x9F83BF77C7204C05
static BOOL HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash, int amount) { return invoke<BOOL>(0xDF9760, hash, amount); } // 0x1DBC8A6F227520FD
static BOOL HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash) { return invoke<BOOL>(0xDF9790, hash); } // 0x4590C086096F07D8
static void OVERRIDE_FREEZE_FLAGS(BOOL p0) { invoke<Void>(0xDF97A0, p0); } // 0x8822ABB8DFD960E5
static void SET_INSTANCE_PRIORITY_MODE(int p0) { invoke<Void>(0xDF97C0, p0); } // 0x2268617D0B5A5B35
static void SET_INSTANCE_PRIORITY_HINT(int flag) { invoke<Void>(0xDF97D0, flag); } // 0xF6ECB54A7941386F
static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0xDF97E0); } // 0x114ABA9988FF784B
static void POPULATE_NOW() { invoke<Void>(0xDF97F0); } // 0x1BBEB35757ED1961
static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xDF9800); } // 0xC5C8FC4D42BFD749
static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0xDF9830, level); } // 0x446CF90BF0024020
static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0xDF9850, p0, p1, p2); } // 0xA2CDB686AB549D8A
static void STOP_SAVE_DATA() { invoke<Void>(0xDF9890); } // 0xB6F769D890A34B99
static int GET_SIZE_OF_SAVE_DATA(BOOL p0) { return invoke<int>(0xDF98B0, p0); } // 0x7E1CF25229CF544D
static void REGISTER_INT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF98E0, p0, name); } // 0xA40FAFA53DFF4362
static void REGISTER_INT64_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9910, p0, name); } // 0x385F74AF4024D51A
static void REGISTER_ENUM_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9940, p0, name); } // 0x93C679A3AE20C964
static void REGISTER_FLOAT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9970, p0, name); } // 0x3C17D57F8A1F4336
static void REGISTER_BOOL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF99A0, p0, name); } // 0x929D7CE0F2CAD21C
static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF99D0, p0, name); } // 0x062FF4ED33C1328C
static void REGISTER_TEXT_LABEL_15_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A00, p0, name); } // 0x70972D3D43C1B5EB
static void REGISTER_TEXT_LABEL_23_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A30, p0, name); } // 0x29926EE43ABCE454
static void REGISTER_TEXT_LABEL_31_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A60, p0, name); } // 0x2CEFD365B46A1DBE
static void REGISTER_TEXT_LABEL_63_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A90, p0, name); } // 0xC05BEBBC3D252F8C
static void START_SAVE_STRUCT_WITH_SIZE(Any* p0, int size, const char* structName) { invoke<Void>(0xDF9AC0, p0, size, structName); } // 0x2714FB94E6EAC372
static void STOP_SAVE_STRUCT() { invoke<Void>(0xDF9B00); } // 0x648D295A649ED2C3
static void START_SAVE_ARRAY_WITH_SIZE(Any* p0, int size, const char* arrayName) { invoke<Void>(0xDF9B20, p0, size, arrayName); } // 0x54DF17092B1F59BA
static void STOP_SAVE_ARRAY() { invoke<Void>(0xDF9B60); } // 0x6C29B075C8530441
static void COPY_SCRIPT_STRUCT(Any* dst, Any* src, int size) { invoke<Void>(0xDF9B80, dst, src, size); } // 0xDD7F149F8BAF1260
static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { invoke<Void>(0xDF9BA0, dispatchService, toggle); } // 0xCC1C92F7E1A3CE9D
static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchService, BOOL toggle) { invoke<Void>(0xDF9BD0, dispatchService, toggle); } // 0xB3BB215FCE55E6A9
static int GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(int dispatchService) { return invoke<int>(0xDF9C00, dispatchService); } // 0x874C935832B2AE06
static BOOL CREATE_INCIDENT(int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8) { return invoke<BOOL>(0xDF9C50, dispatchService, x, y, z, numUnits, radius, outIncidentID, p7, p8); } // 0x70DA4F87B396F9F9
static BOOL CREATE_INCIDENT_WITH_ENTITY(int dispatchService, Ped ped, int numUnits, float radius, int* outIncidentID, Any p5, Any p6) { return invoke<BOOL>(0xDF9C90, dispatchService, ped, numUnits, radius, outIncidentID, p5, p6); } // 0xDD121F61016F3CE0
static void DELETE_INCIDENT(int incidentId) { invoke<Void>(0xDF9CD0, incidentId); } // 0x3D09B44C2ACEA592
static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0xDF9D10, incidentId); } // 0x5BA108AB15E668B7
static void SET_INCIDENT_REQUESTED_UNITS(int incidentId, int dispatchService, int numUnits) { invoke<Void>(0xDF9D50, incidentId, dispatchService, numUnits); } // 0x399A3B6D30C64629
static void SET_IDEAL_SPAWN_DISTANCE_FOR_INCIDENT(int incidentId, float p1) { invoke<Void>(0xDF9DC0, incidentId, p1); } // 0xBF2292E4C98122D5
static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float posX, float posY, float posZ, float fwdVecX, float fwdVecY, float fwdVecZ, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0xDF9E20, posX, posY, posZ, fwdVecX, fwdVecY, fwdVecZ, distance, spawnPoint); } // 0x604F09F8F9DA5404
static int ADD_POP_MULTIPLIER_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, float p7, BOOL p8, BOOL p9) { return invoke<int>(0xDF9ED0, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); } // 0x6991BFCE3D87261B
static BOOL DOES_POP_MULTIPLIER_AREA_EXIST(int id) { return invoke<BOOL>(0xDF9F90, id); } // 0x87EDD05291B7412C
static void REMOVE_POP_MULTIPLIER_AREA(int id, BOOL p1) { invoke<Void>(0xDF9FD0, id, p1); } // 0x78640FB2D4298B2D
static BOOL IS_POP_MULTIPLIER_AREA_NETWORKED(int id) { return invoke<BOOL>(0xDF9FF0, id); } // 0x3989D4F6D95B3DBD
static int ADD_POP_MULTIPLIER_SPHERE(float x, float y, float z, float radius, float pedMultiplier, float vehicleMultiplier, BOOL p6, BOOL p7) { return invoke<int>(0xDFA020, x, y, z, radius, pedMultiplier, vehicleMultiplier, p6, p7); } // 0xA0FA113A187BAF0D
static BOOL DOES_POP_MULTIPLIER_SPHERE_EXIST(int id) { return invoke<BOOL>(0xDFA0C0, id); } // 0xCA7C80E031F9BFD2
static void REMOVE_POP_MULTIPLIER_SPHERE(int id, BOOL p1) { invoke<Void>(0xDFA100, id, p1); } // 0x9049EEEF48D81A2F
static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xDFA120, ped, toggle, p2); } // 0x311543257CA6E66E
static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xDFA140, ped); } // 0xB5B917AAA3DF1A78
static void PLAY_TENNIS_SWING_ANIM(Ped ped, const char* animDict, const char* animName, float p3, float p4, BOOL p5) { invoke<Void>(0xDFA1C0, ped, animDict, animName, p3, p4, p5); } // 0x66D844353F51465F
static BOOL GET_TENNIS_SWING_ANIM_COMPLETE(Ped ped) { return invoke<BOOL>(0xDFA270, ped); } // 0xC9F6150424259965
static BOOL GET_TENNIS_SWING_ANIM_CAN_BE_INTERRUPTED(Ped ped) { return invoke<BOOL>(0xDFA2F0, ped); } // 0xD4DBCC67CA333F7D
static BOOL GET_TENNIS_SWING_ANIM_SWUNG(Ped ped) { return invoke<BOOL>(0xDFA370, ped); } // 0x812812F60647A0F8
static void PLAY_TENNIS_DIVE_ANIM(Ped ped, int p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xDFA3F0, ped, p1, p2, p3, p4, p5); } // 0x9A6987280C48639C
static void SET_TENNIS_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* p1, float p2) { invoke<Void>(0xDFA4A0, ped, p1, p2); } // 0xD3FF6AD07BECA69C
static void RESET_DISPATCH_SPAWN_LOCATION() { invoke<Void>(0xDFA560); } // 0xB111CFC87C576C1C
static void SET_DISPATCH_SPAWN_LOCATION(float x, float y, float z) { invoke<Void>(0xDFA580, x, y, z); } // 0xDB96C28A65D345EE
static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xDFA5C0); } // 0xD7186A4A316964F2
static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float distance) { invoke<Void>(0xDFA5E0, distance); } // 0x6625908717AE7808
static void RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0) { invoke<Void>(0xDFA620, p0); } // 0x5FBC5D27DD8DFF61
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0xDFA680, p0, p1); } // 0x986164755D8E9A93
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0xDFA690, p0, p1); } // 0x28CC6EA9A96AA5D4
static int ADD_DISPATCH_SPAWN_ANGLED_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xDFA6A0, x1, y1, z1, x2, y2, z2, width); } // 0xBE01072D0E1EE6DD
static int ADD_DISPATCH_SPAWN_SPHERE_BLOCKING_AREA(float x1, float y1, float x2, float y2) { return invoke<int>(0xDFA720, x1, y1, x2, y2); } // 0xB33FCD685BC4E12D
static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int p0) { invoke<Void>(0xDFA790, p0); } // 0x2AF25F1F08FCBEF6
static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xDFA7C0); } // 0x0FE4FED766438E0E
static void RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN() { invoke<Void>(0xDFA7E0); } // 0x3C6FB3D7478BC495
static void SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(int p0, int p1) { invoke<Void>(0xDFA800, p0, p1); } // 0x5844B0328AB76BBF
static void ADD_TACTICAL_NAV_MESH_POINT(float x, float y, float z) { invoke<Void>(0xDFA840, x, y, z); } // 0x74057F606033EB70
static void CLEAR_TACTICAL_NAV_MESH_POINTS() { invoke<Void>(0xDFA870); } // 0x81B15F40AAE95932
static void SET_RIOT_MODE_ENABLED(BOOL toggle) { invoke<Void>(0xDFA880, toggle); } // 0x44182C1D103A97D2
static void DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(int p0, const char* windowTitle, Any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength) { invoke<Void>(0xDFA8A0, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); } // 0x305739C2F5BFA5D9
static void DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoke<Void>(0xDFA910, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0xCFF30C6181F9B8BC
static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0xDFA970); } // 0x66DA7155B68E7638
static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0xDFA990); } // 0x43FB09E8020180EA
static void CANCEL_ONSCREEN_KEYBOARD() { invoke<Void>(0xDFA9C0); } // 0x541EC9E98C2783B3
static void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int p0) { invoke<Void>(0xDFA9D0, p0); } // 0x8CB5613E14D44228
static void ACTION_MANAGER_ENABLE_ACTION(Hash hash, BOOL enable) { invoke<Void>(0xDFA9E0, hash, enable); } // 0x324833E4F1D15D2D
static int GET_REAL_WORLD_TIME() { return invoke<int>(0xDFAA10); } // 0x093F26D866EFF997
static void SUPRESS_RANDOM_EVENT_THIS_FRAME(int eventType, BOOL suppress) { invoke<Void>(0xDFAA30, eventType, suppress); } // 0x06687A6579389884
static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xDFAA50, player); } // 0x35A960C1E2064D55
static void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xDFAA90, player); } // 0x6966C09904B48D54
static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0xDFAAE0, player); } // 0x7F2AA4BA999DE234
static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xDFAB20, player); } // 0x353BF8D85390AA39
static void SET_BEAST_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xDFAB50, player); } // 0xEA00B3128DDC34A5
static void SET_FORCED_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xDFAB80, player); } // 0xBD53F503C46AD430
static BOOL HAS_GAME_INSTALLED_THIS_SESSION() { return invoke<BOOL>(0xDFABB0); } // 0xF27FC86E347471F1
static void SET_TICKER_JOHNMARSTON_IS_DONE() { invoke<Void>(0xDFABC0); } // 0xB691EC20AD2A1AC2
static BOOL ARE_PROFILE_SETTINGS_VALID() { return invoke<BOOL>(0xDFAC10); } // 0x76CA59C648318506
static void PREVENT_ARREST_STATE_THIS_FRAME() { invoke<Void>(0xDFAC30); } // 0xD4930C902E5CD6B6
static void FORCE_GAME_STATE_PLAYING() { invoke<Void>(0xDFAC40); } // 0xDA91D9D96ED0EB8F
static void SCRIPT_RACE_INIT(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xDFAC70, p0, p1, p2, p3); } // 0xE971F2F7312DC1FB
static void SCRIPT_RACE_SHUTDOWN() { invoke<Void>(0xDFAC90); } // 0x33F8639DDBB019B4
static void SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(Player player, Any p1, Any p2, Any p3) { invoke<Void>(0xDFACA0, player, p1, p2, p3); } // 0x52E29231F896396E
static BOOL SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Player player, int* p1, int* p2) { return invoke<BOOL>(0xDFACC0, player, p1, p2); } // 0x53A5BC0515A038AB
static void START_END_USER_BENCHMARK() { invoke<Void>(0xDFACF0); } // 0x666ACF938032B583
static void STOP_END_USER_BENCHMARK() { invoke<Void>(0xDFAD00); } // 0x11E6F86BB2700BFB
static void RESET_END_USER_BENCHMARK() { invoke<Void>(0xDFAD10); } // 0x35E6F04FC81C5EA2
static void SAVE_END_USER_BENCHMARK() { invoke<Void>(0xDFAD20); } // 0x2070D32BEB6A3825
static BOOL UI_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xDFAD30); } // 0xB0DAD631C6A2A5EB
static BOOL LANDING_SCREEN_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xDFAD40); } // 0x0F3098F5B044D6CE
static BOOL IS_COMMANDLINE_END_USER_BENCHMARK() { return invoke<BOOL>(0xDFAD50); } // 0x3BFC5030EF1E6147
static int GET_BENCHMARK_ITERATIONS() { return invoke<int>(0xDFAD60); } // 0x588D1FA610887CFD
static int GET_BENCHMARK_PASS() { return invoke<int>(0xDFAD70); } // 0x7007C113A8466ADE
static void RESTART_GAME() { invoke<Void>(0xDFAD80); } // 0xF86F13F66FC06EDF
static void QUIT_GAME() { invoke<Void>(0xDFAD90); } // 0x1AB062C44F06F033
static BOOL HAS_ASYNC_INSTALL_FINISHED() { return invoke<BOOL>(0xDFADA0); } // 0xD7F2FC1281F868FD
static void CLEANUP_ASYNC_INSTALL() { invoke<Void>(0xDFADC0); } // 0x129E6CC3506106AC
static BOOL PLM_IS_IN_CONSTRAINED_MODE() { return invoke<BOOL>(0xDFADD0); } // 0x5318F44DB7A13F50
static int PLM_GET_CONSTRAINED_DURATION_MS() { return invoke<int>(0xDFAE00); } // 0x4DDCC681612459A6
static void SET_PLAYER_IS_IN_ANIMAL_FORM(BOOL toggle) { invoke<Void>(0xDFAE30, toggle); } // 0xA818A2A38A2A3D6D
static BOOL GET_IS_PLAYER_IN_ANIMAL_FORM() { return invoke<BOOL>(0xDFAE50); } // 0x7B42AC66804829CF
static void SET_PLAYER_IS_REPEATING_A_MISSION(BOOL toggle) { invoke<Void>(0xDFAE60, toggle); } // 0xA53470336C143CAE
static void DISABLE_SCREEN_DIMMING_THIS_FRAME() { invoke<Void>(0xDFAE80); } // 0x71673481F07D6434
static float GET_CITY_DENSITY() { return invoke<float>(0xDFAE90); } // 0xAB154BFC15F33733
static void USE_ACTIVE_CAMERA_FOR_TIMESLICING_CENTRE() { invoke<Void>(0xDFAEA0); } // 0xC4A706CAFECA1953
static void SET_CONTENT_ID_INDEX(Hash contentId, int index) { invoke<Void>(0xDFAEB0, contentId, index); } // 0xF0F077286626CEBB
static int GET_CONTENT_ID_INDEX(Hash contentId) { return invoke<int>(0xDFAF00, contentId); } // 0xEAA437DE2A801E8A
static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0xEAF040, phoneType); } // 0x531FF8BCC6FFD9E3
static void DESTROY_MOBILE_PHONE() { invoke<Void>(0xEAF050); } // 0x5F2E2CEDE90F627E
static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0xEAF080, scale); } // 0xBA290C9390813C9F
static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xEAF0A0, rotX, rotY, rotZ, p3); } // 0xA0382000AA987093
static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Vehicle p1) { invoke<Void>(0xEAF0E0, rotation, p1); } // 0x3CA646A848A5F334
static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0xEAF1D0, posX, posY, posZ); } // 0x6B7EA0158D00C600
static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0xEAF260, position); } // 0x78C4EBB0251847E2
static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0xEAF2D0, toggle); } // 0xFC75D88023832ED9
static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xEAF2F0); } // 0xE2EDC80BDB9A514F
static void SET_MOBILE_PHONE_DOF_STATE(BOOL toggle) { invoke<Void>(0xEAF300, toggle); } // 0x453DA8CFCDA69D26
static void CELL_SET_INPUT(int direction) { invoke<Void>(0xEAF320, direction); } // 0xBF3F90E670404C44
static void CELL_HORIZONTAL_MODE_TOGGLE(BOOL toggle) { invoke<Void>(0xEAF330, toggle); } // 0xF3D5C578ED6C7528
static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0xEAF350, p0, p1); } // 0xFF7028E54EB0EA84
static void CELL_CAM_ACTIVATE_SELFIE_MODE(BOOL toggle) { invoke<Void>(0xEAF370, toggle); } // 0x9764C9C63439A2D9
static void CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(BOOL toggle) { invoke<Void>(0xEAF390, toggle); } // 0x20B0BCFBA94C4732
static void CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(float p0) { invoke<Void>(0xEAF3B0, p0); } // 0xD974CD3A050559FE
static void CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(float horizontalPan) { invoke<Void>(0xEAF3C0, horizontalPan); } // 0xCF33DB366A4071FB
static void CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(float vertPan) { invoke<Void>(0xEAF3D0, vertPan); } // 0x289AEE012C9C5F5D
static void CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(float roll) { invoke<Void>(0xEAF3E0, roll); } // 0x263FA094C828FD3E
static void CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(float distanceScaling) { invoke<Void>(0xEAF3F0, distanceScaling); } // 0x6DE386DA26D363D5
static void CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(float yaw) { invoke<Void>(0xEAF400, yaw); } // 0x48BDE4C1BEB65AD4
static void CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(float roll) { invoke<Void>(0xEAF410, roll); } // 0xDEC275C3811D6AD8
static void CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(float pitch) { invoke<Void>(0xEAF420, pitch); } // 0xFA6A3ED1D3AA4BD4
static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xEAF430, entity); } // 0xA637EDD71DA667DB
static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { invoke<Void>(0xEAF460, renderId); } // 0x90D1A8814E85B166
static void NETWORK_INITIALIZE_CASH(int wallet, int bank) { invoke<Void>(0xE1D3E0, wallet, bank); } // 0x68E9DB185164504F
static void NETWORK_DELETE_CHARACTER(int characterSlot, BOOL p1, BOOL p2) { invoke<Void>(0xE1D3F0, characterSlot, p1, p2); } // 0x2147F6D06CE70F1B
static void NETWORK_MANUAL_DELETE_CHARACTER(int characterSlot) { invoke<Void>(0xE1D410, characterSlot); } // 0x017137CFD42927BA
static BOOL NETWORK_GET_PLAYER_IS_HIGH_EARNER() { return invoke<BOOL>(0xE1D4A0); } // 0xFEC8CAEC2F9A60B5
static void NETWORK_CLEAR_CHARACTER_WALLET(int characterSlot) { invoke<Void>(0xE1D4C0, characterSlot); } // 0x8DAD1FB87B248966
static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, Any* gamerHandle) { invoke<Void>(0xE1D510, amount, gamerHandle); } // 0x463EA8B3DD0A6567
static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, Any* gamerHandle) { invoke<Void>(0xE1D520, value, gamerHandle); } // 0x648740220EDDB123
static BOOL NETWORK_CAN_SHARE_JOB_CASH() { return invoke<BOOL>(0xE1D530); } // 0x411B5B7270967776
static void NETWORK_REFUND_CASH(int index, const char* context, const char* reason, BOOL p3) { invoke<Void>(0xE1D590, index, context, reason, p3); } // 0x9CBD6E7B088910A1
static void NETWORK_DEDUCT_CASH(int amount, const char* p1, const char* p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0xE1D5B0, amount, p1, p2, p3, p4, p5); } // 0x565823C8D4F7B64D
static BOOL NETWORK_MONEY_CAN_BET(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0xE1D5F0, amount, p1, p2); } // 0x098F030F49971616
static BOOL NETWORK_CAN_BET(int amount) { return invoke<BOOL>(0xE1D630, amount); } // 0xB0490531FD3DC629
static BOOL NETWORK_CASINO_CAN_BET(Hash hash) { return invoke<BOOL>(0xE1D6B0, hash); } // 0xA737C76A9908948A
static BOOL NETWORK_CASINO_CAN_BET_PVC() { return invoke<BOOL>(0xE1D6E0); } // 0xC585DDBDB453BF48
static BOOL NETWORK_CASINO_CAN_BET_AMOUNT(Any p0) { return invoke<BOOL>(0xE1D710, p0); } // 0xA27607CE04D875E6
static BOOL NETWORK_CASINO_CAN_BUY_CHIPS_PVC() { return invoke<BOOL>(0xE1D740); } // 0xDA91B00799F1223C
static BOOL NETWORK_CASINO_BUY_CHIPS(int p0, int p1) { return invoke<BOOL>(0xE1D770, p0, p1); } // 0x265D164F770DA9AB
static BOOL NETWORK_CASINO_SELL_CHIPS(int p0, int p1) { return invoke<BOOL>(0xE1D7A0, p0, p1); } // 0x273A6B01207A9FE5
static void NETWORK_DEFER_CASH_TRANSACTIONS_UNTIL_SHOP_SAVE() { invoke<Void>(0xE1D7D0); } // 0xFC6FC18CC3214743
static BOOL CAN_PAY_AMOUNT_TO_BOSS(int p0, int p1, int amount, int* p3) { return invoke<BOOL>(0xE1D7E0, p0, p1, amount, p3); } // 0x6B3C9FC090DA905D
static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0xE1D860, amount); } // 0x1D8AF8B06B2F7D3A
static void NETWORK_EARN_FROM_CASHING_OUT(int amount) { invoke<Void>(0xE1D920, amount); } // 0xD96CCBEFF9394523
static void NETWORK_EARN_FROM_GANGATTACK_PICKUP(int amount) { invoke<Void>(0xE1D9E0, amount); } // 0xEAC14C370D2B9D5C
static void NETWORK_EARN_ASSASSINATE_TARGET_KILLED(int amount) { invoke<Void>(0xE1DAA0, amount); } // 0xEEE7837FC8CEDEDF
static void NETWORK_EARN_FROM_ROB_ARMORED_CARS(int amount) { invoke<Void>(0xE1DB60, amount); } // 0xAA3D72C5CCFC8EF3
static void NETWORK_EARN_FROM_CRATE_DROP(int amount) { invoke<Void>(0xE1DC20, amount); } // 0xDB31E3DCD4EC4157
static void NETWORK_EARN_FROM_BETTING(int amount, const char* p1) { invoke<Void>(0xE1DCE0, amount, p1); } // 0xEEF9D0725B6BE1E9
static void NETWORK_EARN_FROM_JOB(int amount, const char* p1) { invoke<Void>(0xE1DCF0, amount, p1); } // 0x429D9B81D13F3456
static void NETWORK_EARN_FROM_JOBX2(int amount, const char* p1) { invoke<Void>(0xE1DD00, amount, p1); } // 0x1B850AB8481A78C9
static void NETWORK_EARN_FROM_PREMIUM_JOB(int amount, const char* p1) { invoke<Void>(0xE1DD10, amount, p1); } // 0xCFDC32D2EF467A52
static void NETWORK_EARN_FROM_BEND_JOB(int amount, const char* heistHash) { invoke<Void>(0xE1DD20, amount, heistHash); } // 0x31F0EC70888E1490
static void NETWORK_EARN_FROM_CHALLENGE_WIN(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xE1DD30, p0, p1, p2); } // 0x736F26192289EEBB
static void NETWORK_EARN_FROM_BOUNTY(int amount, Any* gamerHandle, Any* p2, Any p3) { invoke<Void>(0xE1DD50, amount, gamerHandle, p2, p3); } // 0xFED8EC9FDD58021A
static void NETWORK_EARN_FROM_IMPORT_EXPORT(int amount, Hash modelHash) { invoke<Void>(0xE1DD70, amount, modelHash); } // 0x4D10D49AEE7C9AEA
static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0xE1DD80, amount); } // 0xC972841F26BA2800
static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0xE1DE40, amount, propertyName); } // 0x817A1EC3448E9FF1
static void NETWORK_EARN_FROM_AI_TARGET_KILL(Any p0, Any p1) { invoke<Void>(0xE1DF10, p0, p1); } // 0x830CE9F43780AC92
static void NETWORK_EARN_FROM_NOT_BADSPORT(int amount) { invoke<Void>(0xE1DFD0, amount); } // 0x190378368BE7EFF3
static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xE1E090, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x0C547D1E965980C5
static void NETWORK_EARN_FROM_PERSONAL_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xE1E0E0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD374BF034B7E27F3
static void NETWORK_EARN_FROM_DAILY_OBJECTIVES(int amount, const char* type, int characterSlot) { invoke<Void>(0xE1E140, amount, type, characterSlot); } // 0xE36D9E1EDE0E76B4
static void NETWORK_EARN_FROM_AMBIENT_JOB(int p0, const char* p1, Any* p2) { invoke<Void>(0xE1E160, p0, p1, p2); } // 0x237E99388DCA3CEF
static void NETWORK_EARN_FROM_JOB_BONUS(Any p0, Any* p1, Any* p2) { invoke<Void>(0xE1E180, p0, p1, p2); } // 0xFD5431F2DAC6AD75
static void NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E1A0, p0, p1, p2); } // 0x30EE7ED666906E6A
static void NETWORK_EARN_HEIST_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E1C0, p0, p1, p2); } // 0x2AF3C8E8D2120D10
static void NETWORK_EARN_FIRST_TIME_BONUS(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E1E0, p0, p1, p2); } // 0x4247915DE1F30269
static void NETWORK_EARN_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E200, p0, p1, p2); } // 0x22A4F417AF7EDBB3
static void NETWORK_EARN_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E2D0, p0, p1, p2); } // 0x1C3E529B167B0152
static void NETWORK_EARN_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE1E3A0, p0, p1, p2, p3); } // 0xB7FF64F7F3C11C73
static void NETWORK_EARN_FROM_WAREHOUSE(int amount, int id) { invoke<Void>(0xE1E470, amount, id); } // 0xBA39DBB52E8B4335
static void NETWORK_EARN_FROM_CONTRABAND(int amount, Any p1) { invoke<Void>(0xE1E530, amount, p1); } // 0x183CC5B7D51F8C27
static void NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Any p0) { invoke<Void>(0xE1E5F0, p0); } // 0x95508E1DCDC31638
static void NETWORK_EARN_FROM_SMUGGLER_WORK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE1E6C0, p0, p1, p2, p3, p4); } // 0xB7CA0141AAE24858
static void NETWORK_EARN_FROM_HANGAR_TRADE(Any p0, Any p1) { invoke<Void>(0xE1E6E0, p0, p1); } // 0x543B2C1410A312F3
static void NETWORK_EARN_PURCHASE_CLUB_HOUSE(Any p0, Any p1) { invoke<Void>(0xE1E7B0, p0, p1); } // 0x94F7718638A3525D
static void NETWORK_EARN_FROM_BUSINESS_PRODUCT(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xE1E7C0, amount, p1, p2, p3); } // 0xF8E5B0C984357B72
static void NETWORK_EARN_FROM_VEHICLE_EXPORT(int amount, Any p1, Any p2) { invoke<Void>(0xE1E8B0, amount, p1, p2); } // 0x8692D3326B328B82
static void NETWORK_EARN_SMUGGLER_AGENCY(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xE1E990, amount, p1, p2, p3); } // 0xE1037BCF8C2FC81D
static void NETWORK_EARN_BOUNTY_HUNTER_REWARD(Any p0) { invoke<Void>(0xE1EA60, p0); } // 0xB1C4AF1EA46263A1
static void NETWORK_EARN_FROM_BUSINESS_BATTLE(Any p0) { invoke<Void>(0xE1EB20, p0); } // 0x0FB341836D41663F
static void NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Any p0, int p1) { invoke<Void>(0xE1EBE0, p0, p1); } // 0xE57ED256E47D44C1
static void NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Any p0) { invoke<Void>(0xE1ECB0, p0); } // 0x46A6A8998E3D8C20
static void NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Any p0, Any p1, Any p2) { invoke<Void>(0xE1ED70, p0, p1, p2); } // 0xADDD87AAD0952829
static void NETWORK_EARN_FROM_FMBB_BOSS_WORK(Any p0) { invoke<Void>(0xE1EE50, p0); } // 0x9C94CA5701190287
static void NETWORK_EARN_FMBB_WAGE_BONUS(Any p0) { invoke<Void>(0xE1EF10, p0); } // 0x69071D15F1FDD00C
static BOOL NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xE1EFD0, p0, p1, p2, p3, p4, p5); } // 0x0AF5E4A6C74DC312
static BOOL NETWORK_CAN_SPEND_MONEY2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5, Any p6) { return invoke<BOOL>(0xE1F060, p0, p1, p2, p3, p4, p5, p6); } // 0xF299749D63CC7167
static void NETWORK_BUY_ITEM(int amount, Hash item, Any p2, Any p3, BOOL p4, const char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0xE1F0C0, amount, item, p2, p3, p4, item_name, p6, p7, p8, p9); } // 0x231BA68A82FF0316
static void NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2, Any p3, Any p4) { invoke<Void>(0xE1F120, amount, p1, p2, p3, p4); } // 0x46B2ECD9DD5C325A
static void NETWORK_PAY_EMPLOYEE_WAGE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE1F230, p0, p1, p2); } // 0xE2A7BB72F7220C7E
static void NETWORK_PAY_MATCH_ENTRY_FEE(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0xE1F320, amount, matchId, p2, p3); } // 0x1BF8BBFBF0066C79
static void NETWORK_SPENT_BETTING(int amount, int p1, const char* matchId, BOOL p3, BOOL p4) { invoke<Void>(0xE1F350, amount, p1, matchId, p3, p4); } // 0xEFA7F7BEF6727E05
static void NETWORK_SPENT_WAGER(Any p0, Any p1, int amount) { invoke<Void>(0xE1F380, p0, p1, amount); } // 0x6409DA98EAB29EF9
static void NETWORK_SPENT_IN_STRIPCLUB(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0xE1F3A0, p0, p1, p2, p3); } // 0x5B01531ADF19BFE7
static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xE1F4A0, cost, p1, p2); } // 0x872D579FE9A001C0
static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1F590, cost, p1, p2, p3); } // 0xE712829A13AA007C
static void NETWORK_BUY_BACKUP_GANG(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0xE1F690, p0, p1, p2, p3); } // 0x71D67D692ED4A77A
static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1F7A0, cost, p1, p2, p3); } // 0x2E2FE70D24958511
static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1F8A0, p0, p1, p2, p3); } // 0xEE1CE55E7DF07D50
static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xE1F9A0, amount, victim, p2, p3, p4); } // 0x2E361871F6DBB0BB
static void NETWORK_BUY_PROPERTY(int cost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0xE1F9D0, cost, propertyName, p2, p3); } // 0xA0BB8B5F3BF0B873
static void NETWORK_BUY_SMOKES(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xE1FA00, p0, p1, p2); } // 0x3394F4E239C12E5B
static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FAF0, p0, p1, p2, p3); } // 0x5281982126ED6EB1
static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FBF0, p0, p1, p2, p3); } // 0x0B191D6DA6D08B82
static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FCF0, p0, p1, p2, p3); } // 0x510FA24010D2C6E2
static void NETWORK_SPENT_CASH_DROP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE1FDF0, amount, p1, p2); } // 0x93D264A3F6B3EC83
static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FEE0, p0, p1, p2, p3); } // 0x028DAC40D73AD61C
static void NETWORK_SPENT_ROBBED_BY_MUGGER(int amount, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FFE0, amount, p1, p2, p3); } // 0x47E7DCF167AAD291
static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE200E0, p0, p1, p2, p3); } // 0x3805A7764BBF4986
static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xE201E0, p0, p1, p2, p3, p4); } // 0xA8C662E16DC4030E
static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20210, p0, p1, p2, p3); } // 0x390F7605EEFF27DD
static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20310, p0, p1, p2, p3); } // 0x38B36DE4A0DD8551
static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xE20410, p0, p1, p2, p3, p4); } // 0xB18702619A0C0E6E
static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE20520, p0, p1, p2, p3); } // 0x2896F1C9B1221336
static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20620, p0, p1, p2); } // 0xE7F56AD8A71AC4E6
static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20710, p0, p1, p2); } // 0x770EB7A756AEBF26
static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20800, p0, p1, p2, p3); } // 0x3DFB797B5A3B9923
static void NETWORK_SPENT_BANK_INTEREST(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20900, p0, p1, p2); } // 0x91F514ABD264DE39
static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE209F0, p0, p1, p2); } // 0x8D54F66F66BE0AA4
static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20AE0, p0, p1, p2); } // 0x5ED8FA0BD19D1554
static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, Hash vehicleModel, Any* gamerHandle, BOOL notBankrupt, BOOL hasTheMoney) { invoke<Void>(0xE20BD0, amount, vehicleModel, gamerHandle, notBankrupt, hasTheMoney); } // 0xC093604219A86052
static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xE20C00, p0, p1, p2, p3); } // 0x3C433641FBE9B092
static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20C30, p0, p1, p2); } // 0x2A073933B945C84D
static void NETWORK_SPENT_FROM_ROCKSTAR(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20D20, p0, p1, p2); } // 0xE3BE7893C3C3EC1D
static int NETWORK_SPEND_EARNED_FROM_BANK_AND_WALLETS(int amount) { return invoke<int>(0xE20E10, amount); } // 0xD97AF335F8ACDB0F
static const char* PROCESS_CASH_GIFT(int* p0, int* p1, const char* p2) { return invoke<const char*>(0xE20E20, p0, p1, p2); } // 0x75C19185BEAE4AA9
static void NETWORK_SPENT_MOVE_SUBMARINE(Any p0, Any p1, Any p2) { invoke<Void>(0xE20E50, p0, p1, p2); } // 0xFCCEE4DF574659D5
static void NETWORK_SPENT_PLAYER_HEALTHCARE(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0xE20F40, p0, p1, p2, p3); } // 0x034CF401503972D8
static void NETWORK_SPENT_NO_COPS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20F70, p0, p1, p2, p3); } // 0x5457AC60E3138BFF
static void NETWORK_SPENT_CARGO_SOURCING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE21070, p0, p1, p2, p3, p4, p5); } // 0x17723C8F38B28C26
static void NETWORK_SPENT_REQUEST_JOB(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE211A0, p0, p1, p2, p3); } // 0x473E72253CC49698
static void NETWORK_SPENT_REQUEST_HEIST(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE212A0, p0, p1, p2, p3); } // 0xBB8D17D4C5954DAD
static void NETWORK_BUY_FAIRGROUND_RIDE(int amount, Any p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xE213A0, amount, p1, p2, p3, p4); } // 0xD8F9465B2186C59F
static BOOL NETWORK_ECONOMY_HAS_FIXED_CRAZY_NUMBERS() { return invoke<BOOL>(0xE214B0); } // 0xF0E83DAB719BAF47
static void NETWORK_SPENT_JOB_SKIP(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0xE214D0, amount, matchId, p2, p3); } // 0xE6BD97EF8B376DAC
static BOOL NETWORK_SPENT_BOSS_GOON(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0xE21500, amount, p1, p2); } // 0xEDD28D3FAFE98806
static void NETWORK_SPEND_GOON(int p0, int p1, int amount) { invoke<Void>(0xE21540, p0, p1, amount); } // 0x7E8D3E1CB76D4269
static void NETWORK_SPEND_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0xE21560, p0, p1, p2); } // 0x773A6B5BEC33A424
static void NETWORK_SPENT_MOVE_YACHT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE21580, amount, p1, p2); } // 0x5ACC4ABDE69D38D4
static void NETWORK_SPENT_RENAME_ORGANIZATION(Any p0, Any p1, Any p2) { invoke<Void>(0xE21670, p0, p1, p2); } // 0x1DC31E2CC59D9BB2
static void NETWORK_BUY_CONTRABAND_MISSION(int p0, int p1, Hash p2, BOOL p3, BOOL p4) { invoke<Void>(0xE216A0, p0, p1, p2, p3, p4); } // 0xCD042AEDCC67E05D
static void NETWORK_SPENT_PA_SERVICE_HELI(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE216D0, p0, p1, p2, p3); } // 0x4F12D7F9E2049590
static void NETWORK_SPENT_PA_SERVICE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21700, p0, p1, p2, p3); } // 0xEC25575B0C446336
static void NETWORK_SPENT_PA_SERVICE_SNACK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21730, p0, p1, p2, p3); } // 0x4A920AB6D0B69785
static void NETWORK_SPENT_PA_SERVICE_DANCER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21760, p0, p1, p2, p3); } // 0xEC8A7DFF32FD54B9
static void NETWORK_SPENT_PA_SERVICE_IMPOUND(Any p0, Any p1, Any p2) { invoke<Void>(0xE21790, p0, p1, p2); } // 0x6C12EC99A95B5DAB
static void NETWORK_SPENT_PA_HELI_PICKUP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE217B0, p0, p1, p2, p3); } // 0xD4C7A8B7798F8D76
static void NETWORK_SPENT_PURCHASE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE217E0, p0, p1, p2, p3); } // 0xE56907D742FBB98E
static void NETWORK_SPENT_UPGRADE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21810, p0, p1, p2, p3); } // 0xF703ED783A4823FC
static void NETWORK_SPENT_PURCHASE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21850, p0, p1, p2, p3); } // 0x81817FDF3227FB55
static void NETWORK_SPENT_UPGRADE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21890, p0, p1, p2, p3); } // 0xD387AD5F69E5AED7
static void NETWORK_SPENT_PURCHASE_IMPEXP_WAREHOUSE_PROPERTY(int amount, Any* data, BOOL p2, BOOL p3) { invoke<Void>(0xE218D0, amount, data, p2, p3); } // 0x47CF1A8941FAF477
static void NETWORK_SPENT_UPGRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21910, p0, p1, p2, p3); } // 0xC190A01717631220
static void NETWORK_SPENT_TRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21950, p0, p1, p2, p3); } // 0x997FC0391BB433D7
static void NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21980, p0, p1, p2, p3); } // 0xAC68FC3E6CBCE6FC
static void NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21A80, p0, p1, p2, p3); } // 0x4EF4490FC3B90AD2
static void NETWORK_SPENT_JUKEBOX(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21B80, p0, p1, p2, p3); } // 0x4EFA5A2F877A4580
static void NETWORK_SPENT_PURCHASE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21C80, p0, p1, p2, p3); } // 0x487238BD4D444146
static void NETWORK_SPENT_UPGRADE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21CB0, p0, p1, p2, p3); } // 0xB69E368585E687CB
static void NETWORK_SPENT_PURCHASE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21CE0, p0, p1, p2, p3); } // 0x7C551A8AD8F364D6
static void NETWORK_SPENT_UPGRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21D10, p0, p1, p2, p3); } // 0x96861731FED0B20F
static void NETWORK_SPENT_TRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21D40, p0, p1, p2, p3); } // 0x6B149894691C7CC8
static void NETWORK_SPENT_MC_ABILITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE21D70, p0, p1, p2, p3, p4); } // 0xD0D235D716CBBF3A
static void NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21E80, p0, p1, p2, p3); } // 0x2AED47655EBD41F9
static void NETWORK_SPENT_CHANGE_APPEARANCE(Any p0, Any p1, Any p2) { invoke<Void>(0xE21EA0, p0, p1, p2); } // 0xE9B35F4B3FA183CC
static void NETWORK_SPENT_VEHICLE_EXPORT_MODS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xE21F90, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x234A1A7A21B287F0
static void NETWORK_SPENT_PURCHASE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22110, p0, p1, p2, p3); } // 0x6690522491F2B7EF
static void NETWORK_SPENT_UPGRADE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22140, p0, p1, p2, p3); } // 0x835DCD1C2346F3E5
static void NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Any p0, Any p1, Any p2) { invoke<Void>(0xE22170, p0, p1, p2); } // 0x4748E1ADA6271630
static void NETWORK_SPENT_PURCHASE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22270, p0, p1, p2, p3); } // 0x26FCA81008B87FAF
static void NETWORK_SPENT_UPGRADE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE222A0, p0, p1, p2, p3); } // 0x74A9433D624A129B
static void NETWORK_SPENT_HANGAR_UTILITY_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE222D0, amount, p1, p2); } // 0xE9BEC9AEEBD10172
static void NETWORK_SPENT_HANGAR_STAFF_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE223D0, amount, p1, p2); } // 0x7AB1CE55FB991D7E
static void NETWORK_SPENT_BUY_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE224D0, p0, p1, p2, p3); } // 0xA813D964741A08C1
static void NETWORK_SPENT_UPGRADE_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22500, p0, p1, p2, p3); } // 0x2119E194E1B27356
static void NETWORK_SPENT_BUY_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22530, p0, p1, p2, p3); } // 0x0D31BD6FE1E51499
static void NETWORK_SPENT_UPRADE_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22560, p0, p1, p2, p3); } // 0x239899C7038B89B2
static void NETWORK_EARN_FROM_SELL_BUNKER(int amount, Hash bunkerHash) { invoke<Void>(0xE22590, amount, bunkerHash); } // 0x9B8D5650AE5D3E37
static void NETWORK_SPENT_BALLISTIC_EQUIPMENT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE22650, amount, p1, p2); } // 0x5D9F9E16048EFF63
static void NETWORK_EARN_RDR_BONUS(int amount, Any p1) { invoke<Void>(0xE22740, amount, p1); } // 0x090A6F64158BFDC6
static void NETWORK_EARN_WAGE_PAYMENT(int amount, Any p1) { invoke<Void>(0xE22800, amount, p1); } // 0x19B6E06EEAE42FD9
static void NETWORK_EARN_WAGE_PAYMENT_BONUS(int amount) { invoke<Void>(0xE228C0, amount); } // 0xF031AD8A21A8C1A0
static void NETWORK_SPENT_BUY_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22980, p0, p1, p2, p3); } // 0x6AAECCF5BAF1E393
static void NETWORK_SPENT_UPGRADE_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE229B0, p0, p1, p2, p3); } // 0x514D80B09AEE6358
static void NETWORK_SPENT_BUY_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE229E0, p0, p1, p2, p3); } // 0x7544F7A9D8A06A08
static void NETWORK_SPENT_UPGRADE_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22A10, p0, p1, p2, p3); } // 0xC19533F1B83A7895
static void NETWORK_SPENT_EMPLOY_ASSASSINS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22A40, p0, p1, p2, p3); } // 0xD22ED94E238E6212
static void NETWORK_SPEND_GANGOPS_CANNON(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22B40, p0, p1, p2, p3); } // 0x147D45A959CA40D8
static void NETWORK_SPEND_GANGOPS_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22C40, p0, p1, p2, p3); } // 0xDE737A0063E49970
static void NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22D40, p0, p1, p2, p3); } // 0x47051CE8E3FBF361
static void NETWORK_EARN_SELL_BASE(int amount, Hash baseNameHash) { invoke<Void>(0xE22E40, amount, baseNameHash); } // 0xFD08D543F04B5AD5
static void NETWORK_EARN_TARGET_REFUND(int amount, int p1) { invoke<Void>(0xE22F00, amount, p1); } // 0x1B7FCA28E35CDBB0
static void NETWORK_EARN_GANGOPS_WAGES(int amount, int p1) { invoke<Void>(0xE22FC0, amount, p1); } // 0xC7791AFBC3D6AAD5
static void NETWORK_EARN_GANGOPS_WAGES_BONUS(int amount, int p1) { invoke<Void>(0xE23080, amount, p1); } // 0xCFCD749D4E341FD7
static void NETWORK_EARN_DAR_CHALLENGE(int amount, Any p1) { invoke<Void>(0xE23140, amount, p1); } // 0x76B1F7266AE121AC
static void NETWORK_EARN_DOOMSDAY_FINALE_BONUS(int amount, Hash vehicleHash) { invoke<Void>(0xE23200, amount, vehicleHash); } // 0x80D494C63CA32BD2
static void NETWORK_EARN_GANGOPS_AWARD(int amount, const char* p1, Any p2) { invoke<Void>(0xE232C0, amount, p1, p2); } // 0xA32B695D90B1EA0E
static void NETWORK_EARN_GANGOPS_ELITE(int amount, const char* p1, int actIndex) { invoke<Void>(0xE23300, amount, p1, actIndex); } // 0x90C7361D0621A3B6
static void NETWORK_SERVICE_EARN_GANGOPS_RIVAL_DELIVERY(int earnedMoney) { invoke<Void>(0xE23350, earnedMoney); } // 0xC1248D942D71375C
static void NETWORK_SPEND_GANGOPS_START_STRAND(int type, int amount, BOOL p2, BOOL p3) { invoke<Void>(0xE23360, type, amount, p2, p3); } // 0xE01ABEB9E2CF42B9
static void NETWORK_SPEND_GANGOPS_TRIP_SKIP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE23460, amount, p1, p2); } // 0x8091E3CC1E619B39
static void NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(int amount) { invoke<Void>(0xE23550, amount); } // 0x1320A36B594CBEC2
static void NETWORK_EARN_GANGOPS_SETUP(int amount, const char* p1) { invoke<Void>(0xE23560, amount, p1); } // 0xE31A6007C811856C
static void NETWORK_EARN_GANGOPS_FINALE(int amount, const char* p1) { invoke<Void>(0xE23570, amount, p1); } // 0x177CA8EC3BEBA1EB
static void NETWORK_SPEND_GANGOPS_REPAIR_COST(Any p0, Any p1, Any p2) { invoke<Void>(0xE23580, p0, p1, p2); } // 0x679A4C47D3A0A4B2
static void NETWORK_EARN_NIGHTCLUB(Any p0) { invoke<Void>(0xE23670, p0); } // 0x1CB79849195B4445
static void NETWORK_EARN_NIGHTCLUB_DANCING(Any p0) { invoke<Void>(0xE23730, p0); } // 0x6720272CB53DBA48
static void NETWORK_EARN_BB_EVENT_BONUS(int amount) { invoke<Void>(0xE237F0, amount); } // 0x5CD8E37BA3CBA971
static void NETWORK_SPENT_PURCHASE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE238B0, p0, p1, p2, p3); } // 0xCCC74177BFE27AC9
static void NETWORK_SPENT_UPGRADE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE238E0, p0, p1, p2, p3); } // 0xA93B2B393E4AAA20
static void NETWORK_EARN_HACKER_TRUCK(Any p0, int amount, Any p2, Any p3) { invoke<Void>(0xE23910, p0, amount, p2, p3); } // 0x771C72551EE0BD14
static void NETWORK_SPENT_PURCHASE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE23930, p0, p1, p2, p3); } // 0xF7449BB82D5A6055
static void NETWORK_SPENT_UPGRADE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE23960, p0, p1, p2, p3); } // 0x4CA2FD73CB528330
static void NETWORK_EARN_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xE23990, p0, p1, p2, p3, p4, p5, p6); } // 0x80B2A7374EC83539
static void NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE239C0, p0, p1, p2, p3); } // 0x635D6A4C16C8B427
static void NETWORK_SPENT_RDR_HATCHET_BONUS(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE23AA0, amount, p1, p2); } // 0x4D7CE2298CFF7D42
static void NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(Player player, int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23AC0, player, amount, p1, p2, p3); } // 0x75BD55E6AB869CAF
static void NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23AF0, amount, p1, p2, p3); } // 0x8F5EE908F5AE9BC3
static void NETWORK_SPEND_BOUNTY_HUNTER_MISSION(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE23BF0, amount, p1, p2); } // 0x86156182084D56A1
static void NETWORK_SPENT_REHIRE_DJ(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23CE0, amount, p1, p2, p3); } // 0xC72D28E5EF1107CF
static void NETWORK_SPENT_ARENA_JOIN_SPECTATOR(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23DE0, amount, p1, p2, p3); } // 0x6AE6C5324BD6DEBD
static void NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(int amount, Any p1) { invoke<Void>(0xE23EE0, amount, p1); } // 0x2F7D409DB8FCD57F
static void NETWORK_EARN_ARENA_CAREER_PROGRESSION(int amount, Any p1) { invoke<Void>(0xE23FA0, amount, p1); } // 0xC7D8414269660FC0
static void NETWORK_SPEND_MAKE_IT_RAIN(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE24060, amount, p1, p2); } // 0xF5BEEB8BA669C558
static void NETWORK_SPEND_BUY_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0xE24160, amount, p1, p2, p3); } // 0x0DAFEB0418AF8DAF
static void NETWORK_SPEND_UPGRADE_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0xE24190, amount, p1, p2, p3); } // 0x56EA8C6ED5821F2B
static void NETWORK_SPEND_ARENA_SPECTATOR_BOX(int amount, int type, BOOL p2, BOOL p3) { invoke<Void>(0xE241C0, amount, type, p2, p3); } // 0x5F6D2B7BA40483E7
static void NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(int amount, Any p1, BOOL p2) { invoke<Void>(0xE242C0, amount, p1, p2); } // 0x929557FEA326BBCC
static void NETWORK_EARN_SPIN_THE_WHEEL_CASH(int amount) { invoke<Void>(0xE243C0, amount); } // 0x6B07E1D996A69ACF
static void NETWORK_SPEND_ARENA_PREMIUM(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE24480, amount, p1, p2); } // 0xC57A6CADCEFE5089
static void NETWORK_EARN_ARENA_WAR(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xE24570, amount, p1, p2, p3); } // 0x9025AEE080F84A1B
static void NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(int amount) { invoke<Void>(0xE24590, amount); } // 0xC46CA38367F16578
static void NETWORK_EARN_ARENA_WAR_EVENT_CARGO(int amount) { invoke<Void>(0xE245A0, amount); } // 0x360C31F0E45DAA5F
static void NETWORK_EARN_RC_TIME_TRIAL(int amount) { invoke<Void>(0xE245B0, amount); } // 0x110068A07EDA9FBC
static void NETWORK_EARN_DAILY_OBJECTIVE_EVENT(int amount) { invoke<Void>(0xE24670, amount); } // 0x4FF0B515E4C83097
static void NETWORK_SPEND_CASINO_MEMBERSHIP(int amount, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE24730, amount, p1, p2, p3); } // 0x3F00B9CADEE8EB3D
static void NETWORK_SPEND_BUY_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xE24830, amount, p1, p2, data); } // 0xD85A55A2B60E86C9
static void NETWORK_SPEND_UPGRADE_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xE24860, amount, p1, p2, data); } // 0xC28FC39C693BF50B
static void NETWORK_SPEND_CASINO_GENERIC(int amount, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24890, amount, p1, p2, p3, p4); } // 0xE4A2A5E5455654BF
static void NETWORK_EARN_CASINO_TIME_TRIAL_WIN(int amount) { invoke<Void>(0xE248C0, amount); } // 0x416DEBEC2AF19312
static void NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(int amount) { invoke<Void>(0xE248D0, amount); } // 0xDE5641418FF92887
static void NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(int amount) { invoke<Void>(0xE248E0, amount); } // 0x22F6103D7DF1811B
static void NETWORK_EARN_SELL_PRIZE_VEHICLE(int amount, Any p1, Any p2) { invoke<Void>(0xE248F0, amount, p1, p2); } // 0xD568567F2142F0D6
static void NETWORK_EARN_CASINO_MISSION_REWARD(int amount) { invoke<Void>(0xE24910, amount); } // 0xE073EC11C22D5CB5
static void NETWORK_EARN_CASINO_STORY_MISSION_REWARD(int amount) { invoke<Void>(0xE24920, amount); } // 0xCC4DAB4ED0FA0069
static void NETWORK_EARN_CASINO_MISSION_PARTICIPATION(int amount) { invoke<Void>(0xE24930, amount); } // 0xFF9E4D74FE360E69
static void NETWORK_EARN_CASINO_AWARD(int amount, Hash hash) { invoke<Void>(0xE24940, amount, hash); } // 0x6F19DA0555AFD918
static void NETWORK_SPEND_BUY_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24A00, p0, p1, p2, p3); } // 0x23832C1A8C99748C
static void NETWORK_SPEND_UPGRADE_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24A30, p0, p1, p2, p3); } // 0x58F5E56CDD996880
static void NETWORK_SPEND_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0xE24A60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x217CC1BF55D59C44
static void NETWORK_SPEND_ARCADE_MGMT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24AD0, p0, p1, p2, p3, p4); } // 0x65093A8F4C502F7F
static void NETWORK_SPEND_PLAY_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24B00, p0, p1, p2, p3, p4); } // 0xE05D60BF50DB8652
static void NETWORK_SPEND_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24B30, p0, p1, p2, p3, p4); } // 0x4BB8B039E0467D33
static void NETWORK_EARN_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xE24B60, p0, p1, p2, p3, p4, p5, p6); } // 0x814E3AEA72604174
static void NETWORK_EARN_UPGRADE_ARCADE(Any p0, Any p1, Any p2) { invoke<Void>(0xE24B90, p0, p1, p2); } // 0xAA8EDC61C1A66D69
static void NETWORK_EARN_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24BB0, p0, p1, p2, p3, p4); } // 0x397B2F6C8F2E3FB2
static void NETWORK_EARN_COLLECTABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xE24BD0, p0, p1, p2); } // 0x02E90F469A6AC992
static void NETWORK_EARN_CHALLENGE(int amount, Any p1, Any p2) { invoke<Void>(0xE24BF0, amount, p1, p2); } // 0xA5C6A0D18EC0D946
static void NETWORK_EARN_CASINO_HEIST_AWARDS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24C10, p0, p1, p2, p3, p4); } // 0x9ACC96FE8469BF29
static void NETWORK_EARN_COLLECTABLE_ITEM(int amount, Any p1) { invoke<Void>(0xE24C30, amount, p1); } // 0x2B8A3862BDE6737C
static void NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(int amount, Any p1) { invoke<Void>(0xE24C40, amount, p1); } // 0xD8D4BFD9BC71E9CC
static void NETWORK_EARN_YATCH_MISSION(int amount, Any p1) { invoke<Void>(0xE24C50, amount, p1); } // 0xA6CF99057D1A4B2F
static void NETWORK_EARN_DISPATCH_CALL(int amount, Any p1) { invoke<Void>(0xE24D10, amount, p1); } // 0x78B315C577CF6D01
static void NETWORK_SPEND_BEACH_PARTY(Any p0) { invoke<Void>(0xE24DD0, p0); } // 0x1F6D32912DBFCEA7
static void NETWORK_SPEND_SUBMARINE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE24DE0, p0, p1, p2, p3, p4, p5); } // 0x0C919F00C1EB6628
static void NETWORK_SPEND_CASINO_CLUB(int amount1, Any p1, BOOL p2, Any p3, int p4, int p5, int p6, int amount2, Any p8) { invoke<Void>(0xE24E10, amount1, p1, p2, p3, p4, p5, p6, amount2, p8); } // 0x7295CAE6372986E4
static void NETWORK_SPEND_BUY_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24E60, p0, p1, p2, p3); } // 0x4BEE133765D6015F
static void NETWORK_SPEND_UPGRADE_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24E90, p0, p1, p2, p3); } // 0xE285C20435466381
static void NETWORK_SPEND_ISLAND_HEIST(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24EC0, p0, p1, p2, p3); } // 0xDCA98A271D0CC516
static void NETWORK_EARN_ISLAND_HEIST(int amount1, Any p1, Any p2, Any p3, int amount2, int p5) { invoke<Void>(0xE24EF0, amount1, p1, p2, p3, amount2, p5); } // 0xB413CA811F506DCF
static void NETWORK_EARN_BEACH_PARTY_LOST_FOUND(Any p0, Any p1, Any p2) { invoke<Void>(0xE24F10, p0, p1, p2); } // 0x45D4863471811592
static void NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Any p0, Any p1) { invoke<Void>(0xE24F30, p0, p1); } // 0x5836433A62D1A6C4
static void NETWORK_SPEND_CAR_CLUB_MEMBERSHIP(int amount1, Any p1, Any p2, int amount2, Any p4) { invoke<Void>(0xE24F40, amount1, p1, p2, amount2, p4); } // 0x3D20F4EE16939AC2
static void NETWORK_SPEND_CAR_CLUB_BAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE24F70, p0, p1, p2, p3); } // 0xF3C2DA93952477BC
static void NETWORK_SPEND_AUTOSHOP_MODIFY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24FA0, p0, p1, p2, p3, p4); } // 0xC514E0BC5A9C1A6A
static void NETWORK_SPEND_CAR_CLUB_TAKEOVER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24FD0, p0, p1, p2, p3); } // 0x883A1BCBA56D5FBD
static void NETWORK_SPEND_BUY_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25000, p0, p1, p2, p3); } // 0xC6B8A83CB698802E
static void NETWORK_SPEND_UPGRADE_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25030, p0, p1, p2, p3); } // 0x3FA880262FF79243
static void NETWORK_EARN_AUTOSHOP_BUSINESS(Any p0, Any p1, Any p2) { invoke<Void>(0xE25060, p0, p1, p2); } // 0x84A07CA553A4F9C3
static void NETWORK_EARN_AUTOSHOP_INCOME(Any p0, int p1) { invoke<Void>(0xE25080, p0, p1); } // 0xE16238C3C62697D0
static void NETWORK_EARN_CARCLUB_MEMBERSHIP(Any p0) { invoke<Void>(0xE25090, p0); } // 0x7A3449D1CF40578C
static void NETWORK_EARN_DAILY_VEHICLE(Any p0, Any p1) { invoke<Void>(0xE250A0, p0, p1); } // 0xD378B386217DBB5E
static void NETWORK_EARN_DAILY_VEHICLE_BONUS(Any p0) { invoke<Void>(0xE250B0, p0); } // 0x0C9F128BF7D93196
static void NETWORK_EARN_TUNER_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0xE250C0, p0, p1, p2); } // 0x16FD73B3F4345670
static void NETWORK_EARN_TUNER_ROBBERY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE250E0, p0, p1, p2, p3, p4); } // 0xAF64B7223D9E0FEB
static void NETWORK_EARN_UPGRADE_AUTOSHOP(Any p0, Any p1) { invoke<Void>(0xE25100, p0, p1); } // 0x9FF64089E5DAC313
static void NETWORK_SPEND_INTERACTION_MENU_ABILITY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25110, p0, p1, p2, p3); } // 0xC8EAF995510A953C
static void NETWORK_SPEND_SET_COMMON_FIELDS(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xE25140, p0, p1, p2, p3); } // 0xD10B64D006F40B14
static void NETWORK_SPEND_SET_DISCOUNT(BOOL p0) { invoke<Void>(0xE25190, p0); } // 0xABC3E4AF7CA40513
static void NETWORK_SPEND_BUY_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE251C0, p0, p1, p2, p3); } // 0x901A291369C59088
static void NETWORK_SPEND_UPGRADE_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE251F0, p0, p1, p2, p3); } // 0x5EFF344D2CEF49DE
static void NETWORK_SPEND_AGENCY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE25220, p0, p1, p2, p3, p4); } // 0xE521F8F950FE34C3
static void NETWORK_SPEND_HIDDEN(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25250, p0, p1, p2, p3); } // 0x29F36537BAC3D711
static void NETWORK_SPEND_SOURCE_BIKE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25280, p0, p1, p2, p3); } // 0xA19C2545709CF8B5
static void NETWORK_SPEND_COMP_SUV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE252B0, p0, p1, p2, p3); } // 0x566ADA7FE6D2FFC4
static void NETWORK_SPEND_SUV_FST_TRVL(int p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE252E0, p0, p1, p2, p3); } // 0x59DB49C02815273E
static void NETWORK_SPEND_SUPPLY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25310, p0, p1, p2, p3); } // 0x2F5233FB30DF57D5
static void NETWORK_SPEND_BIKE_SHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25340, p0, p1, p2, p3); } // 0x682B3A2CFD8CC244
static void NETWORK_SPEND_VEHICLE_REQUESTED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE25370, p0, p1, p2, p3, p4); } // 0x2ED93149B4CC68C1
static void NETWORK_SPEND_GUNRUNNING(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25490, p0, p1, p2, p3); } // 0x92473EA3E0FD6C3C
static void NETWORK_EARN_AGENCY_SAFE(Any p0) { invoke<Void>(0xE254C0, p0); } // 0x3398D3F6736CF301
static void NETWORK_EARN_AWARD_CONTRACT(Any p0, Any p1) { invoke<Void>(0xE254D0, p0, p1); } // 0x50EE547EE5B116FA
static void NETWORK_EARN_AGENCY_CONTRACT(Any p0, Any p1) { invoke<Void>(0xE254E0, p0, p1); } // 0xEBDEC0D7E92D20B0
static void NETWORK_EARN_AWARD_PHONE(Any p0, Any p1) { invoke<Void>(0xE254F0, p0, p1); } // 0x61D4C8F1146AD04D
static void NETWORK_EARN_AGENCY_PHONE(Any p0, Any p1, Any p2) { invoke<Void>(0xE25500, p0, p1, p2); } // 0x87065E48A6ACAF50
static void NETWORK_EARN_AWARD_FIXER_MISSION(Any p0, Any p1) { invoke<Void>(0xE25520, p0, p1); } // 0x583714F99BC53894
static void NETWORK_EARN_FIXER_PREP(Any p0, Any p1) { invoke<Void>(0xE25530, p0, p1); } // 0x4B9D927C4A4FB9DC
static void NETWORK_EARN_FIXER_FINALE(Any p0, Any p1) { invoke<Void>(0xE25540, p0, p1); } // 0x9E645A15DE54B5EE
static void NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0xE25550, p0, p1); } // 0x07729F2302AF3353
static void NETWORK_EARN_AWARD_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0xE25560, p0, p1); } // 0xFC7D9950A581B4F3
static void NETWORK_EARN_FIXER_RIVAL_DELIVERY(Any p0, Any p1) { invoke<Void>(0xE25570, p0, p1); } // 0xF4E49895EADECEB2
static void NETWORK_EARN_UPGRADE_AGENCY(Any p0, Any p1) { invoke<Void>(0xE25580, p0, p1); } // 0x95F1CA5C2CE2942C
static void NETWORK_SPEND_APARTMENT_UTILITIES(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xE25590, amount, p1, p2, data); } // 0xD00BC7FDBE039771
static void NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE255C0, p0, p1, p2, p3); } // 0xCF0625D5D2A8F298
static void NETWORK_EARN_SIGHTSEEING_REWARD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE255F0, p0, p1, p2, p3); } // 0x4D488739F6C82163
static void NETWORK_EARN_BIKER_SHOP(Any p0, Any p1) { invoke<Void>(0xE25610, p0, p1); } // 0xFFE3EA612616D334
static void NETWORK_EARN_BIKER(Any p0) { invoke<Void>(0xE25620, p0); } // 0xDA1798FB73681E87
static void NETWORK_YOHAN_SOURCE_GOODS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25630, p0, p1, p2, p3); } // 0x1D83165BDA8DF7FC
static void _NETWORK_SPEND_BUY_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25650, p0, p1, p2, p3); } // 0x8B7BEFF3C8EF4B47
static void _NETWORK_SPEND_UPGRADE_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25680, p0, p1, p2, p3); } // 0xB01E58326A51EBA2
static void _NETWORK_SPEND_BUY_SUPPLIES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE256B0, p0, p1, p2, p3); } // 0x8D6321E6F1CBC69C
static void _NETWORK_SPEND_BUY_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE257C0, p0, p1, p2, p3); } // 0xFF1266444C9426B4
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_EQUIPMENT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE258D0, p0, p1, p2, p3); } // 0x6EF8DB87205D57FF
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_ARMOR(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE25900, p0, p1, p2, p3); } // 0x3BE0A37C527AC2C8
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_SCOOP(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE25930, p0, p1, p2, p3); } // 0x6948702511126852
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_MINES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE25960, p0, p1, p2, p3); } // 0xCC69EE39119A150C
static void _NETWORK_SPEND_RENAME_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25990, p0, p1, p2, p3); } // 0x2416BBA9A9F18EAB
static void _NETWORK_SPEND_RENAME_ACID_PRODUCT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE259C0, p0, p1, p2, p3); } // 0x14DF63D0BB614642
static void _NETWORK_EARN_AWARD_JUGGALO_MISSION(Any p0, Any p1) { invoke<Void>(0xE259F0, p0, p1); } // 0xCFA8FE5301B9E6CE
static void _NETWORK_EARN_AWARD_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE25AF0, p0, p1); } // 0x2656226DE9A2C644
static void _NETWORK_EARN_AWARD_DAILY_STASH(Any p0, Any p1) { invoke<Void>(0xE25BF0, p0, p1); } // 0x0A4457A33AC118B4
static void _NETWORK_EARN_AWARD_DEAD_DROP(Any p0, Any p1) { invoke<Void>(0xE25CF0, p0, p1); } // 0x39D90796902DFED4
static void _NETWORK_EARN_AWARD_RANDOM_EVENT(Any p0, Any p1) { invoke<Void>(0xE25DF0, p0, p1); } // 0x9657D8B784593A5E
static void _NETWORK_EARN_AWARD_TAXI(Any p0, Any p1) { invoke<Void>(0xE25EF0, p0, p1); } // 0xD755F13556CF7C9D
static void _NETWORK_EARN_STREET_DEALER(Any p0, Any p1) { invoke<Void>(0xE25FF0, p0, p1); } // 0xC026E17CC4E7BED5
static void _NETWORK_EARN_SELL_ACID(Any p0, Any p1) { invoke<Void>(0xE26000, p0, p1); } // 0xEC9101A02CD98A8B
static void _NETWORK_EARN_SETUP_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE260C0, p0, p1); } // 0x8D2A2025E94588A1
static void _NETWORK_EARN_SOURCE_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE26180, p0, p1); } // 0x733EB09C30E2BC1E
static void _NETWORK_EARN_SELL_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE26240, p0, p1); } // 0x5E3EE3B0D24ED146
static void _NETWORK_EARN_JUGGALO_STORY_MISSION(Any p0, Any p1) { invoke<Void>(0xE26300, p0, p1); } // 0xF8BBC07B8BA14ECF
static void _NETWORK_EARN_JUGGALO_STORY_MISSION_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xE263C0, p0, p1); } // 0xD16E87370ADCE88C
static void _NETWORK_EARN_FOOLIGAN_JOB(Any p0, Any p1) { invoke<Void>(0xE26480, p0, p1); } // 0x00A1243621982D87
static void _NETWORK_EARN_FOOLIGAN_JOB_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xE26540, p0, p1); } // 0xDD0F567A35809C42
static void _NETWORK_EARN_TAXI_JOB(Any p0, Any p1) { invoke<Void>(0xE26600, p0, p1); } // 0x04AA32C25ED6D69D
static void _NETWORK_EARN_DAILY_STASH_HOUSE_COMPLETED(Any p0, Any p1) { invoke<Void>(0xE266F0, p0, p1); } // 0x5B46189D0DA97DE4
static void _NETWORK_EARN_DAILY_STASH_HOUSE_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xE267B0, p0, p1); } // 0xE8C7135747EA3054
static int NETWORK_GET_VC_BANK_BALANCE() { return invoke<int>(0xE26FC0); } // 0x227D0C27EB51D76C
static int NETWORK_GET_VC_WALLET_BALANCE(int characterSlot) { return invoke<int>(0xE26FF0, characterSlot); } // 0x00BDC89742B13CD2
static int NETWORK_GET_VC_BALANCE() { return invoke<int>(0xE27020); } // 0x6A9B427B35077684
static int NETWORK_GET_EVC_BALANCE() { return invoke<int>(0xE27050); } // 0xF9A874A9AA3CA007
static int NETWORK_GET_PVC_BALANCE() { return invoke<int>(0xE27080); } // 0xF3ABFA84F93690E0
static const char* NETWORK_GET_STRING_WALLET_BALANCE(int characterSlot) { return invoke<const char*>(0xE270B0, characterSlot); } // 0x815E568EDFA0F84F
static const char* NETWORK_GET_STRING_BANK_BALANCE() { return invoke<const char*>(0xE270F0); } // 0xCC3DCF2C80164BB7
static const char* NETWORK_GET_STRING_BANK_WALLET_BALANCE() { return invoke<const char*>(0xE27130); } // 0xFA33924AB598C47C
static BOOL NETWORK_GET_CAN_SPEND_FROM_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0xE27180, amount, characterSlot); } // 0x2CCC9874DC774FD1
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK(int amount) { return invoke<BOOL>(0xE271B0, amount); } // 0x33B9AE76A0E4C46D
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK_AND_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0xE271E0, amount, characterSlot); } // 0x818CFAC7819E0460
static int NETWORK_GET_PVC_TRANSFER_BALANCE() { return invoke<int>(0xE27220); } // 0xB7D5A701FD23B2B4
static BOOL NETWORK_GET_CAN_TRANSFER_CASH(int amount) { return invoke<BOOL>(0xE27240, amount); } // 0xDF1F519EA0B54B7D
static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE272D0, p0, p1, p2, p3); } // 0x5B9D8077EF640468
static int NETWORK_GET_REMAINING_TRANSFER_BALANCE() { return invoke<int>(0xE27320); } // 0xCAA7ED3DA3EAD53C
static int WITHDRAW_VC(int amount) { return invoke<int>(0xE27340, amount); } // 0x8C72AE091EB20602
static BOOL DEPOSIT_VC(int amount) { return invoke<BOOL>(0xE27370, amount); } // 0xAC3F47C6E026FB48
static BOOL HAS_VC_WITHDRAWAL_COMPLETED(Any p0) { return invoke<BOOL>(0xE273A0, p0); } // 0x7BAF87C40BEA974C
static BOOL WAS_VC_WITHDRAWAL_SUCCESSFUL(Any p0) { return invoke<BOOL>(0xE273B0, p0); } // 0x7E903F2F588C9435
static BOOL NET_GAMESERVER_USE_SERVER_TRANSACTIONS() { return invoke<BOOL>(0xE28320); } // 0xC18CB5D7A27A2E00
static BOOL NET_GAMESERVER_CATALOG_ITEM_IS_VALID(const char* name) { return invoke<BOOL>(0xE28330, name); } // 0xABE86AEC64720F91
static BOOL NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(Hash hash) { return invoke<BOOL>(0xE28340, hash); } // 0x206AC354EB77B7FD
static int NET_GAMESERVER_GET_PRICE(Hash itemHash, Hash categoryHash, BOOL p2) { return invoke<int>(0xE28350, itemHash, categoryHash, p2); } // 0xD2ACF01ED6E6D7C6
static BOOL NET_GAMESERVER_CATALOG_IS_VALID() { return invoke<BOOL>(0xE28360); } // 0xD79BEF4E08ED2183
static BOOL NET_GAMESERVER_IS_CATALOG_CURRENT() { return invoke<BOOL>(0xE28370); } // 0xB879CA89F967F26F
static Hash NET_GAMESERVER_GET_CATALOG_CLOUD_CRC() { return invoke<Hash>(0xE28380); } // 0xAEC584629042017A
static BOOL NET_GAMESERVER_REFRESH_SERVER_CATALOG() { return invoke<BOOL>(0xE28390); } // 0xE9D0D38A52D47D12
static BOOL NET_GAMESERVER_RETRIEVE_CATALOG_REFRESH_STATUS(int* state) { return invoke<BOOL>(0xE283A0, state); } // 0x851E914CBFC1A1DF
static BOOL NET_GAMESERVER_INIT_SESSION() { return invoke<BOOL>(0xE283B0); } // 0x8D45EE985CFA01DD
static BOOL NET_GAMESERVER_RETRIEVE_INIT_SESSION_STATUS(int* p0) { return invoke<BOOL>(0xE283C0, p0); } // 0x3727730B65065BB9
static BOOL NET_GAMESERVER_START_SESSION(int charSlot) { return invoke<BOOL>(0xE283D0, charSlot); } // 0x837A06CA50CB0287
static BOOL NET_GAMESERVER_START_SESSION_PENDING() { return invoke<BOOL>(0xE283E0); } // 0x53011E611CBE5D47
static BOOL NET_GAMESERVER_RETRIEVE_START_SESSION_STATUS(int* p0) { return invoke<BOOL>(0xE283F0, p0); } // 0xA7237EFE46BDEC7B
static BOOL NET_GAMESERVER_RETRIEVE_SESSION_ERROR_CODE(int* p0) { return invoke<BOOL>(0xE28400, p0); } // 0x38C09A49FBCCE839
static BOOL NET_GAMESERVER_IS_SESSION_VALID(int charSlot) { return invoke<BOOL>(0xE28410, charSlot); } // 0x134EF45B578F4CCF
static BOOL NET_GAMESERVER_CLEAR_SESSION(int p0) { return invoke<BOOL>(0xE28420, p0); } // 0x8C09D01F9FCC2827
static BOOL NET_GAMESERVER_SESSION_APPLY_RECEIVED_DATA(int charSlot) { return invoke<BOOL>(0xE28430, charSlot); } // 0x70ABB0748BDFB6BA
static BOOL NET_GAMESERVER_IS_SESSION_REFRESH_PENDING() { return invoke<BOOL>(0xE28440); } // 0x34F31012FED51A0F
static BOOL NET_GAMESERVER_START_SESSION_RESTART(BOOL inventory, BOOL playerbalance) { return invoke<BOOL>(0xE28450, inventory, playerbalance); } // 0x31DC11BF434AF20B
static BOOL NET_GAMESERVER_TRANSACTION_IN_PROGRESS() { return invoke<BOOL>(0xE28460); } // 0xEBCF66C686AEBDCA
static BOOL NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(int* p0, BOOL* p1) { return invoke<BOOL>(0xE28470, p0, p1); } // 0x8A77EAFEB55D476D
static BOOL NET_GAMESERVER_BASKET_START(int* transactionId, Hash categoryHash, Hash actionHash, int flags) { return invoke<BOOL>(0xE28480, transactionId, categoryHash, actionHash, flags); } // 0x5156B6B1D1CD58FE
static BOOL NET_GAMESERVER_BASKET_END() { return invoke<BOOL>(0xE28490); } // 0xD8EB47E09DFC393C
static BOOL NET_GAMESERVER_BASKET_IS_ACTIVE() { return invoke<BOOL>(0xE284A0); } // 0x79EEE2067838CC59
static BOOL NET_GAMESERVER_BASKET_ADD_ITEM(Any* itemData, int quantity) { return invoke<BOOL>(0xE284B0, itemData, quantity); } // 0x5E8BF7E974BEA7D7
static BOOL NET_GAMESERVER_BASKET_IS_FULL() { return invoke<BOOL>(0xE284C0); } // 0x8B61FD3426EC705D
static BOOL NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Any p0, Any* p1) { return invoke<BOOL>(0xE284D0, p0, p1); } // 0x11FD21BA1B765FE2
static BOOL NET_GAMESERVER_CHECKOUT_START(int transactionId) { return invoke<BOOL>(0xE284E0, transactionId); } // 0x5F7C6361179DFFC4
static BOOL NET_GAMESERVER_BEGIN_SERVICE(int* transactionId, Hash categoryHash, Hash itemHash, Hash actionTypeHash, int value, int flags) { return invoke<BOOL>(0xE28500, transactionId, categoryHash, itemHash, actionTypeHash, value, flags); } // 0x54BC5E0B6A29AE8A
static BOOL NET_GAMESERVER_END_SERVICE(int transactionId) { return invoke<BOOL>(0xE28510, transactionId); } // 0x1FDE21A286357401
static BOOL NET_GAMESERVER_DELETE_CHARACTER(int slot, BOOL transfer, Hash reason) { return invoke<BOOL>(0xE28520, slot, transfer, reason); } // 0xD1BAD83E70275AEB
static int NET_GAMESERVER_DELETE_CHARACTER_GET_STATUS() { return invoke<int>(0xE28530); } // 0x93693D93BD53ACB1
static BOOL NET_GAMESERVER_DELETE_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0xE28540); } // 0x203607236413B185
static BOOL NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(int charSlot, int amount) { return invoke<BOOL>(0xE28550, charSlot, amount); } // 0x4F3198DEED415E95
static BOOL NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(int charSlot, int amount) { return invoke<BOOL>(0xE28560, charSlot, amount); } // 0xCFE92984BF3486D5
static int NET_GAMESERVER_TRANSFER_BANK_TO_WALLET_GET_STATUS() { return invoke<int>(0xE28570); } // 0x2B3725FC402B94A8
static int NET_GAMESERVER_TRANSFER_WALLET_TO_BANK_GET_STATUS() { return invoke<int>(0xE28580); } // 0x606408352C7741AD
static BOOL NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0xE28590); } // 0x59E8FA762FB527C5
static BOOL NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(int p0) { return invoke<BOOL>(0xE285A0, p0); } // 0x1F4C0FAC35E805F4
static const char* GET_ONLINE_VERSION() { return invoke<const char*>(0xE49D40); } // 0x5DABD035363E4E52
static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0xE49D50); } // 0x5F9F81C08516558E
static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0xE49D70); } // 0x261E3728EE56B3AC
static BOOL NETWORK_IS_NP_AVAILABLE() { return invoke<BOOL>(0xE49DA0); } // 0xECBFC40AE72FA489
static BOOL NETWORK_IS_NP_PENDING() { return invoke<BOOL>(0xE49DE0); } // 0x8C9CC81BD246DE31
static int NETWORK_GET_NP_UNAVAILABLE_REASON() { return invoke<int>(0xE49E20); } // 0x444B1E9E9A9D726B
static BOOL NETWORK_IS_CONNETED_TO_NP_PRESENCE() { return invoke<BOOL>(0xE49E60); } // 0x8827319E5D2F9C68
static BOOL NETWORK_IS_LOGGED_IN_TO_PSN() { return invoke<BOOL>(0xE49EA0); } // 0xC026D674C8C48368
static BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0xE49EE0); } // 0x1595D1B690089487
static BOOL NETWORK_IS_REFRESHING_ROS_CREDENTIALS() { return invoke<BOOL>(0xE49F10); } // 0x9A98CA859043585F
static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0xE49F40); } // 0x5676319ACE5BEC37
static BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xE49F70); } // 0xFE087BC8EB584AA2
static BOOL NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT() { return invoke<BOOL>(0xE49F90); } // 0xEBF44C5F6EF789C0
static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0xE49FD0); } // 0x7242220B378B8CCF
static Player NETWORK_GET_HOST_PLAYER_INDEX() { return invoke<Player>(0xE49FF0); } // 0x53A6D90B4FBC585D
static BOOL NETWORK_WAS_GAME_SUSPENDED() { return invoke<BOOL>(0xE4A020); } // 0xC8D0FF9225C03E0E
static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0xE4A030); } // 0xD25970CBEE074E07
static BOOL NETWORK_HAS_AGE_RESTRICTIONS() { return invoke<BOOL>(0xE4A070); } // 0xB0DF27929B02C57E
static BOOL NETWORK_HAVE_USER_CONTENT_PRIVILEGES(int p0) { return invoke<BOOL>(0xE4A0A0, p0); } // 0x97DD063A9C6137F8
static BOOL NETWORK_HAVE_COMMUNICATION_PRIVILEGES(int p0, Player player) { return invoke<BOOL>(0xE4A0C0, p0, player); } // 0x9A9677D7F3615A86
static BOOL NETWORK_CHECK_ONLINE_PRIVILEGES(Any p0, BOOL p1) { return invoke<BOOL>(0xE4A160, p0, p1); } // 0x27AEB178E6BB8021
static BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xE4A190, p0, p1, p2); } // 0x8FF2665359043205
static BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xE4A1C0, p0, p1, p2); } // 0x521B8DE052C56837
static BOOL NETWORK_CHECK_TEXT_COMMUNICATION_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4A1F0, p0, p1, p2); } // 0xB856D5DB24672EA4
static BOOL NETWORK_IS_USING_ONLINE_PROMOTION() { return invoke<BOOL>(0xE4A220); } // 0x46396D1A40BBF581
static BOOL NETWORK_SHOULD_SHOW_PROMOTION_ALERT_SCREEN() { return invoke<BOOL>(0xE4A260); } // 0xCA8FCC9293149C67
static BOOL NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() { return invoke<BOOL>(0xE4A290); } // 0xADED703C1F8CC52B
static int NETWORK_GET_AGE_GROUP() { return invoke<int>(0xE4A2C0); } // 0xB3592BAAAC94842D
static BOOL NETWORK_CHECK_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4A2E0, p0, p1, p2); } // 0x6530C8E06980D65E
static BOOL NETWORK_IS_PRIVILEGE_CHECK_IN_PROGRESS() { return invoke<BOOL>(0xE4A350); } // 0xA5D42B526D34A833
static void NETWORK_SET_PRIVILEGE_CHECK_RESULT_NOT_NEEDED() { invoke<Void>(0xE4A370); } // 0xDF9CDAB22CD2E6EF
static BOOL NETWORK_RESOLVE_PRIVILEGE_USER_CONTENT() { return invoke<BOOL>(0xE4A380); } // 0x1BF2060736C8594C
static BOOL NETWORK_HAVE_PLATFORM_SUBSCRIPTION() { return invoke<BOOL>(0xE4A390); } // 0x47C5F1CAA6A07D67
static BOOL NETWORK_IS_PLATFORM_SUBSCRIPTION_CHECK_PENDING() { return invoke<BOOL>(0xE4A3C0); } // 0x6C8E92D4F56B150E
static void NETWORK_SHOW_ACCOUNT_UPGRADE_UI() { invoke<Void>(0xE4A3F0); } // 0x130048FEFDA3B288
static BOOL NETWORK_IS_SHOWING_SYSTEM_UI_OR_RECENTLY_REQUESTED_UPSELL() { return invoke<BOOL>(0xE4A400); } // 0x348A57FA9B720374
static BOOL NETWORK_NEED_TO_START_NEW_GAME_BUT_BLOCKED() { return invoke<BOOL>(0xE4A430); } // 0xEF3203CB3CD405D3
static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xE4A460); } // 0xF08B45C0CEBE11C2
static void NETWORK_BAIL(int p0, int p1, int p2) { invoke<Void>(0xE4A480, p0, p1, p2); } // 0xB0926B14C2D3A838
static void NETWORK_ON_RETURN_TO_SINGLE_PLAYER() { invoke<Void>(0xE4A540); } // 0x2920E3AB45CC75B8
static BOOL NETWORK_TRANSITION_START(int p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE4A550, p0, p1, p2, p3); } // 0xC92F64C449585057
static BOOL NETWORK_TRANSITION_ADD_STAGE(Hash hash, int p1, int p2, int state, int p4) { return invoke<BOOL>(0xE4A570, hash, p1, p2, state, p4); } // 0x350F7DB8B2765EC2
static BOOL NETWORK_TRANSITION_FINISH(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4A590, p0, p1, p2); } // 0x232D3561D0F9CC6E
static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0xE4A5B0, loadingState); } // 0x0C81430427CA20D7
static BOOL NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<BOOL>(0xE4A6A0); } // 0xB1839CEE630503F9
static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0xE4A6C0); } // 0x5FA9B89685B7F17E
static BOOL NETWORK_SESSION_DO_FREEROAM_QUICKMATCH(Any p0, Any p1, Any p2, int maxPlayers) { return invoke<BOOL>(0xE4A6F0, p0, p1, p2, maxPlayers); } // 0xD9082A1A08CF156E
static BOOL NETWORK_SESSION_DO_FRIEND_MATCHMAKING(int p0, int p1, int maxPlayers) { return invoke<BOOL>(0xE4A740, p0, p1, maxPlayers); } // 0x0563974EC0E4F379
static BOOL NETWORK_SESSION_DO_CREW_MATCHMAKING(int crewId, int p1, int p2, int maxPlayers) { return invoke<BOOL>(0xE4A7A0, crewId, p1, p2, maxPlayers); } // 0x2FFEC9DB9C5EB929
static BOOL NETWORK_SESSION_DO_ACTIVITY_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xE4A8A0, p0, p1, p2, p3, p4); } // 0x3B554BBD6F262ED5
static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xE4A910, p0, maxPlayers, p2); } // 0x255FDE258192D9FE
static BOOL NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<BOOL>(0xE4A970, p0, maxPlayers); } // 0xE2C5447EB91CC682
static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0xE4A9D0, p0, maxPlayers); } // 0x4F279069441DF335
static BOOL NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<BOOL>(0xE4AA30); } // 0xCA440502CAC1617C
static BOOL NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<BOOL>(0xE4AA60); } // 0x568C5A2B6834D226
static BOOL NETWORK_SESSION_IS_SOLO() { return invoke<BOOL>(0xE4AA90); } // 0xDC8C0439F5CD3C85
static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0xE4AAC0); } // 0x6CCB49E4B35F59D6
static BOOL NETWORK_SESSION_LEAVE(Any p0) { return invoke<BOOL>(0xE4AB40, p0); } // 0x8FFE1F924EF00340
static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xE4AB80, player); } // 0xE8B604AD9A55DE39
static BOOL NETWORK_SESSION_GET_KICK_VOTE(Player player) { return invoke<BOOL>(0xE4ABE0, player); } // 0xB1397F80306800D5
static BOOL NETWORK_SESSION_RESERVE_SLOTS_TRANSITION(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4AC30, p0, p1, p2); } // 0x66E498254807DB77
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_SESSION() { return invoke<BOOL>(0xE4AC60); } // 0x68CB8278CA2DB28D
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_TRANSITION() { return invoke<BOOL>(0xE4AC90); } // 0x7C2F429F5A70EFE8
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP(int matchmakingGroup) { invoke<Void>(0xE4ACC0, matchmakingGroup); } // 0x9A651BCFA544373C
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP_MAX(int playerType, int playerCount) { invoke<Void>(0xE4ACE0, playerType, playerCount); } // 0x4EDA84E31A9AD294
static int NETWORK_SESSION_GET_MATCHMAKING_GROUP_FREE(int p0) { return invoke<int>(0xE4AD10, p0); } // 0x90383DF0E1713198
static void NETWORK_SESSION_ADD_ACTIVE_MATCHMAKING_GROUP(int groupId) { invoke<Void>(0xE4AD50, groupId); } // 0x5A59537D7B87C071
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT(Any p0) { invoke<Void>(0xE4AD70, p0); } // 0xC2FDE8BF0797A991
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT_TRANSITION(Any p0) { invoke<Void>(0xE4ADC0, p0); } // 0x93055E37701645DF
static void NETWORK_SESSION_SET_UNIQUE_CREW_ONLY_CREWS_TRANSITION(BOOL p0) { invoke<Void>(0xE4ADE0, p0); } // 0x3A777FFCB6CEEC68
static void NETWORK_SESSION_SET_CREW_LIMIT_MAX_MEMBERS_TRANSITION(Any p0) { invoke<Void>(0xE4AE10, p0); } // 0x748527CDF8982E12
static void NETWORK_SESSION_SET_MATCHMAKING_PROPERTY_ID(BOOL p0) { invoke<Void>(0xE4AE30, p0); } // 0x97FAFBDA1C653C51
static void NETWORK_SESSION_SET_MATCHMAKING_MENTAL_STATE(int p0) { invoke<Void>(0xE4AE50, p0); } // 0xAECA84689B07DB71
static void NETWORK_SESSION_SET_NUM_BOSSES(int num) { invoke<Void>(0xE4AE80, num); } // 0x76B38120ECD9A6EE
static void NETWORK_SESSION_SET_SCRIPT_VALIDATE_JOIN() { invoke<Void>(0xE4AE90); } // 0x19B1BD7BD2BA430B
static void NETWORK_SESSION_VALIDATE_JOIN(BOOL p0) { invoke<Void>(0xE4AEA0, p0); } // 0xD327503849EFC7D2
static void NETWORK_ADD_FOLLOWERS(int* p0, int p1) { invoke<Void>(0xE4AEC0, p0, p1); } // 0x26AC5C43C19083BA
static void NETWORK_CLEAR_FOLLOWERS() { invoke<Void>(0xE4AED0); } // 0x9758CB6BB2E4700F
static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int* hours, int* minutes, int* seconds) { invoke<Void>(0xE4AEE0, hours, minutes, seconds); } // 0x7CA15BD368B8D693
static void NETWORK_SESSION_SET_GAMEMODE(Any p0) { invoke<Void>(0xE4AF00, p0); } // 0xD51099E517218F8C
static int NETWORK_SESSION_GET_HOST_AIM_PREFERENCE() { return invoke<int>(0xE4AF10); } // 0x672C2841CFBEC1A5
static BOOL NETWORK_FIND_GAMERS_IN_CREW(int crewId) { return invoke<BOOL>(0xE4AF30, crewId); } // 0x0C3213134B5223EB
static BOOL NETWORK_FIND_MATCHED_GAMERS(int attribute, float fallbackLimit, float lowerLimit, float upperLimit) { return invoke<BOOL>(0xE4B000, attribute, fallbackLimit, lowerLimit, upperLimit); } // 0x748C69C64ED4F080
static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0xE4B040); } // 0xDD718E172A233DC5
static BOOL NETWORK_DID_FIND_GAMERS_SUCCEED() { return invoke<BOOL>(0xE4B060); } // 0x6612FC080482B408
static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0xE4B080); } // 0x7B74C2465094BAE7
static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0xE4B0A0, p0, p1); } // 0x9A791B1482F74599
static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0xE4B160); } // 0x40F220671F7EF07D
static BOOL NETWORK_QUEUE_GAMER_FOR_STATUS(Any* p0) { return invoke<BOOL>(0xE4B170, p0); } // 0xA35EFADA8B877384
static BOOL NETWORK_GET_GAMER_STATUS_FROM_QUEUE() { return invoke<BOOL>(0xE4B1F0); } // 0x23F4D421F65F56BD
static BOOL NETWORK_IS_GETTING_GAMER_STATUS() { return invoke<BOOL>(0xE4B210); } // 0x124398C14F6A1133
static BOOL NETWORK_DID_GET_GAMER_STATUS_SUCCEED() { return invoke<BOOL>(0xE4B230); } // 0xC0AA79A8808D5BA2
static BOOL NETWORK_GET_GAMER_STATUS_RESULT(Any* p0, Any p1) { return invoke<BOOL>(0xE4B250, p0, p1); } // 0x08A4CF1E65E8A0EC
static void NETWORK_CLEAR_GET_GAMER_STATUS() { invoke<Void>(0xE4B300); } // 0x1718FDF9693BFC2B
static void NETWORK_SESSION_JOIN_INVITE() { invoke<Void>(0xE4B310); } // 0x065ED066142EEE36
static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0xE4B320); } // 0xB1354B4526064BB6
static void NETWORK_SESSION_FORCE_CANCEL_INVITE() { invoke<Void>(0xE4B350); } // 0x700F61510EE70767
static BOOL NETWORK_HAS_PENDING_INVITE() { return invoke<BOOL>(0xE4B380); } // 0x6F5C1B03EC881534
static BOOL NETWORK_HAS_CONFIRMED_INVITE() { return invoke<BOOL>(0xE4B3C0); } // 0x60EDC5810CB82627
static BOOL NETWORK_REQUEST_INVITE_CONFIRMED_EVENT() { return invoke<BOOL>(0xE4B3F0); } // 0x4AA344248B02BD35
static BOOL NETWORK_SESSION_WAS_INVITED() { return invoke<BOOL>(0xE4B420); } // 0x8F676111F5795F1C
static void NETWORK_SESSION_GET_INVITER(Any* gamerHandle) { invoke<Void>(0xE4B440, gamerHandle); } // 0xDAB06DF0C53853BB
static BOOL NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE() { return invoke<BOOL>(0xE4B470); } // 0xC05DC36AE101C2BB
static BOOL NETWORK_SESSION_IS_DISPLAYING_INVITE_CONFIRMATION() { return invoke<BOOL>(0xE4B4A0); } // 0xD03C646667D8D5F1
static void NETWORK_SUPPRESS_INVITE(BOOL toggle) { invoke<Void>(0xE4B4D0, toggle); } // 0x408B17CF0BA8B155
static void NETWORK_BLOCK_INVITES(BOOL toggle) { invoke<Void>(0xE4B4F0, toggle); } // 0xF303C195C2A60638
static void NETWORK_BLOCK_JOIN_QUEUE_INVITES(BOOL toggle) { invoke<Void>(0xE4B510, toggle); } // 0x6E8BBCAC6E64214C
static void NETWORK_SET_CAN_RECEIVE_RS_INVITES(BOOL p0) { invoke<Void>(0xE4B530, p0); } // 0x7AFB027C1EB91ABE
static void NETWORK_STORE_INVITE_THROUGH_RESTART() { invoke<Void>(0xE4B550); } // 0x918B9A135FB8B81F
static void NETWORK_ALLOW_INVITE_PROCESS_IN_PLAYER_SWITCH(BOOL p0) { invoke<Void>(0xE4B560, p0); } // 0x93F98BC782D307FF
static void NETWORK_SET_SCRIPT_READY_FOR_EVENTS(BOOL toggle) { invoke<Void>(0xE4B580, toggle); } // 0x10B4F03DA622008C
static BOOL NETWORK_IS_OFFLINE_INVITE_PENDING() { return invoke<BOOL>(0xE4B5A0); } // 0xDB0CDDD9A5B1C7A9
static void NETWORK_CLEAR_OFFLINE_INVITE_PENDING() { invoke<Void>(0xE4B5C0); } // 0x984AEF3A625C58C4
static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<Void>(0xE4B610, p0); } // 0x827C8918F31EF9CD
static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0xE4B630); } // 0x566589BD8D826713
static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0xE4B650); } // 0x76CD105BCAC6EB9F
static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0xE4B660); } // 0x7B3F26F5D11BF3BE
static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xE4B680); } // 0xBF52D447C795492B
static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0xE4B6B0); } // 0x2312C61FB9082621
static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0xE4B6D0); } // 0xAB8F1746453732A4
static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0xE4B6F0); } // 0x2CA491A425D49E0D
static int NETWORK_GET_GAME_MODE() { return invoke<int>(0xE4B710); } // 0x83E35AD37CFCE6F6
static void NETWORK_SESSION_MARK_VISIBLE(BOOL toggle) { invoke<Void>(0xE4B750, toggle); } // 0x4C4BDAB6F7441447
static BOOL NETWORK_SESSION_IS_VISIBLE() { return invoke<BOOL>(0xE4B7A0); } // 0x6887ED8BDFBE2715
static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL toggle) { invoke<Void>(0xE4B7E0, toggle); } // 0x82B8FC206B9F77F8
static void NETWORK_SESSION_CHANGE_SLOTS(int slots, BOOL p1) { invoke<Void>(0xE4B830, slots, p1); } // 0x6160ECE40167CDEA
static int NETWORK_SESSION_GET_PRIVATE_SLOTS() { return invoke<int>(0xE4B870); } // 0x7EE8EFCDD1DAF8E8
static BOOL NETWORK_SESSION_VOICE_HOST() { return invoke<BOOL>(0xE4B8A0); } // 0xD9C7584E971C091E
static BOOL NETWORK_SESSION_VOICE_LEAVE() { return invoke<BOOL>(0xE4B8D0); } // 0x7D8697356CC73FFD
static void NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(Any* gamerHandle) { invoke<Void>(0xE4B900, gamerHandle); } // 0x02D78E296BAAE4A1
static void NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(BOOL p0, int p1) { invoke<Void>(0xE4B980, p0, p1); } // 0x04C07C028D5A3A1A
static void NETWORK_SESSION_VOICE_SET_TIMEOUT(int timeout) { invoke<Void>(0xE4B9A0, timeout); } // 0xBA4DB04D93B492EF
static BOOL NETWORK_SESSION_IS_IN_VOICE_SESSION() { return invoke<BOOL>(0xE4B9C0); } // 0x5150DDF9D3BDA9E5
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE() { return invoke<BOOL>(0xE4B9F0); } // 0x810D839B3DC43B18
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_BUSY() { return invoke<BOOL>(0xE4BA20); } // 0x8BDB5F6FED3994AD
static BOOL NETWORK_SEND_TEXT_MESSAGE(const char* message, Any* gamerHandle) { return invoke<BOOL>(0xE4BA50, message, gamerHandle); } // 0x44FC944CCE2884A5
static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0xE4BAE0, toggle); } // 0x7815F93AD7950188
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<BOOL>(0xE4BB00); } // 0x8B6869C5EC0F62C3
static void NETWORK_SET_ACTIVITY_PLAYER_MAX(Any p0) { invoke<Void>(0xE4BB20, p0); } // 0xE637CC36B406C3BD
static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) { invoke<Void>(0xE4BB40, maxSpectators); } // 0xD813155D5FA37C96
static int NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<int>(0xE4BB60, p0); } // 0x148F075BF593134E
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xE4BBA0, gamerHandle); } // 0xDFA2DE98496613A2
static BOOL NETWORK_HOST_TRANSITION(int p0, int p1, int p2, int p3, Any p4, BOOL p5, BOOL p6, int p7, Any p8, int p9) { return invoke<BOOL>(0xE4BC30, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xD8DD13235608C9D0
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xE4BD00, p0, p1, p2, p3, p4, p5); } // 0xFC1123FE6C7D5909
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xE4BDA0, p0, p1, p2, p3, p4, p5); } // 0x01C9B0FC57F5144E
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0xE4BE40, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8AB21B54A01F6CC2
static BOOL NETWORK_JOIN_GROUP_ACTIVITY() { return invoke<BOOL>(0xE4BE90); } // 0x646BC1CC9552A232
static void NETWORK_CLEAR_GROUP_ACTIVITY() { invoke<Void>(0xE4BEC0); } // 0x6AF1528AD00C76A2
static void NETWORK_RETAIN_ACTIVITY_GROUP() { invoke<Void>(0xE4BED0); } // 0x7FFE6853F63E56BA
static BOOL NETWORK_IS_TRANSITION_CLOSED_FRIENDS() { return invoke<BOOL>(0xE4BEE0); } // 0x250E5C2B310DC7C4
static BOOL NETWORK_IS_TRANSITION_CLOSED_CREW() { return invoke<BOOL>(0xE4BF10); } // 0x2D7D4A7EDC2C2543
static BOOL NETWORK_IS_TRANSITION_SOLO() { return invoke<BOOL>(0xE4BF40); } // 0x3EC1F83231603B24
static BOOL NETWORK_IS_TRANSITION_PRIVATE() { return invoke<BOOL>(0xE4BF70); } // 0x1ABB34FE0E4550C3
static int NETWORK_GET_NUM_TRANSITION_NON_ASYNC_GAMERS() { return invoke<int>(0xE4BFA0); } // 0x1F97DCD0259BD8BB
static void NETWORK_MARK_AS_PREFERRED_ACTIVITY(BOOL p0) { invoke<Void>(0xE4BFD0, p0); } // 0x8C15D9F9A0692305
static void NETWORK_MARK_AS_WAITING_ASYNC(BOOL p0) { invoke<Void>(0xE4BFF0, p0); } // 0x5B6118C4A1363B02
static void NETWORK_SET_IN_PROGRESS_FINISH_TIME(Any p0) { invoke<Void>(0xE4C010, p0); } // 0x4E0E12D39BE69892
static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0xE4C030, p0); } // 0x5B4AC3576C9F22EA
static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0xE4C0B0); } // 0x5AB2FA2EDFF61EB9
static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0xE4C110, p0, p1); } // 0x6DD03E2B054A8A3F
static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* gamerHandle) { invoke<Void>(0xE4C140, gamerHandle); } // 0xB502672BBF33603F
static BOOL NETWORK_LEAVE_TRANSITION() { return invoke<BOOL>(0xE4C1D0); } // 0x2B0E6E483C2214A4
static BOOL NETWORK_LAUNCH_TRANSITION() { return invoke<BOOL>(0xE4C210); } // 0x7FF4763F9198B0EE
static void NETWORK_SET_DO_NOT_LAUNCH_FROM_JOIN_AS_MIGRATED_HOST(BOOL toggle) { invoke<Void>(0xE4C250, toggle); } // 0xA1DA526BBDEF1146
static void NETWORK_CANCEL_TRANSITION_MATCHMAKING() { invoke<Void>(0xE4C270); } // 0x1FB39C4C10D6F290
static void NETWORK_BAIL_TRANSITION(int p0, int p1, int p2) { invoke<Void>(0xE4C280, p0, p1, p2); } // 0x891F7D003513A461
static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) { return invoke<BOOL>(0xE4C2B0, p0, maxPlayers); } // 0x58B069A2B3372724
static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xE4C2E0, p0, maxPlayers, p2); } // 0x35628CF57A78C4CD
static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0xE4C320, p0, p1, p2, players, p4); } // 0x26A3263324259353
static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, int players, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xE4C360, p0, p1, players, p3, p4, p5); } // 0x9D1FE8B2049C8437
static BOOL NETWORK_IS_TRANSITION_TO_GAME() { return invoke<BOOL>(0xE4C3B0); } // 0x38D0A140AB80B25C
static int NETWORK_GET_TRANSITION_MEMBERS(Any* data, int dataCount) { return invoke<int>(0xE4C3F0, data, dataCount); } // 0xE82C4DFDE9FB1B8B
static void NETWORK_APPLY_TRANSITION_PARAMETER(int p0, int p1) { invoke<Void>(0xE4C420, p0, p1); } // 0x9B74CCFFA48B4E55
static void NETWORK_APPLY_TRANSITION_PARAMETER_STRING(int p0, const char* string, BOOL p2) { invoke<Void>(0xE4C440, p0, string, p2); } // 0x9F634E841D2FDFE7
static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(Any* gamerHandle, const char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0xE4C470, gamerHandle, p1, p2, p3, p4); } // 0xD13EB0279D039C8B
static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xE4C540, p0); } // 0x3E331587D83F6765
static BOOL NETWORK_IS_TRANSITION_HOST() { return invoke<BOOL>(0xE4C5E0); } // 0xD0A8F3B0E848A00C
static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xE4C610, gamerHandle); } // 0xC8827E144B173DFB
static BOOL NETWORK_GET_TRANSITION_HOST(Any* gamerHandle) { return invoke<BOOL>(0xE4C6C0, gamerHandle); } // 0xE344B3616A2C3592
static BOOL NETWORK_IS_IN_TRANSITION() { return invoke<BOOL>(0xE4C750); } // 0xFFB255D6878CB691
static BOOL NETWORK_IS_TRANSITION_STARTED() { return invoke<BOOL>(0xE4C770); } // 0x46AEFA18F83E2E9B
static BOOL NETWORK_IS_TRANSITION_BUSY() { return invoke<BOOL>(0xE4C790); } // 0xBEBFA329956ABA4C
static BOOL NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<BOOL>(0xE4C7B0); } // 0xF34D7A660FA4A707
static BOOL NETWORK_IS_TRANSITION_LEAVE_POSTPONED() { return invoke<BOOL>(0xE4C7D0); } // 0x3925DD69CFF095F4
static void NETWORK_TRANSITION_SET_IN_PROGRESS(Any p0) { invoke<Void>(0xE4C7F0, p0); } // 0x378AFFC55A6E480C
static void NETWORK_TRANSITION_SET_CONTENT_CREATOR(Any p0) { invoke<Void>(0xE4C820, p0); } // 0xAB1097B46FD0ECE9
static void NETWORK_TRANSITION_SET_ACTIVITY_ISLAND(Any p0) { invoke<Void>(0xE4C840, p0); } // 0x4470407B9FB1A6E0
static void NETWORK_OPEN_TRANSITION_MATCHMAKING() { invoke<Void>(0xE4C870); } // 0x1729D05F2DC94AF9
static void NETWORK_CLOSE_TRANSITION_MATCHMAKING() { invoke<Void>(0xE4C890); } // 0xFC98CB0BBC0A0A7B
static BOOL NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING() { return invoke<BOOL>(0xE4C8B0); } // 0x15968F67A02D1437
static void NETWORK_SET_TRANSITION_VISIBILITY_LOCK(BOOL p0, BOOL p1) { invoke<Void>(0xE4C8E0, p0, p1); } // 0x7C7E0FB84F9E6CEE
static BOOL NETWORK_IS_TRANSITION_VISIBILITY_LOCKED() { return invoke<BOOL>(0xE4C910); } // 0x4AAE1A24667185BB
static void NETWORK_SET_TRANSITION_ACTIVITY_ID(Any p0) { invoke<Void>(0xE4C940, p0); } // 0x55EB8BA1CE3E5D52
static void NETWORK_CHANGE_TRANSITION_SLOTS(Any p0, BOOL p1) { invoke<Void>(0xE4C990, p0, p1); } // 0xE22626CD864678B3
static void NETWORK_TRANSITION_BLOCK_JOIN_REQUESTS(BOOL p0) { invoke<Void>(0xE4C9F0, p0); } // 0x16CB1C9CEF606A50
static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) { return invoke<BOOL>(0xE4CA40, player); } // 0x5CB105D3EB58499C
static BOOL NETWORK_ARE_TRANSITION_DETAILS_VALID(Any p0) { return invoke<BOOL>(0xE4CA90, p0); } // 0xF59281E510228E22
static BOOL NETWORK_JOIN_TRANSITION(Player player) { return invoke<BOOL>(0xE4CAF0, player); } // 0x0B8EB69DE72AD71E
static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xE4CB50, p0); } // 0xD5C2153418DB9348
static BOOL NETWORK_HAS_TRANSITION_INVITE_BEEN_ACKED(Any* p0) { return invoke<BOOL>(0xE4CBE0, p0); } // 0xE9E0BE3414B91F8E
static BOOL NETWORK_IS_ACTIVITY_SESSION() { return invoke<BOOL>(0xE4CC70); } // 0x834C960822A4683F
static void NETWORK_DISABLE_REALTIME_MULTIPLAYER() { invoke<Void>(0xE4CCA0); } // 0xF4DE15907AAE2E3A
static void NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(BOOL toggle) { invoke<Void>(0xE4CCB0, toggle); } // 0x690E83E7292EA12C
static BOOL NETWORK_SEND_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xE4CCE0, gamerHandle, p1, dataCount, p3); } // 0xBB7F9D4FB57B4FFA
static BOOL NETWORK_SEND_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xE4CDB0, gamerHandle, p1, dataCount, p3); } // 0x6651FAED711991F0
static BOOL NETWORK_SEND_IMPORTANT_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xE4CE80, gamerHandle, p1, dataCount, p3); } // 0xA8778038A42EA249
static int NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(int p0) { return invoke<int>(0xE4CF50, p0); } // 0x7F36EF28AE77E331
static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xE4CF80); } // 0xA21ED22C344748B0
static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xE4CFB0, p0); } // 0xA69636D9FC46B96C
static BOOL NETWORK_REMOVE_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xE4CFE0, p0); } // 0x97F5F6E518D1ADB5
static int NETWORK_GET_PRESENCE_INVITE_ID(int p0) { return invoke<int>(0xE4D010, p0); } // 0x08BFCB98CBB3ADB9
static const char* NETWORK_GET_PRESENCE_INVITE_INVITER(int p0) { return invoke<const char*>(0xE4D040, p0); } // 0x4886DE678C2CE4D2
static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0xE4D070, p0, p1); } // 0x9533853565DED3F7
static int NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) { return invoke<int>(0xE4D100, p0); } // 0x32FF25F8A134DEC8
static const char* NETWORK_GET_PRESENCE_INVITE_CONTENT_ID(int p0) { return invoke<const char*>(0xE4D120, p0); } // 0xE533A869F4C34F41
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_LENGTH(int p0) { return invoke<int>(0xE4D150, p0); } // 0x06B43310DD2DEF12
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_CURRENT(int p0) { return invoke<int>(0xE4D180, p0); } // 0x0A9FDF40CD06A05D
static BOOL NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(int p0) { return invoke<BOOL>(0xE4D1B0, p0); } // 0xB73605870CAE4123
static BOOL NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(Any p0) { return invoke<BOOL>(0xE4D1E0, p0); } // 0x5CAC0C9085C92014
static BOOL NETWORK_HAS_FOLLOW_INVITE() { return invoke<BOOL>(0xE4D210); } // 0x6E4D523086634F4B
static BOOL NETWORK_ACTION_FOLLOW_INVITE() { return invoke<BOOL>(0xE4D240); } // 0x9BC1C803BECC2537
static BOOL NETWORK_CLEAR_FOLLOW_INVITE() { return invoke<BOOL>(0xE4D270); } // 0x24F6146DA6B0AD4D
static void NETWORK_REMOVE_AND_CANCEL_ALL_INVITES() { invoke<Void>(0xE4D2A0); } // 0x81C066ED25825D02
static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0xE4D2B0, p0); } // 0x78595F3231E58B25
static void NETWORK_REMOVE_ALL_TRANSITION_INVITE() { invoke<Void>(0xE4D330); } // 0x646B265426E8F86D
static void NETWORK_REMOVE_AND_CANCEL_ALL_TRANSITION_INVITES() { invoke<Void>(0xE4D340); } // 0x75F142E8DF15F74F
static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xE4D350, p0, p1, p2, p3); } // 0xAE84E9DFB523207B
static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0xE4D380, p0); } // 0x0E58BC7A6579889B
static BOOL NETWORK_HAS_MADE_INVITE_DECISION(Any* gamerHandle) { return invoke<BOOL>(0xE4D420, gamerHandle); } // 0xF3AA932723A7168A
static int NETWORK_GET_INVITE_REPLY_STATUS(Any p0) { return invoke<int>(0xE4D4B0, p0); } // 0xEAC3CA6CF6C9EB8C
static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xE4D540, p0); } // 0xAF52AA4A49D4A9B4
static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xE4D5A0, p0); } // 0xF49565F8EDB1A5AF
static void NETWORK_SET_INVITE_ON_CALL_FOR_INVITE_MENU(Any* p0) { invoke<Void>(0xE4D670, p0); } // 0x36BA6B20E222965C
static BOOL NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(int p0, Any* gamerHandle) { return invoke<BOOL>(0xE4D680, p0, gamerHandle); } // 0xA845292976402C0F
static BOOL NETWORK_CHECK_DATA_MANAGER_FOR_HANDLE(Any p0, Any* gamerHandle) { return invoke<BOOL>(0xE4D740, p0, gamerHandle); } // 0x53A0D6983FA95432
static void NETWORK_SET_INVITE_FAILED_MESSAGE_FOR_INVITE_MENU(Any* p0, Any* p1) { invoke<Void>(0xE4D800, p0, p1); } // 0x8EBBDA7981838F74
static BOOL FILLOUT_PM_PLAYER_LIST(Any* gamerHandle, Any p1, Any p2) { return invoke<BOOL>(0xE4D810, gamerHandle, p1, p2); } // 0x403A85E50E14F1BD
static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xE4D840, p0, p1, p2, p3); } // 0xD57BC2EBAE7CB358
static BOOL REFRESH_PLAYER_LIST_STATS(int p0) { return invoke<BOOL>(0xE4D870, p0); } // 0xAD5E28295E97B3FB
static BOOL NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE(Any* p0) { return invoke<BOOL>(0xE4D8A0, p0); } // 0x9215F2CB541DA81C
static BOOL NETWORK_IS_IN_PLATFORM_PARTY() { return invoke<BOOL>(0xE4D950); } // 0x6FE3848CD1092574
static int NETWORK_GET_PLATFORM_PARTY_MEMBER_COUNT() { return invoke<int>(0xE4D970); } // 0x9DC05704C71AF6C5
static int NETWORK_GET_PLATFORM_PARTY_MEMBERS(Any* data, int dataSize) { return invoke<int>(0xE4D990, data, dataSize); } // 0xFFE22E756055DC96
static BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke<BOOL>(0xE4D9C0); } // 0x03D7696E3D331706
static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Any* gamerHandle) { return invoke<BOOL>(0xE4D9E0, gamerHandle); } // 0x8510A5D786F703DC
static BOOL NETWORK_CAN_QUEUE_FOR_PREVIOUS_SESSION_JOIN() { return invoke<BOOL>(0xE4DA60); } // 0xC9C468532694A690
static BOOL NETWORK_IS_QUEUING_FOR_SESSION_JOIN() { return invoke<BOOL>(0xE4DA90); } // 0x4E03BF5175B444A6
static void NETWORK_CLEAR_QUEUED_JOIN_REQUEST() { invoke<Void>(0xE4DAC0); } // 0x6CE421AEDCB62B7E
static void NETWORK_SEND_QUEUED_JOIN_REQUEST() { invoke<Void>(0xE4DAD0); } // 0x2D1FE8FD7BC2BF03
static void NETWORK_REMOVE_ALL_QUEUED_JOIN_REQUESTS() { invoke<Void>(0xE4DAE0); } // 0x180F569AF7F16BB2
static void NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int seed) { invoke<Void>(0xE4DAF0, seed); } // 0xC37AA2604D0B69E8
static int NETWORK_GET_RANDOM_INT() { return invoke<int>(0xE4DB30); } // 0xFBC07BCFFCB8DD9B
static int NETWORK_GET_RANDOM_INT_RANGED(int rangeStart, int rangeEnd) { return invoke<int>(0xE4DB70, rangeStart, rangeEnd); } // 0x5A6DA0A2EEDE8B78
static float _NETWORK_GET_RANDOM_FLOAT_RANGED(float rangeStart, float rangeEnd) { return invoke<float>(0xE4DBD0, rangeStart, rangeEnd); } // 0xDB1A8B701601A206
static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0xE4DC50); } // 0xB10D024D4A098884
static int NETWORK_PLAYER_GET_CHEATER_REASON() { return invoke<int>(0xE4DCA0); } // 0x36D707C40C1DCEB3
static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0xE4DCD0); } // 0x3369879DB5987727
static BOOL REMOTE_CHEATER_PLAYER_DETECTED(Player player, int a, int b) { return invoke<BOOL>(0xE4DD00, player, a, b); } // 0x1CACC0A56175FE7D
static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* gamerHandle, int event, int amountReceived) { return invoke<BOOL>(0xE4DD70, gamerHandle, event, amountReceived); } // 0xC9B8B8CBF4083E0F
static void NETWORK_ADD_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0xE4DE20, modelHash); } // 0x72073521D4ACB83A
static void NETWORK_REMOVE_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0xE4DEA0, modelHash); } // 0x0127914A94E51F42
static void NETWORK_CLEAR_INVALID_OBJECT_MODELS() { invoke<Void>(0xE4DF20); } // 0x5D87EA74A2BF9133
static void NETWORK_APPLY_PED_SCAR_DATA(Ped ped, int p1) { invoke<Void>(0xE4DF40, ped, p1); } // 0xF92FD7949E52DEA2
static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int maxNumMissionParticipants, BOOL p1, int instanceId) { invoke<Void>(0xE4DFA0, maxNumMissionParticipants, p1, instanceId); } // 0xDB2434E51017FFCC
static BOOL NETWORK_TRY_TO_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xE4E010, p0, p1, p2); } // 0x0384E096E4BE6261
static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xE4E0A0); } // 0xE8DB952A4BA8F328
static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke<int>(0xE4E0D0); } // 0x95C7A22DBE7AEF4C
static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0xE4E110); } // 0x7F258099B06D4C7C
static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0xE4E150); } // 0xDFF16B5B12604EFF
static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xE4E170, vars, numVars, debugName); } // 0x6F4A865F87C7A3AD
static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xE4E190, vars, numVars, debugName); } // 0x7B13DC83218D9AF5
static void NETWORK_REGISTER_HIGH_FREQUENCY_HOST_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xE4E1B0, p0, p1, p2); } // 0x2867D5E1AD29963D
static void NETWORK_REGISTER_HIGH_FREQUENCY_PLAYER_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xE4E1D0, p0, p1, p2); } // 0x2F0F5E0292A89B1C
static void NETWORK_FINISH_BROADCASTING_DATA() { invoke<Void>(0xE4E1F0); } // 0x40442590673371C9
static BOOL NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() { return invoke<BOOL>(0xE4E4F0); } // 0x37F4AB46DE999660
static Player NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<Player>(0xE4E510, player); } // 0x4470BE79F5771783
static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0xE4E5E0, index); } // 0x857CA6FCE5E9C84F
static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0xE4E660, ped); } // 0x1C1C92A1CBAE364B
static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xE4E6F0); } // 0x6AC5EDDD33D79407
static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0xE4E710, player); } // 0x89BE185F885B6CD6
static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke<int>(0xE4E770); } // 0xC259E614564DAB8F
static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0xE4E790, p0); } // 0x7206AEB20960CCC8
static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0xE4E7D0, player); } // 0x762604C40829DB72
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player player) { return invoke<BOOL>(0xE4E800, player); } // 0xCCD470854FB0E643
static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0xE4E840); } // 0x93E08E0F531E2C35
static Player NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Player>(0xE4E870); } // 0x48B835569F078653
static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int instance_id, int position_hash) { return invoke<Player>(0xE4E8B0, scriptName, instance_id, position_hash); } // 0xF1A4B8228C5E44B7
static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0xE4E980); } // 0x0A3E878F88F44843
static BOOL NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int instance_id, BOOL p2, int position_hash) { return invoke<BOOL>(0xE4E9B0, scriptName, instance_id, p2, position_hash); } // 0x99F8FC8A6D8E20C0
static BOOL NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Hash scriptHash, int p1, BOOL p2, int p3) { return invoke<BOOL>(0xE4EAC0, scriptHash, p1, p2, p3); } // 0x96B8D4513E0350EC
static BOOL NETWORK_IS_THREAD_A_NETWORK_SCRIPT(int threadId) { return invoke<BOOL>(0xE4EB80, threadId); } // 0x98A7AD360A44F01D
static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(const char* scriptName, int instance_id, int position_hash) { return invoke<int>(0xE4EBD0, scriptName, instance_id, position_hash); } // 0x996932F6DFE01964
static int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() { return invoke<int>(0xE4ECE0); } // 0xF25E5B7C1279A85B
static Hash NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT() { return invoke<Hash>(0xE4ED20); } // 0x4C7F9ACFABADEB9E
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player player, const char* script, int instance_id) { return invoke<BOOL>(0xE4ED60, player, script, instance_id); } // 0xE39406DC2A852B0E
static void NETWORK_PREVENT_SCRIPT_HOST_MIGRATION() { invoke<Void>(0xE4ED90); } // 0x102543889D51BCB6
static void NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT() { invoke<Void>(0xE4EDC0); } // 0x68F69A7905654A16
static Player PARTICIPANT_ID() { return invoke<Player>(0xE4EE10); } // 0x30DE412C1194FCDD
static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0xE4EE40); } // 0xAE032CEDCF23C6D5
static Player NETWORK_GET_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Player>(0xE4EE70, player, weaponHash); } // 0xD109ACB1A444BD9D
static Player NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<Player>(0xE4EEE0, netId, weaponHash); } // 0x7B8DC32252146679
static Player NETWORK_GET_DESTROYER_OF_ENTITY(Entity entity, Hash* weaponHash) { return invoke<Player>(0xE4EF10, entity, weaponHash); } // 0x89DAB370A022F4CC
static BOOL NETWORK_GET_ASSISTED_KILL_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0xE4EF40, player, entity, p2); } // 0x3DC0E2D99138397E
static BOOL NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0xE4EF70, player, entity, p2); } // 0x07DCBF1C62A9C503
static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0xE4EFA0, player, weaponHash); } // 0x630DDB54213C37C8
static void NETWORK_SET_CURRENT_PUBLIC_CONTENT_ID(const char* missionId) { invoke<Void>(0xE4EFD0, missionId); } // 0xF49F5AE96EF1A683
static void NETWORK_SET_CURRENT_CHAT_OPTION(int newChatOption) { invoke<Void>(0xE4F010, newChatOption); } // 0x0B933C101279FCB7
static void NETWORK_SET_CURRENT_SPAWN_LOCATION_OPTION(Hash mpSettingSpawn) { invoke<Void>(0xE4F040, mpSettingSpawn); } // 0xDBCD5F83F8E84B5C
static void NETWORK_SET_VEHICLE_DRIVEN_IN_TEST_DRIVE(BOOL toggle) { invoke<Void>(0xE4F070, toggle); } // 0x028A2896E5EB2CBE
static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, BOOL p4, BOOL changetime, BOOL p6, int p7, int p8) { invoke<Void>(0xE4F0E0, x, y, z, heading, p4, changetime, p6, p7, p8); } // 0xF24C94A1C99DA4AB
static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0xE4F110, time); } // 0xC522FBE9CCC8C20E
static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0xE4F150); } // 0x72096E3388B1352A
static void NETWORK_DISABLE_INVINCIBLE_FLASHING(Player player, BOOL toggle) { invoke<Void>(0xE4F190, player, toggle); } // 0x65EEAD281B3DD2AD
static void NETWORK_PATCH_POST_CUTSCENE_HS4F_TUN_ENT(Ped ped) { invoke<Void>(0xE4F1E0, ped); } // 0xA8A5C2C6069112B4
static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(BOOL toggle) { invoke<Void>(0xE4F240, toggle); } // 0xD187A24F607E4EC1
static BOOL NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity entity) { return invoke<BOOL>(0xE4F280, entity); } // 0x5DAE095398CD3303
static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xE4F2E0, entity); } // 0xEDC5724006650308
static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0xE4F340, netId); } // 0x2D1D65495AECC04F
static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0xE4F380, entity); } // 0xC8D49539708A80B4
static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0xE4F3E0, entity); } // 0xE639563966553FA8
static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { invoke<Void>(0xE4F450, entity); } // 0xAFD7C87C41AEE7E7
static void NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) { invoke<Void>(0xE4F520, entity); } // 0xE34E2B2CD0086B03
static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netId) { return invoke<BOOL>(0xE4F5C0, netId); } // 0x2FC2FDC413532977
static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int netId) { return invoke<BOOL>(0xE4F600, netId); } // 0x93BF17E19A9F0E9B
static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xE4F640, netId); } // 0x460D2A8B2C7DC7D4
static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xE4F6B0, netId); } // 0xEADBDBE0422CF7E6
static BOOL NETWORK_IS_NETWORK_ID_REMOTELY_CONTROLLED(int netId) { return invoke<BOOL>(0xE4F730, netId); } // 0x5766C800B3721367
static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xE4F780, entity); } // 0xF093E270C0B6B318
static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0xE4F7B0, doorID); } // 0xA6C7B9A74A74B015
static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xE4F820, entity); } // 0x1B1A446EFA398EB5
static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0xE4F890, pickup); } // 0x0FB4A5FDA5B2A809
static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Hash doorHash) { return invoke<BOOL>(0xE4F8C0, doorHash); } // 0x05C0E11904FA483A
static BOOL NETWORK_IS_DOOR_NETWORKED(Hash doorHash) { return invoke<BOOL>(0xE4F910, doorHash); } // 0xBC04D336219C5196
static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xE4F950, vehicle); } // 0x913A6486719A87D2
static int PED_TO_NET(Ped ped) { return invoke<int>(0xE4F9B0, ped); } // 0x9F7A52B1537567AC
static int OBJ_TO_NET(Object object) { return invoke<int>(0xE4FA10, object); } // 0x16FE0AE33E462D17
static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0xE4FA70, netHandle); } // 0xE38610F405049F71
static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0xE4FAB0, netHandle); } // 0xC35A3A4C05A4831B
static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xE4FAF0, netHandle); } // 0xAB3646235DE50E93
static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xE4FB30, netHandle); } // 0xF5014688C9788D5F
static void NETWORK_GET_LOCAL_HANDLE(Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FB70, gamerHandle, gamerHandleSize); } // 0x677540FE33795D26
static void NETWORK_HANDLE_FROM_USER_ID(const char* userId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FBB0, userId, gamerHandle, gamerHandleSize); } // 0xF1DAEAF3D760B0ED
static void NETWORK_HANDLE_FROM_MEMBER_ID(const char* memberId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FC30, memberId, gamerHandle, gamerHandleSize); } // 0xD41EE13851E1A5D7
static void NETWORK_HANDLE_FROM_PLAYER(Player player, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FCB0, player, gamerHandle, gamerHandleSize); } // 0x464E131FD68B953F
static Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0xE4FD20, player); } // 0x3351FEF40EC734DB
static Hash NETWORK_HASH_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Hash>(0xE4FD40, gamerHandle); } // 0xA7D865785DB9408A
static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FDF0, friendIndex, gamerHandle, gamerHandleSize); } // 0x1530EB7A9B636789
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* gamerHandle) { return invoke<BOOL>(0xE4FEA0, gamerHandle); } // 0x8F46B8E54248FD48
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0xE4FEB0); } // 0x6B6DB41744C41D5E
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0xE4FEC0); } // 0xA44A2B8A83947D02
static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xE4FED0, gamerHandle); } // 0x6E4BB594E2A075CC
static int NETWORK_DISPLAYNAMES_FROM_HANDLES_START(Any* p0, Any p1) { return invoke<int>(0xE4FF80, p0, p1); } // 0x310461CE0659232F
static int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Any p0, Any p1, Any p2) { return invoke<int>(0xE50080, p0, p1, p2); } // 0xD61DBE5217500D72
static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* gamerHandle1, Any* gamerHandle2) { return invoke<BOOL>(0xE50190, gamerHandle1, gamerHandle2); } // 0xD43ED7463CB7671C
static BOOL NETWORK_IS_HANDLE_VALID(Any* gamerHandle, int gamerHandleSize) { return invoke<BOOL>(0xE50240, gamerHandle, gamerHandleSize); } // 0xA8F635A578C0CE07
static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Player>(0xE50270, gamerHandle); } // 0xA34132DD5D4FE383
static const char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xE502A0, gamerHandle); } // 0x0CA8AE01D86E1FDC
static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* gamerHandle) { return invoke<BOOL>(0xE50330, gamerHandle); } // 0xBE0146369C46314B
static void NETWORK_SHOW_PROFILE_UI(Any* gamerHandle) { invoke<Void>(0xE503C0, gamerHandle); } // 0xAD9DEC6201018EA3
static const char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<const char*>(0xE50430, player); } // 0x4B41F70EA5AA79D4
static const char* NETWORK_PLAYER_GET_USERID(Player player, int* userID) { return invoke<const char*>(0xE504B0, player, userID); } // 0x4DE98A9A01197527
static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0xE504E0, player); } // 0x6BAFBE8178274578
static BOOL NETWORK_PLAYER_INDEX_IS_CHEATER(Player player) { return invoke<BOOL>(0xE50530, player); } // 0x0686D5124777B9BE
static int NETWORK_ENTITY_GET_OBJECT_ID(Entity entity) { return invoke<int>(0xE505B0, entity); } // 0x71698F8AAB574CF7
static Entity NETWORK_GET_ENTITY_FROM_OBJECT_ID(Any p0) { return invoke<Entity>(0xE50620, p0); } // 0x85266061BAF25926
static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0xE50680, p0); } // 0x39C0534F522598C0
static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xE50740); } // 0x93352D3163414D4A
static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xE50750); } // 0xFD8C855412F74D0F
static const char* NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<const char*>(0xE50760, friendIndex); } // 0x5FDC59F83F2D1C9F
static const char* NETWORK_GET_FRIEND_DISPLAY_NAME(int friendIndex) { return invoke<const char*>(0xE507B0, friendIndex); } // 0x6FB5D26E5812C023
static BOOL NETWORK_IS_FRIEND_ONLINE(const char* name) { return invoke<BOOL>(0xE50800, name); } // 0xB8CDCB967533FCB3
static BOOL NETWORK_IS_FRIEND_HANDLE_ONLINE(Any* gamerHandle) { return invoke<BOOL>(0xE50850, gamerHandle); } // 0x484CF81C32C3D413
static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(const char* friendName) { return invoke<BOOL>(0xE50880, friendName); } // 0x68809A66A3FB7B8F
static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(const char* friendName) { return invoke<BOOL>(0xE50900, friendName); } // 0x116CDE00FC231A4B
static BOOL NETWORK_IS_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0xE50950, gamerHandle); } // 0xEDD63461767A518C
static BOOL NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<BOOL>(0xE509E0, p0); } // 0x8353648A58677B60
static BOOL NETWORK_IS_ADDING_FRIEND() { return invoke<BOOL>(0xE509F0); } // 0xD731E73BAE356976
static BOOL NETWORK_ADD_FRIEND(Any* gamerHandle, const char* message) { return invoke<BOOL>(0xE50A10, gamerHandle, message); } // 0x454174F8A9B8D8A1
static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0xE50AA0, friendIndex); } // 0x5679681143C10F0A
static void NETWORK_SET_PLAYER_IS_PASSIVE(BOOL toggle) { invoke<Void>(0xE50AF0, toggle); } // 0x08C2ACB534243279
static BOOL NETWORK_GET_PLAYER_OWNS_WAYPOINT(Player player) { return invoke<BOOL>(0xE50B40, player); } // 0xB039D40188E991D1
static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xE50BA0); } // 0xA610A20639713DEA
static void NETWORK_IGNORE_REMOTE_WAYPOINTS() { invoke<Void>(0xE50BD0); } // 0xE30EF2DB0A0576B4
static BOOL NETWORK_IS_PLAYER_ON_BLOCKLIST(Any* gamerHandle) { return invoke<BOOL>(0xE50E10, gamerHandle); } // 0xF3BBE5935A04D276
static BOOL NETWORK_SET_SCRIPT_AUTOMUTED(Any p0) { return invoke<BOOL>(0xE50E90, p0); } // 0x89C96510735202D2
static BOOL NETWORK_HAS_AUTOMUTE_OVERRIDE() { return invoke<BOOL>(0xE50EB0); } // 0xB75567FBC57302E6
static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0xE50EE0); } // 0x473AAB3F1DA97144
static void NETWORK_SET_LOOK_AT_TALKERS(BOOL p0) { invoke<Void>(0xE50F20, p0); } // 0xB85BAB4E28676C4D
static BOOL NETWORK_IS_PUSH_TO_TALK_ACTIVE() { return invoke<BOOL>(0xE50F40); } // 0x00C58A2B1D95D090
static BOOL NETWORK_GAMER_HAS_HEADSET(Any* gamerHandle) { return invoke<BOOL>(0xE50F60, gamerHandle); } // 0xC5687BF1EB7AC190
static BOOL NETWORK_IS_GAMER_TALKING(Any* gamerHandle) { return invoke<BOOL>(0xE50FF0, gamerHandle); } // 0x6E171E077926FBF7
static BOOL NETWORK_PERMISSIONS_HAS_GAMER_RECORD(Any* gamerHandle) { return invoke<BOOL>(0xE51020, gamerHandle); } // 0xC9AFD0C222C7CA74
static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE510B0, gamerHandle); } // 0xC9D8BDF3564325CA
static BOOL NETWORK_CAN_TEXT_CHAT_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE51150, gamerHandle); } // 0x6404C6D45C897433
static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xE511E0, gamerHandle); } // 0x73038C255039CB0A
static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE51270, gamerHandle); } // 0xD948F622B2C316C0
static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xE51300, gamerHandle); } // 0x4BD40114338C93C0
static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE51390, gamerHandle); } // 0x48888A41791BFEF1
static BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT(Any* gamerHandle) { return invoke<BOOL>(0xE51420, gamerHandle); } // 0x8EF8E27D73EB5271
static BOOL NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(Any* gamerHandle) { return invoke<BOOL>(0xE514B0, gamerHandle); } // 0x585FB8B7945FC92A
static BOOL NETWORK_CAN_PLAY_MULTIPLAYER_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE515D0, gamerHandle); } // 0x5CE1DEFE2CD68587
static BOOL NETWORK_CAN_GAMER_PLAY_MULTIPLAYER_WITH_ME(Any* gamerHandle) { return invoke<BOOL>(0xE51660, gamerHandle); } // 0x212E8A037E68E81C
static BOOL NETWORK_CAN_SEND_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0xE516F0, gamerHandle); } // 0x75AC04DC09B758E5
static BOOL NETWORK_CAN_RECEIVE_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0xE51770, gamerHandle); } // 0x2879B51C18AEF948
static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0xE51800, player); } // 0x51DC6104DE62EE22
static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0xE51860, player); } // 0xF060DE6D44C11C50
static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0xE518C0, player); } // 0x9F1D63C7BDCDFBC5
static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0xE51920, player); } // 0xDCEC24AE33904F8D
static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0xE51980, player); } // 0xF3BBDC6EE4727F8B
static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0xE519E0, player); } // 0x37B71363FBA86179
static float NETWORK_GET_PLAYER_LOUDNESS(Player player) { return invoke<float>(0xE51A40, player); } // 0xF2B38A65CE1CD227
static void NETWORK_SET_TALKER_PROXIMITY(float value) { invoke<Void>(0xE51AA0, value); } // 0x1D9E253CF963B125
static float NETWORK_GET_TALKER_PROXIMITY() { return invoke<float>(0xE51AC0); } // 0xA928AA924B7E3EE2
static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0xE51AF0, toggle); } // 0x4314716E4B544721
static void NETWORK_REMAIN_IN_GAME_CHAT(BOOL p0) { invoke<Void>(0xE51B10, p0); } // 0x270D952336FB6142
static void NETWORK_OVERRIDE_TRANSITION_CHAT(BOOL p0) { invoke<Void>(0xE51B30, p0); } // 0xDF204CDF19B1E09E
static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0xE51B50, toggle); } // 0x26E61E347F8C2FB5
static void NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(Any p0) { invoke<Void>(0xE51B70, p0); } // 0x2918CC9062732BC6
static BOOL NETWORK_SET_SAME_TEAM_AS_LOCAL_PLAYER(Any p0, Any p1) { return invoke<BOOL>(0xE51B80, p0, p1); } // 0xF97151502670C015
static void NETWORK_OVERRIDE_TEAM_RESTRICTIONS(int team, BOOL toggle) { invoke<Void>(0xE51B90, team, toggle); } // 0x2EBB17A226639CE0
static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xE51BC0, toggle); } // 0x3D203A4099538B41
static void NETWORK_SET_OVERRIDE_TUTORIAL_SESSION_CHAT(BOOL toggle) { invoke<Void>(0xE51BE0, toggle); } // 0x13D997FE205FD704
static void NETWORK_SET_PROXIMITY_AFFECTS_TEAM(BOOL toggle) { invoke<Void>(0xE51C00, toggle); } // 0x725A501C189FDB29
static void NETWORK_SET_NO_SPECTATOR_CHAT(BOOL toggle) { invoke<Void>(0xE51C20, toggle); } // 0x651F95F7EDE35255
static void NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(BOOL toggle) { invoke<Void>(0xE51C40, toggle); } // 0xDB9D60DE4E690B9C
static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xE51C60, player, toggle); } // 0x38C14A8B378CBD7B
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xE51CC0, player, toggle); } // 0x7453501DC1481684
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xE51CF0, toggle); } // 0xF2EE6216DEB74ACC
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xE51D10, player, toggle); } // 0x7EDC844C6CEBFEB8
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xE51D40, toggle); } // 0x8D163415FF0DAFC3
static void NETWORK_SET_VOICE_CHANNEL(int channel) { invoke<Void>(0xE51D60, channel); } // 0xD80197DCA1803BB2
static void NETWORK_CLEAR_VOICE_CHANNEL() { invoke<Void>(0xE51DB0); } // 0x12761B3B63D726C3
static void NETWORK_APPLY_VOICE_PROXIMITY_OVERRIDE(float x, float y, float z) { invoke<Void>(0xE51DE0, x, y, z); } // 0x1DF2F4D8E7C2CD47
static void NETWORK_CLEAR_VOICE_PROXIMITY_OVERRIDE() { invoke<Void>(0xE51E70); } // 0x25290320BF2D9807
static void NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xE51EA0, player); } // 0x6F146BCF099DE910
static void NETWORK_DISABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xE51F00, player); } // 0x139268884A0795C9
static void NETWORK_GET_MUTE_COUNT_FOR_PLAYER(Player p0, float* p1, float* p2) { invoke<Void>(0xE51F60, p0, p1, p2); } // 0x43D614D95E50418D
static void NETWORK_SET_SPECTATOR_TO_NON_SPECTATOR_TEXT_CHAT(BOOL toggle) { invoke<Void>(0xE51FB0, toggle); } // 0xA25C1B5218833F4E
static BOOL NETWORK_TEXT_CHAT_IS_TYPING() { return invoke<BOOL>(0xE51FC0); } // 0xA43CD45F18522E3F
static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0xE51FD0); } // 0x597D3F733B15F96E
static BOOL SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE() { return invoke<BOOL>(0xE51FF0); } // 0xC41B72952BCE3731
static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0xE52030, toggle); } // 0x6106E62525304863
static void NETWORK_SET_RICH_PRESENCE(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xE52050, p0, p1, p2, p3); } // 0x012C74D626CB4559
static void NETWORK_SET_RICH_PRESENCE_STRING(int p0, const char* textLabel) { invoke<Void>(0xE52060, p0, textLabel); } // 0x5F974E79EAE32BE7
static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0xE52070); } // 0x6145620349FC9F57
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_WARP(Player player, float x, float y, float z, BOOL p4, BOOL p5) { invoke<Void>(0xE52090, player, x, y, z, p4, p5); } // 0x520FABA37BE687A7
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Player player, BOOL p1) { invoke<Void>(0xE520C0, player, p1); } // 0xBD9FF88287E84727
static void REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(Entity entity, Ped ped) { invoke<Void>(0xE520E0, entity, ped); } // 0xFF71621A8661D34F
static void NETWORK_KEEP_ENTITY_COLLISION_DISABLED_AFTER_ANIM_SCENE(Any p0, Any p1) { invoke<Void>(0xE52170, p0, p1); } // 0x69BED8420A766753
static BOOL NETWORK_IS_ANY_PLAYER_NEAR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0xE521E0, p0, p1, p2, p3, p4, p5, p6); } // 0x0955C6F927712241
static BOOL NETWORK_CLAN_SERVICE_IS_VALID() { return invoke<BOOL>(0xE52220); } // 0x7260716F2E4D7661
static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(Any* gamerHandle) { return invoke<BOOL>(0xE52250, gamerHandle); } // 0xE582BF3EDDBB1A68
static BOOL NETWORK_CLAN_PLAYER_GET_DESC(Any* clanDesc, int bufferSize, Any* gamerHandle) { return invoke<BOOL>(0xE52300, clanDesc, bufferSize, gamerHandle); } // 0xC07B1AA6155EC337
static BOOL NETWORK_CLAN_IS_ROCKSTAR_CLAN(Any* clanDesc, int bufferSize) { return invoke<BOOL>(0xE52330, clanDesc, bufferSize); } // 0xF05A19B508A1ECF0
static void NETWORK_CLAN_GET_UI_FORMATTED_TAG(Any* clanDesc, int bufferSize, char* formattedTag) { invoke<Void>(0xE52370, clanDesc, bufferSize, formattedTag); } // 0x29B9959EF2236634
static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke<int>(0xE523F0); } // 0xAB468D6C5C0FC4AF
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* memberDesc, int p1) { return invoke<BOOL>(0xE52420, memberDesc, p1); } // 0xDF6959109D35BAAB
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* gamerHandle) { return invoke<BOOL>(0xE52450, gamerHandle); } // 0x5A748C59E0807FB6
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0xE52480, p0); } // 0x1B9836D5F27EFE57
static BOOL NETWORK_CLAN_ANY_DOWNLOAD_MEMBERSHIP_PENDING() { return invoke<BOOL>(0xE524B0); } // 0xD0E82DF28BBDFA90
static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int* p0) { return invoke<BOOL>(0xE52500, p0); } // 0xBC8E0392E851E2B8
static int NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int* p0) { return invoke<int>(0xE52530, p0); } // 0x6CC5D49F92B6055B
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(int* p0, Any p1) { return invoke<BOOL>(0xE52560, p0, p1); } // 0x0E4DC83CCE846C81
static BOOL NETWORK_CLAN_GET_MEMBERSHIP(int* p0, Any* clanMembership, int p2) { return invoke<BOOL>(0xE52590, p0, clanMembership, p2); } // 0xC044D4B0F1BFE812
static BOOL NETWORK_CLAN_JOIN(int clanDesc) { return invoke<BOOL>(0xE525C0, clanDesc); } // 0xA360DA3480F0FFB9
static BOOL NETWORK_CLAN_CREWINFO_GET_STRING_VALUE(const char* animDict, const char* animName) { return invoke<BOOL>(0xE525F0, animDict, animName); } // 0xB22FD03174DE49A7
static BOOL NETWORK_CLAN_CREWINFO_GET_CREWRANKTITLE(int p0, const char* p1) { return invoke<BOOL>(0xE52640, p0, p1); } // 0xD0C87974FE71F8C4
static BOOL NETWORK_CLAN_HAS_CREWINFO_METADATA_BEEN_RECEIVED() { return invoke<BOOL>(0xE52690); } // 0x0ED0FE8A62C2CBE6
static BOOL NETWORK_CLAN_GET_EMBLEM_TXD_NAME(Any* netHandle, char* txdName) { return invoke<BOOL>(0xE526D0, netHandle, txdName); } // 0xE460920F3D75C34D
static BOOL NETWORK_CLAN_REQUEST_EMBLEM(Any p0) { return invoke<BOOL>(0xE52700, p0); } // 0xC8FEAF9D86CA72E6
static BOOL NETWORK_CLAN_IS_EMBLEM_READY(Any p0, Any* p1) { return invoke<BOOL>(0xE52730, p0, p1); } // 0xAE4A8E8C58358A87
static void NETWORK_CLAN_RELEASE_EMBLEM(Any p0) { invoke<Void>(0xE527E0, p0); } // 0x84B5F8F55152B935
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<BOOL>(0xE52880); } // 0x96B33F4FC167DB47
static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { invoke<Void>(0xE528A0); } // 0xFAE42E9AE7B80A4C
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xE528C0, p0, p1); } // 0xAC93CF5F25CF17A8
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<BOOL>(0xE528F0); } // 0x51BEADCE3428DB6F
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<BOOL>(0xE52910); } // 0xCE1D2FC338EEA6AA
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xE52930, p0, p1); } // 0x2C34F64CC58753D7
static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) { invoke<Void>(0xE52960, netId, toggle); } // 0x8FC511FC963C67E5
static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0xE52980, netId, toggle); } // 0x3C1752E361ED8FC9
static void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int netId, Player player, BOOL toggle) { invoke<Void>(0xE529A0, netId, player, toggle); } // 0x4C48F052678AA7EF
static void SET_NETWORK_ID_CAN_BE_REASSIGNED(int netId, BOOL toggle) { invoke<Void>(0xE529C0, netId, toggle); } // 0xF63E001A5DB10361
static void NETWORK_SET_ENTITY_CAN_BLEND(Entity entity, BOOL toggle) { invoke<Void>(0xE529E0, entity, toggle); } // 0xA7B045B3F131EA0F
static void NETWORK_SET_OBJECT_CAN_BLEND_WHEN_FIXED(Object object, BOOL toggle) { invoke<Void>(0xE52A40, object, toggle); } // 0x40B679A9143C1CE0
static void NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0xE52AB0, entity, toggle); } // 0x32C336953C18A3CE
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xE52B30, netId, p1, p2); } // 0xEC34E75BDB02A4C6
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_HACK(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xE52B50, netId, p1, p2); } // 0x22CE5B137F505B14
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Any p0, Any p1) { invoke<Void>(0xE52B70, p0, p1); } // 0x82EDE1ECB3BF1ADF
static void SET_NETWORK_CUTSCENE_ENTITIES(BOOL toggle) { invoke<Void>(0xE52B90, toggle); } // 0x6ABC02CAFE92B58C
static BOOL ARE_CUTSCENE_ENTITIES_NETWORKED() { return invoke<BOOL>(0xE52BB0); } // 0x2E0CDDCB2AD38385
static void SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(int netId, BOOL state) { invoke<Void>(0xE52BC0, netId, state); } // 0xD8347AAB0A3EF3A0
static BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int netId) { return invoke<BOOL>(0xE52C60, netId); } // 0xB0AB1F334666E337
static void SET_REMOTE_PLAYER_VISIBLE_IN_CUTSCENE(Player player, BOOL locallyVisible) { invoke<Void>(0xE52C90, player, locallyVisible); } // 0x57F9D4E3B420366E
static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xE52D00, p0, p1); } // 0x61780C0351CEFAD1
static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52D80, bIncludePlayersVehicle); } // 0x2E99083F03611030
static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52E20, bIncludePlayersVehicle); } // 0xA6DFB7FC64F53E33
static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52EC0, player, bIncludePlayersVehicle); } // 0x903DAFB544C5CA0D
static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52F60, player, bIncludePlayersVehicle); } // 0x8DDE9E4E8A102CD9
static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0xE53010, p0); } // 0x6E2FA5434737D22F
static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) { invoke<Void>(0xE53090, entity, normal, slow); } // 0x091AB029AFE429F2
static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state, Any p2) { invoke<Void>(0xE530B0, entity, state, p2); } // 0x6EF982A39E8D08FA
static BOOL NETWORK_IS_PLAYER_FADING(Player player) { return invoke<BOOL>(0xE530D0, player); } // 0xCF580EB76CEC15FD
static BOOL NETWORK_IS_ENTITY_FADING(Entity entity) { return invoke<BOOL>(0xE53150, entity); } // 0x6BF8FE9F26BBABDE
static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0xE531D0, player); } // 0xF4102A2D0D824EC3
static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE53230, p0, p1, p2); } // 0xE6E7B0D0E904CA62
static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0xE532E0, entity); } // 0xA612CEAF809E9032
static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0xE53340, entity); } // 0x158E535F1DD78CFE
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0xE533B0, netID); } // 0x03A6DAAE139DC9E9
static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL toggle) { invoke<Void>(0xE533E0, netID, toggle); } // 0x7B95E064D91BFE49
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_PLAYER(Player player) { return invoke<BOOL>(0xE53400, player); } // 0xE29ED67EC061E70B
static void ACTIVATE_DAMAGE_TRACKER_ON_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xE53470, player, toggle); } // 0xEB41AFC8A3FF370B
static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xE534F0, p0, p1, p2, p3); } // 0x809E97B5B52A6418
static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xE53590, p0, p1, p2, p3, p4); } // 0x267FC71D3F0D131A
static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xE53650, amount); } // 0xB7F37A0A1E8A175E
static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xE53660, amount); } // 0x17C7D9B3979F5759
static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xE53670, amount); } // 0x552B3BADB43FF551
static void RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xE53680, amount); } // 0x99C26F3C23B37F42
static void RESERVE_LOCAL_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xE53690, amount); } // 0x7E46D691B4F4B711
static void RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xE536A0, amount); } // 0x593FDB07AF52E85D
static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0xE536B0, amount); } // 0x78D35ABAF71764AD
static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0xE53730, amount); } // 0xADCE9BCAFCB83364
static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0xE537B0, amount); } // 0x2E9F58AD6FE93DFF
static BOOL CAN_REGISTER_MISSION_PICKUPS(int amount) { return invoke<BOOL>(0xE53850, amount); } // 0xF95A1422CB355630
static BOOL CAN_REGISTER_MISSION_DOORS(Any p0) { return invoke<BOOL>(0xE538D0, p0); } // 0x0F7BCDD970AAA9B9
static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0xE53920, ped_amt, vehicle_amt, object_amt, pickup_amt); } // 0x4D64DFA5BE3B2871
static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0, Any p1) { return invoke<int>(0xE53A00, p0, p1); } // 0xD1797191721E17CE
static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0, Any p1) { return invoke<int>(0xE53AC0, p0, p1); } // 0xA0522491D076C1E6
static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0, Any p1) { return invoke<int>(0xE53B80, p0, p1); } // 0xF46F370442FAD8F9
static int GET_NUM_CREATED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xE53C40, p0); } // 0xD1C2A76DD73A4387
static int GET_NUM_CREATED_MISSION_PEDS(BOOL p0) { return invoke<int>(0xE53CC0, p0); } // 0x594FD1B13DCC309E
static int GET_NUM_CREATED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0xE53D40, p0); } // 0x92D994BC2EF590F9
static void GET_RESERVED_MISSION_ENTITIES_IN_AREA(float x, float y, float z, Any p3, Any* out1, Any* out2, Any* out3) { invoke<Void>(0xE53DC0, x, y, z, p3, out1, out2, out3); } // 0x1B402403FBCD3843
static int GET_MAX_NUM_NETWORK_OBJECTS() { return invoke<int>(0xE53EC0); } // 0x2E63B6CC2AFB0B51
static int GET_MAX_NUM_NETWORK_PEDS() { return invoke<int>(0xE53ED0); } // 0x76C7AF1F094891FC
static int GET_MAX_NUM_NETWORK_VEHICLES() { return invoke<int>(0xE53EE0); } // 0xD544869339AEE474
static int GET_MAX_NUM_NETWORK_PICKUPS() { return invoke<int>(0xE53EF0); } // 0x90F32A57D0D76E38
static void NETWORK_SET_OBJECT_SCOPE_DISTANCE(Object object, float range) { invoke<Void>(0xE53F00, object, range); } // 0x9059372A0C629EB6
static void NETWORK_ALLOW_CLONING_WHILE_IN_TUTORIAL(Any p0, Any p1) { invoke<Void>(0xE53F60, p0, p1); } // 0x7280E2724C43179B
static void NETWORK_SET_TASK_CUTSCENE_INSCOPE_MULTIPLER(Any p0) { invoke<Void>(0xE53FE0, p0); } // 0x44EF980B0D19828F
static int GET_NETWORK_TIME() { return invoke<int>(0xE540D0); } // 0x7E3F74F641EE6B27
static int GET_NETWORK_TIME_ACCURATE() { return invoke<int>(0xE54130); } // 0x0728E77B2BF91D54
static BOOL HAS_NETWORK_TIME_STARTED() { return invoke<BOOL>(0xE541C0); } // 0x8FE5240A69F17DF8
static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0xE541F0, timeA, timeB); } // 0xAD5B43C219C4CB92
static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0xE54200, timeA, timeB); } // 0xC9FA0059132D5731
static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0xE54220, timeA, timeB); } // 0xDBA141080166EAA2
static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xE54240, timeA, timeB); } // 0xCFF17EF1F3F6FF43
static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0xE54260, timeA, timeB); } // 0x775142054EC39277
static const char* GET_TIME_AS_STRING(int time) { return invoke<const char*>(0xE54270, time); } // 0xF55707B152A1A749
static const char* GET_CLOUD_TIME_AS_STRING() { return invoke<const char*>(0xE54380); } // 0x9D75306730D4D730
static int GET_CLOUD_TIME_AS_INT() { return invoke<int>(0xE543C0); } // 0x39D1D336459711BE
static void CONVERT_POSIX_TIME(int posixTime, Any* timeStructure) { invoke<Void>(0xE543E0, posixTime, timeStructure); } // 0xB2D05034AF8E75CF
static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { invoke<Void>(0xE54480, toggle, playerPed); } // 0xF11FEC6A04FD7226
static void NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(BOOL toggle, Ped playerPed, BOOL p2) { invoke<Void>(0xE544F0, toggle, playerPed, p2); } // 0x522EF6D7B4059F2C
static void NETWORK_SET_IN_FREE_CAM_MODE(BOOL toggle) { invoke<Void>(0xE54560, toggle); } // 0x0A83667A5D36A4FF
static void NETWORK_SET_ANTAGONISTIC_TO_PLAYER(BOOL toggle, Player player) { invoke<Void>(0xE545B0, toggle, player); } // 0x04D8F5CAFCB48E24
static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0xE54600); } // 0xAD15761928FCF79C
static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xE54620, p0, p1); } // 0x42B4970D598C8A72
static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0xE54650); } // 0x0721B5D4CF3ACD02
static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0xE54660, player); } // 0xD65DFBCD23E76428
static void NETWORK_HIDE_PROJECTILE_IN_CUTSCENE() { invoke<Void>(0xE546B0); } // 0xCBF07B57F6F01E05
static void SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time, Any p2, Any p3) { invoke<Void>(0xE546C0, netId, time, p2, p3); } // 0x48E5EEFE68D01C56
static BOOL IS_NETWORK_VEHICLE_RUNNING_RESPOT_TIMER(int networkID) { return invoke<BOOL>(0xE54730, networkID); } // 0x353A36B4FAA1F9D2
static void SET_NETWORK_VEHICLE_AS_GHOST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE54780, vehicle, toggle); } // 0x67697883F8C7E424
static void SET_NETWORK_VEHICLE_MAX_POSITION_DELTA_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xE547E0, vehicle, multiplier); } // 0x8526C06631BA8A87
static void SET_NETWORK_ENABLE_HIGH_SPEED_EDGE_FALL_DETECTION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE548B0, vehicle, toggle); } // 0x8810DE004A94F18B
static void SET_LOCAL_PLAYER_AS_GHOST(BOOL toggle, BOOL p1) { invoke<Void>(0xE54970, toggle, p1); } // 0x3DDE6E86B8024EEE
static BOOL IS_ENTITY_A_GHOST(Entity entity) { return invoke<BOOL>(0xE54990, entity); } // 0xF073EDDFCBA082E6
static void SET_NON_PARTICIPANTS_OF_THIS_SCRIPT_AS_GHOSTS(BOOL p0) { invoke<Void>(0xE54A00, p0); } // 0x3EE3EB731E022D41
static void SET_REMOTE_PLAYER_AS_GHOST(Player player, BOOL p1) { invoke<Void>(0xE54A70, player, p1); } // 0xBF798C4E54C2B4E1
static void SET_GHOST_ALPHA(int alpha) { invoke<Void>(0xE54B20, alpha); } // 0x4F1FE21A5BE23982
static void RESET_GHOST_ALPHA() { invoke<Void>(0xE54BB0); } // 0x1D6800242F1593FB
static void SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(Entity entity, BOOL toggle) { invoke<Void>(0xE54BC0, entity, toggle); } // 0x52C980E21BCCC469
static void SET_INVERT_GHOSTING(BOOL p0) { invoke<Void>(0xE54C30, p0); } // 0xC21CAB69B42AB890
static BOOL IS_ENTITY_IN_GHOST_COLLISION(Entity entity) { return invoke<BOOL>(0xE54CC0, entity); } // 0x73DB31FD24210A89
static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0xE54DF0, toggle); } // 0x5F27287D37B4D40D
static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int rotationOrder, BOOL useOcclusionPortal, BOOL looped, float p9, float animTime, float p11) { return invoke<int>(0xE54E10, x, y, z, xRot, yRot, zRot, rotationOrder, useOcclusionPortal, looped, p9, animTime, p11); } // 0xBC5D9A293974F095
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, const char* animDict, const char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0xE54E60, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); } // 0x0B94AB707B44E754
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE_WITH_IK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xE54F40, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xB81F209A2A150B89
static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag) { invoke<Void>(0xE55020, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); } // 0xDEE175A01A05A2F7
static void NETWORK_ADD_MAP_ENTITY_TO_SYNCHRONISED_SCENE(int netScene, Hash modelHash, float x, float y, float z, float p5, const char* p6, float p7, float p8, int flags) { invoke<Void>(0xE550E0, netScene, modelHash, x, y, z, p5, p6, p7, p8, flags); } // 0xA78D3770EC931263
static void NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(int netScene, const char* animDict, const char* animName) { invoke<Void>(0xE55160, netScene, animDict, animName); } // 0x9E6111F1B7E0986E
static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { invoke<Void>(0xE551E0, netScene, entity, bone); } // 0x5B2134752B0D9E36
static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xE552A0, netScene); } // 0xE7101255AD6F1952
static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xE55310, netScene); } // 0xF2E51EC84D76A2B6
static int NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(int netId) { return invoke<int>(0xE55380, netId); } // 0x643DC062EE904FCA
static void NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(int netScene) { invoke<Void>(0xE553C0, netScene); } // 0xB505DDE34E5179B8
static void NETWORK_ALLOW_REMOTE_SYNCED_SCENE_LOCAL_PLAYER_REQUESTS(Any p0) { invoke<Void>(0xE55430, p0); } // 0x5B051FA78EA5C170
static BOOL NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(int p0, Any p1) { return invoke<BOOL>(0xE55460, p0, p1); } // 0x644DD5C4A28FAEF3
static BOOL NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(Player player, float x, float y, float z, float radius, float p5, float p6, float p7, int flags) { return invoke<BOOL>(0xE554D0, player, x, y, z, radius, p5, p6, p7, flags); } // 0x4249B4032FDD750E
static BOOL NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(Player player, float x1, float y1, float z1, float x2, float y2, float z2, float width, float p8, float p9, float p10, int flags) { return invoke<BOOL>(0xE55510, player, x1, y1, z1, x2, y2, z2, width, p8, p9, p10, flags); } // 0x243CFDECC076762E
static int NETWORK_QUERY_RESPAWN_RESULTS(Any* p0) { return invoke<int>(0xE55550, p0); } // 0xC86D271C3C15DE36
static void NETWORK_CANCEL_RESPAWN_SEARCH() { invoke<Void>(0xE555B0); } // 0xAE83F6C70E4B78E3
static void NETWORK_GET_RESPAWN_RESULT(int randomInt, Vector3* coordinates, float* heading) { invoke<Void>(0xE555C0, randomInt, coordinates, heading); } // 0x308E9BE8B02DA53E
static int NETWORK_GET_RESPAWN_RESULT_FLAGS(int p0) { return invoke<int>(0xE55630, p0); } // 0xD47DD48CBAF4A6B5
static void NETWORK_START_SOLO_TUTORIAL_SESSION() { invoke<Void>(0xE55650); } // 0xD2788BE0DF3E0C9B
static void NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(int teamId, int instanceId) { invoke<Void>(0xE55680, teamId, instanceId); } // 0x5147DD7078544AD1
static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xE556D0); } // 0x5A80107016E75ABC
static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<BOOL>(0xE55700); } // 0xF859473E4AD09F30
static BOOL NETWORK_WAITING_POP_CLEAR_TUTORIAL_SESSION() { return invoke<BOOL>(0xE55740); } // 0xE794EA31F030A1D1
static BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke<BOOL>(0xE55780); } // 0x6457A0C458E98FFB
static int NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Player player) { return invoke<int>(0xE557C0, player); } // 0x69617275A0B1B72D
static BOOL NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Player player, int index) { return invoke<BOOL>(0xE55810, player, index); } // 0xDFAE61B1AEF262C2
static void NETWORK_BLOCK_PROXY_MIGRATION_BETWEEN_TUTORIAL_SESSIONS(Any p0) { invoke<Void>(0xE55870, p0); } // 0xD91B1F4829299334
static void NETWORK_CONCEAL_PLAYER(Player player, BOOL toggle, BOOL p2) { invoke<Void>(0xE558A0, player, toggle, p2); } // 0xA1D021917F4E3FBD
static BOOL NETWORK_IS_PLAYER_CONCEALED(Player player) { return invoke<BOOL>(0xE558F0, player); } // 0xF40724C1181481F4
static void NETWORK_CONCEAL_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xE55940, entity, toggle); } // 0x63FC4C73448FCEA2
static BOOL NETWORK_IS_ENTITY_CONCEALED(Entity entity) { return invoke<BOOL>(0xE559B0, entity); } // 0xFFE66020A6507F47
static void NETWORK_OVERRIDE_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xE55A20, hours, minutes, seconds); } // 0xAFD3BC0F6EBB5474
static void NETWORK_OVERRIDE_CLOCK_RATE(int ms) { invoke<Void>(0xE55A40, ms); } // 0x2B7C09622E980A72
static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<Void>(0xE55A50); } // 0x99599AE2C0FDB2A1
static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0xE55AD0); } // 0x75193D36C5FA4721
static int NETWORK_ADD_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE55AF0, x1, y1, z1, x2, y2, z2); } // 0x132F0517E3CE528A
static int NETWORK_ADD_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xE55B20, x1, y1, z1, x2, y2, z2, width); } // 0x3E1222B4C1E92A7A
static int NETWORK_ADD_CLIENT_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE55B50, x1, y1, z1, x2, y2, z2); } // 0xE5870024C848E72D
static int NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<int>(0xE55B80, x1, y1, z1, x2, y2, z2, radius); } // 0x48FE6369FE249FD2
static BOOL NETWORK_REMOVE_ENTITY_AREA(int areaHandle) { return invoke<BOOL>(0xE55BB0, areaHandle); } // 0x0C2A05549FF0EB55
static BOOL NETWORK_ENTITY_AREA_DOES_EXIST(int areaHandle) { return invoke<BOOL>(0xE55CB0, areaHandle); } // 0x8256312AC2E5471D
static BOOL NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(int areaHandle) { return invoke<BOOL>(0xE55CE0, areaHandle); } // 0x31B34E18DE46CC94
static BOOL NETWORK_ENTITY_AREA_IS_OCCUPIED(int areaHandle) { return invoke<BOOL>(0xE55D10, areaHandle); } // 0xF8EEEE15D7483100
static void NETWORK_USE_HIGH_PRECISION_BLENDING(int netID, BOOL toggle) { invoke<Void>(0xE55D40, netID, toggle); } // 0x6CBA9D07DDF3A4F4
static void NETWORK_SET_CUSTOM_ARENA_BALL_PARAMS(int netId) { invoke<Void>(0xE55DA0, netId); } // 0xDB3FE51DA96E8CCA
static void NETWORK_ENTITY_USE_HIGH_PRECISION_ROTATION(int netId, BOOL toggle) { invoke<Void>(0xE55E00, netId, toggle); } // 0xB0D23E19A23DCAAF
static BOOL NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() { return invoke<BOOL>(0xE55E60); } // 0x099F525995A2FD5E
static BOOL NETWORK_IS_CLOUD_BACKGROUND_SCRIPT_REQUEST_PENDING() { return invoke<BOOL>(0xE55E90); } // 0x3B952A9A844B63C6
static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<Void>(0xE55EC0); } // 0xC192DFBBB8B81D26
static BOOL NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING() { return invoke<BOOL>(0xE55ED0); } // 0x1DD7AFEBE9FED010
static int NETWORK_GET_TUNABLE_CLOUD_CRC() { return invoke<int>(0xE55F00); } // 0x0188C088397FF5B1
static BOOL NETWORK_DOES_TUNABLE_EXIST(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xE561B0, tunableContext, tunableName); } // 0x1E8E83ADEA1A71BE
static BOOL NETWORK_ACCESS_TUNABLE_INT(const char* tunableContext, const char* tunableName, int* value) { return invoke<BOOL>(0xE56220, tunableContext, tunableName, value); } // 0xBB4032866B475D96
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(const char* tunableContext, const char* tunableName, float* value) { return invoke<BOOL>(0xE562A0, tunableContext, tunableName, value); } // 0xC244AC9DF2DBD29F
static BOOL NETWORK_ACCESS_TUNABLE_BOOL(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xE56320, tunableContext, tunableName); } // 0x3DB3B2BA3A150EF2
static BOOL NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xE563C0, tunableContext, tunableName); } // 0xAFEA31CC8C88FC36
static BOOL NETWORK_ACCESS_TUNABLE_MODIFICATION_DETECTION_CLEAR() { return invoke<BOOL>(0xE56410); } // 0x18CACC03B0B46CA9
static BOOL NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0xE56440, tunableContext, tunableName, value); } // 0x3924757A6ED5FEDB
static BOOL NETWORK_ACCESS_TUNABLE_INT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, int* value) { return invoke<BOOL>(0xE564A0, contextHash, nameHash, value); } // 0xDF6F5F7DECDD6CA3
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) { return invoke<BOOL>(0xE564E0, tunableContext, tunableName, value); } // 0xA484A1273D8798FF
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, float* value) { return invoke<BOOL>(0xE56540, contextHash, nameHash, value); } // 0xA517819975B6DC39
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xE56580, tunableContext, tunableName); } // 0xBFCA4F7F15FD06CC
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, BOOL* value) { return invoke<BOOL>(0xE56600, contextHash, nameHash, value); } // 0xC9DC4A70BE727818
static BOOL NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0xE56640, tunableContext, tunableName, defaultValue); } // 0x0752721B56D5DBA3
static int NETWORK_GET_CONTENT_MODIFIER_LIST_ID(Hash contentHash) { return invoke<int>(0xE566A0, contentHash); } // 0xA71D65C4998B3DF8
static int NETWORK_GET_BONE_ID_OF_FATAL_HIT() { return invoke<int>(0xE566D0); } // 0xDEBA59FD42C0BAEF
static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xE56700); } // 0xEC550B2DD0955D8D
static int NETWORK_GET_NUMBER_BODY_TRACKER_HITS() { return invoke<int>(0xE56720); } // 0xBA8E86ED610D8A3C
static BOOL NETWORK_HAS_BONE_BEEN_HIT_BY_KILLER(int boneIndex) { return invoke<BOOL>(0xE56750, boneIndex); } // 0x4B8C68B93333048F
static BOOL NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(Ped ped, Player player) { return invoke<BOOL>(0xE567E0, ped, player); } // 0x926910F3168C206A
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(Entity entity, BOOL toggle) { invoke<Void>(0xE568A0, entity, toggle); } // 0x2D8C146ED8EFF79D
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_WEAPON_HASH(Entity entity, BOOL toggle) { invoke<Void>(0xE56980, entity, toggle); } // 0x64390744D38F9167
static void NETWORK_SET_NO_LONGER_NEEDED(Entity entity, BOOL toggle) { invoke<Void>(0xE569F0, entity, toggle); } // 0x246563FFA6EA9A50
static BOOL NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { return invoke<BOOL>(0xE56A00, vehicle, isAudible, isInvisible, netId); } // 0xC392361DCE030EF4
static void NETWORK_EXPLODE_HELI(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { invoke<Void>(0xE56A30, vehicle, isAudible, isInvisible, netId); } // 0xB5BD605FB63CDBE6
static void NETWORK_USE_LOGARITHMIC_BLENDING_THIS_FRAME(Entity entity) { invoke<Void>(0xE56A60, entity); } // 0x6934C0E4AC296466
static void NETWORK_OVERRIDE_COORDS_AND_HEADING(Entity entity, float x, float y, float z, float heading) { invoke<Void>(0xE56AC0, entity, x, y, z, heading); } // 0x819DFDEDB0378F60
static void NETWORK_ENABLE_EXTRA_VEHICLE_ORIENTATION_BLEND_CHECKS(int netId, BOOL toggle) { invoke<Void>(0xE56BA0, netId, toggle); } // 0xFA3B6F3FE5E66382
static void NETWORK_DISABLE_PROXIMITY_MIGRATION(int netID) { invoke<Void>(0xE56C20, netID); } // 0xF35461D41398F92C
static void NETWORK_SET_PLAYER_MENTAL_STATE(int p0) { invoke<Void>(0xE56C70, p0); } // 0x8060309EC15DED26
static void NETWORK_SET_MINIMUM_RANK_FOR_MISSION(BOOL p0) { invoke<Void>(0xE56CB0, p0); } // 0x0A2A73F751726916
static void NETWORK_CACHE_LOCAL_PLAYER_HEAD_BLEND_DATA() { invoke<Void>(0xE56CD0); } // 0x98B8C1C5D9674E49
static BOOL NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(Player player) { return invoke<BOOL>(0xE56CE0, player); } // 0x5B5089244DF8EA05
static BOOL NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(Ped ped, Player player) { return invoke<BOOL>(0xE56D20, ped, player); } // 0x7241E3AD10840886
static int GET_NUM_COMMERCE_ITEMS() { return invoke<int>(0xE56DD0); } // 0x21A5D8255DE6E429
static BOOL IS_COMMERCE_DATA_VALID() { return invoke<BOOL>(0xE56DF0); } // 0xD3B5B2F30382DFA8
static void TRIGGER_COMMERCE_DATA_FETCH(Any p0) { invoke<Void>(0xE56E10, p0); } // 0xB926A96763FB9843
static BOOL IS_COMMERCE_DATA_FETCH_IN_PROGRESS() { return invoke<BOOL>(0xE56E20); } // 0x9184B1F53F02EB67
static const char* GET_COMMERCE_ITEM_ID(int index) { return invoke<const char*>(0xE56E50, index); } // 0x57C238FEAF0677E0
static const char* GET_COMMERCE_ITEM_NAME(int index) { return invoke<const char*>(0xE56EC0, index); } // 0xDD21D41AD9E54549
static const char* GET_COMMERCE_PRODUCT_PRICE(int index) { return invoke<const char*>(0xE56F30, index); } // 0x3682CE8F11C793D4
static int GET_COMMERCE_ITEM_NUM_CATS(int index) { return invoke<int>(0xE56FA0, index); } // 0xA25A07F63AC497BB
static const char* GET_COMMERCE_ITEM_CAT(int index, int index2) { return invoke<const char*>(0xE57010, index, index2); } // 0x8553FB74D3BF41C8
static void OPEN_COMMERCE_STORE(const char* p0, const char* p1, int p2) { invoke<Void>(0xE57080, p0, p1, p2); } // 0xD1A4BF0F54E08B34
static BOOL IS_COMMERCE_STORE_OPEN() { return invoke<BOOL>(0xE570A0); } // 0x2B8BAF9BA2A3D36B
static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0xE570C0, toggle); } // 0x56B77EAF3DD4C954
static BOOL REQUEST_COMMERCE_ITEM_IMAGE(int index) { return invoke<BOOL>(0xE570E0, index); } // 0xBF5A33B684B68C2B
static void RELEASE_ALL_COMMERCE_ITEM_IMAGES() { invoke<Void>(0xE57110); } // 0x687DE1873713BF49
static const char* GET_COMMERCE_ITEM_TEXTURENAME(int index) { return invoke<const char*>(0xE57120, index); } // 0x4ABEBEE42452BF31
static BOOL IS_STORE_AVAILABLE_TO_USER() { return invoke<BOOL>(0xE57190); } // 0xD553FC562BDEBE1E
static void DELAY_MP_STORE_OPEN() { invoke<Void>(0xE571E0); } // 0xE50095A9B205820E
static void RESET_STORE_NETWORK_GAME_TRACKING() { invoke<Void>(0xE571F0); } // 0x2A878DDB1FE0F636
static BOOL IS_USER_OLD_ENOUGH_TO_ACCESS_STORE() { return invoke<BOOL>(0xE57200); } // 0xB83285E02B6331A7
static void SET_LAST_VIEWED_SHOP_ITEM(Hash p0, int p1, Hash p2) { invoke<Void>(0xE57240, p0, p1, p2); } // 0x2ECA4EE3F57B8468
static int GET_USER_PREMIUM_ACCESS() { return invoke<int>(0xE57260); } // 0xEF05628918C6842D
static int GET_USER_STARTER_ACCESS() { return invoke<int>(0xE57290); } // 0xB83FBB552E8DBF61
static int CLOUD_DELETE_MEMBER_FILE(const char* p0) { return invoke<int>(0xE572C0, p0); } // 0x595BC3CB7A842B33
static BOOL CLOUD_HAS_REQUEST_COMPLETED(int requestId) { return invoke<BOOL>(0xE57320, requestId); } // 0x0F61191B654874D0
static BOOL CLOUD_DID_REQUEST_SUCCEED(int requestId) { return invoke<BOOL>(0xE57350, requestId); } // 0x7BAB29B9355651B7
static void CLOUD_CHECK_AVAILABILITY() { invoke<Void>(0xE57380); } // 0x8D99EE58B1FB08FF
static BOOL CLOUD_IS_CHECKING_AVAILABILITY() { return invoke<BOOL>(0xE57390); } // 0x722F601C8C71A90A
static BOOL CLOUD_GET_AVAILABILITY_CHECK_RESULT() { return invoke<BOOL>(0xE573B0); } // 0x194647F86ACF56D4
static int GET_CONTENT_TO_LOAD_TYPE() { return invoke<int>(0xE573E0); } // 0xC10C1DEAEBB5849E
static BOOL GET_IS_LAUNCH_FROM_LIVE_AREA() { return invoke<BOOL>(0xE574E0); } // 0x8071F22E56E8A70F
static BOOL GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() { return invoke<BOOL>(0xE57520); } // 0x144FBCDDF1717161
static void CLEAR_SERVICE_EVENT_ARGUMENTS() { invoke<Void>(0xE57580); } // 0x72CF8D8C29D8D5BD
static BOOL UGC_COPY_CONTENT(Any* p0, Any* p1) { return invoke<BOOL>(0xE57590, p0, p1); } // 0x150E13CB4B04648D
static BOOL UGC_IS_CREATING() { return invoke<BOOL>(0xE575E0); } // 0xFA49944CF453C338
static BOOL UGC_HAS_CREATE_FINISHED() { return invoke<BOOL>(0xE57610); } // 0x840A709B5493C918
static BOOL UGC_DID_CREATE_SUCCEED() { return invoke<BOOL>(0xE57640); } // 0x368A167655B5B44A
static int UGC_GET_CREATE_RESULT() { return invoke<int>(0xE57670); } // 0xE2BDF7F96F1777EA
static const char* UGC_GET_CREATE_CONTENT_ID() { return invoke<const char*>(0xE576A0); } // 0x7C1C1B7F72ACD298
static void UGC_CLEAR_CREATE_RESULT() { invoke<Void>(0xE576D0); } // 0x082134CFF7DD01AA
static BOOL UGC_QUERY_MY_CONTENT(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xE576E0, p0, p1, p2, p3, p4, p5); } // 0x3F784BD38F0D94BA
static BOOL UGC_QUERY_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any p4, BOOL p5) { return invoke<BOOL>(0xE577B0, p0, p1, p2, p3, p4, p5); } // 0x6D52735FB5FD59E8
static BOOL UGC_QUERY_BY_CONTENT_ID(const char* contentId, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xE57840, contentId, latestVersion, contentTypeName); } // 0xA5D1672BB8378B6A
static BOOL UGC_QUERY_BY_CONTENT_IDS(Any* data, int count, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xE57900, data, count, latestVersion, contentTypeName); } // 0x4516244647CDE56D
static BOOL UGC_QUERY_MOST_RECENTLY_CREATED_CONTENT(int offset, int count, const char* contentTypeName, int p3) { return invoke<BOOL>(0xE57A20, offset, count, contentTypeName, p3); } // 0xA598E27B609E1B5E
static BOOL UGC_GET_BOOKMARKED_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xE57AC0, p0, p1, p2, p3); } // 0x30385B4D972827A5
static BOOL UGC_GET_MY_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xE57B20, p0, p1, p2, p3); } // 0x4103A58ABA168EFB
static BOOL UGC_GET_FRIEND_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xE57B90, p0, p1, p2, p3); } // 0xAE7CAF61C281EAB2
static BOOL UGC_GET_CREW_CONTENT(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xE57BF0, p0, p1, p2, p3, p4); } // 0x02D3878E122FB9CD
static BOOL UGC_GET_GET_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xE57C50, p0, p1, p2, p3, p4); } // 0xF9618670CE65580B
static BOOL UGC_GET_GET_BY_CONTENT_ID(const char* contentId, const char* contentTypeName) { return invoke<BOOL>(0xE57CD0, contentId, contentTypeName); } // 0xA46905C7B738C729
static BOOL UGC_GET_GET_BY_CONTENT_IDS(Any* data, int dataCount, const char* contentTypeName) { return invoke<BOOL>(0xE57D80, data, dataCount, contentTypeName); } // 0x423AC9BED82065D0
static BOOL UGC_GET_MOST_RECENTLY_CREATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE57EA0, p0, p1, p2, p3); } // 0x3A9A4663D37D7390
static BOOL UGC_GET_MOST_RECENTLY_PLAYED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE57F00, p0, p1, p2, p3); } // 0x0E3101BD119D7E62
static BOOL UGC_GET_TOP_RATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE57F60, p0, p1, p2, p3); } // 0xAD20B85AA9EC7F0B
static void UGC_CANCEL_QUERY() { invoke<Void>(0xE58020); } // 0xF44BFA38C25D7F65
static BOOL UGC_IS_GETTING() { return invoke<BOOL>(0xE58030); } // 0x3076B63C4BC614DC
static BOOL UGC_HAS_GET_FINISHED() { return invoke<BOOL>(0xE58060); } // 0xD1377E5E950FBDDA
static BOOL UGC_DID_GET_SUCCEED() { return invoke<BOOL>(0xE58090); } // 0xB615B19E3B1CB800
static BOOL UGC_WAS_QUERY_FORCE_CANCELLED() { return invoke<BOOL>(0xE580C0); } // 0xCFB101E40FBA6A5A
static int UGC_GET_QUERY_RESULT() { return invoke<int>(0xE580F0); } // 0x1DC804A2468D29A2
static int UGC_GET_CONTENT_NUM() { return invoke<int>(0xE58120); } // 0xE5CECFB837D1F1B8
static int UGC_GET_CONTENT_TOTAL() { return invoke<int>(0xE58150); } // 0x1EE4CB0B5FD3927E
static Hash UGC_GET_CONTENT_HASH() { return invoke<Hash>(0xE58180); } // 0x7BC6776F828F022C
static void UGC_CLEAR_QUERY_RESULTS() { invoke<Void>(0xE581B0); } // 0x7D7DC90EB1D8C8B4
static const char* UGC_GET_CONTENT_USER_ID(int p0) { return invoke<const char*>(0xE581C0, p0); } // 0x4A5B5E00528FADB4
static BOOL UGC_GET_CONTENT_CREATOR_GAMER_HANDLE(int p0, Any* p1) { return invoke<BOOL>(0xE581F0, p0, p1); } // 0x2461B1057D922D96
static BOOL UGC_GET_CONTENT_CREATED_BY_LOCAL_PLAYER(Any p0) { return invoke<BOOL>(0xE58280, p0); } // 0xB678B17485F07C58
static const char* UGC_GET_CONTENT_USER_NAME(Any p0) { return invoke<const char*>(0xE582B0, p0); } // 0xA97D041A0700AC71
static BOOL UGC_GET_CONTENT_IS_USING_SC_NICKNAME(Any p0) { return invoke<BOOL>(0xE582E0, p0); } // 0xD497BCA3B9495BB9
static int UGC_GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xE58310, p0); } // 0x9FFE2545E71B490E
static const char* UGC_GET_CONTENT_ID(int p0) { return invoke<const char*>(0xE58340, p0); } // 0x7768894B5FCDF25F
static const char* UGC_GET_ROOT_CONTENT_ID(int p0) { return invoke<const char*>(0xE58370, p0); } // 0x7BA63240A50FC6C7
static const char* UGC_GET_CONTENT_NAME(Any p0) { return invoke<const char*>(0xE583A0, p0); } // 0xB3C23ED232D01319
static int UGC_GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0xE58400, p0); } // 0x8715A76F8294FEE0
static const char* UGC_GET_CONTENT_PATH(int p0, int p1) { return invoke<const char*>(0xE58430, p0, p1); } // 0xEA3E22389A733263
static void UGC_GET_CONTENT_UPDATED_DATE(Any p0, Any* p1) { invoke<Void>(0xE58470, p0, p1); } // 0x86D971EBB6E0F0AC
static int UGC_GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<int>(0xE58500, p0, p1); } // 0xB010444AA0CE4D66
static BOOL UGC_GET_CONTENT_HAS_LO_RES_PHOTO(int p0) { return invoke<BOOL>(0xE58530, p0); } // 0xFFEDCFBF2A7D07DE
static BOOL UGC_GET_CONTENT_HAS_HI_RES_PHOTO(int p0) { return invoke<BOOL>(0xE58560, p0); } // 0xA049DE72EC734E79
static int UGC_GET_CONTENT_LANGUAGE(Any p0) { return invoke<int>(0xE58590, p0); } // 0xA2CE098EA47DF97D
static BOOL UGC_GET_CONTENT_IS_PUBLISHED(Any p0) { return invoke<BOOL>(0xE585C0, p0); } // 0xDECDB93AECF4571C
static BOOL UGC_GET_CONTENT_IS_VERIFIED(Any p0) { return invoke<BOOL>(0xE585F0, p0); } // 0xE72957406FBFB362
static float UGC_GET_CONTENT_RATING(Any p0, Any p1) { return invoke<float>(0xE58620, p0, p1); } // 0xCF073B4FF8828B7E
static int UGC_GET_CONTENT_RATING_COUNT(Any p0, Any p1) { return invoke<int>(0xE58650, p0, p1); } // 0x909B2EE8AF324A1D
static int UGC_GET_CONTENT_RATING_POSITIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xE58680, p0, p1); } // 0x7EB4730FA964B592
static int UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xE586B0, p0, p1); } // 0xAA565F77BB458AFD
static BOOL UGC_GET_CONTENT_HAS_PLAYER_RECORD(Any p0) { return invoke<BOOL>(0xE586E0, p0); } // 0x821D66CE02BC23F8
static BOOL UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(Any p0) { return invoke<BOOL>(0xE58710, p0); } // 0x0DA829364F715C68
static int UGC_REQUEST_CONTENT_DATA_FROM_INDEX(int p0, int p1) { return invoke<int>(0xE58740, p0, p1); } // 0x171DF6A0C07FB3DC
static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* contentTypeName, const char* contentId, int p2, int p3, int p4) { return invoke<int>(0xE58780, contentTypeName, contentId, p2, p3, p4); } // 0x7FD2990AF016795E
static int UGC_REQUEST_CACHED_DESCRIPTION(int p0) { return invoke<int>(0xE58800, p0); } // 0x52DCAA722383A060
static BOOL UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Any p0) { return invoke<BOOL>(0xE58830, p0); } // 0x66CB39FD84C5ED21
static BOOL UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Any p0) { return invoke<BOOL>(0xE58860, p0); } // 0x28F3FD2263FCE777
static BOOL UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Any p0) { return invoke<BOOL>(0xE58890, p0); } // 0x16C0B173B472AF71
static const char* UGC_GET_CACHED_DESCRIPTION(Any p0, Any p1) { return invoke<const char*>(0xE588C0, p0, p1); } // 0x1B4FD4A821EC277E
static BOOL UGC_RELEASE_CACHED_DESCRIPTION(Any p0) { return invoke<BOOL>(0xE58940, p0); } // 0x2D133345AB736461
static void UGC_RELEASE_ALL_CACHED_DESCRIPTIONS() { invoke<Void>(0xE58970); } // 0x67BEDA5A8CD7FF28
static BOOL UGC_PUBLISH(const char* contentId, const char* baseContentId, const char* contentTypeName) { return invoke<BOOL>(0xE589C0, contentId, baseContentId, contentTypeName); } // 0x29D58EEB6D24D5FB
static BOOL UGC_SET_BOOKMARKED(const char* contentId, BOOL bookmarked, const char* contentTypeName) { return invoke<BOOL>(0xE58A30, contentId, bookmarked, contentTypeName); } // 0xE3E138A155ACC0B9
static BOOL UGC_SET_DELETED(Any* p0, BOOL p1, const char* p2) { return invoke<BOOL>(0xE58B30, p0, p1, p2); } // 0x8FA5AF26CEA0CF0C
static BOOL UGC_IS_MODIFYING() { return invoke<BOOL>(0xE58B90); } // 0x2DD9F4C2D128C690
static BOOL UGC_HAS_MODIFY_FINISHED() { return invoke<BOOL>(0xE58BC0); } // 0xBE4DBB4B94FDD19D
static BOOL UGC_DID_MODIFY_SUCCEED() { return invoke<BOOL>(0xE58BF0); } // 0x7911A5D34DD65F5B
static int UGC_GET_MODIFY_RESULT() { return invoke<int>(0xE58C20); } // 0xBA339BF67EA1C876
static void UGC_CLEAR_MODIFY_RESULT() { invoke<Void>(0xE58C50); } // 0xB7CBD1698172CFDD
static BOOL UGC_GET_CREATORS_BY_USER_ID(Any* p0, Any* p1) { return invoke<BOOL>(0xE58C60, p0, p1); } // 0x2D6CAE334C3034FD
static BOOL UGC_HAS_QUERY_CREATORS_FINISHED() { return invoke<BOOL>(0xE58D10); } // 0x02D8B5E2968C2B8C
static BOOL UGC_DID_QUERY_CREATORS_SUCCEED() { return invoke<BOOL>(0xE58D40); } // 0xA447FE863BC5F3D0
static int UGC_GET_CREATOR_NUM() { return invoke<int>(0xE58D70); } // 0x403513BADB247F14
static BOOL UGC_LOAD_OFFLINE_QUERY(Any p0) { return invoke<BOOL>(0xE58DA0, p0); } // 0x5177CA1D97988B5C
static void UGC_CLEAR_OFFLINE_QUERY() { invoke<Void>(0xE58DD0); } // 0x2864B7211C443DA5
static void UGC_SET_QUERY_DATA_FROM_OFFLINE(BOOL p0) { invoke<Void>(0xE58DE0, p0); } // 0xB79F7D662E0B7885
static void UGC_SET_USING_OFFLINE_CONTENT(BOOL p0) { invoke<Void>(0xE58E00, p0); } // 0x626E6E90E38C6EF7
static BOOL UGC_IS_LANGUAGE_SUPPORTED(Any p0) { return invoke<BOOL>(0xE58E20, p0); } // 0xFD898AF12570EEB6
static BOOL FACEBOOK_POST_COMPLETED_HEIST(const char* heistName, int cashEarned, int xpEarned) { return invoke<BOOL>(0xE58E50, heistName, cashEarned, xpEarned); } // 0xA1EF53B581B6B4A9
static BOOL FACEBOOK_POST_CREATE_CHARACTER() { return invoke<BOOL>(0xE58E60); } // 0x5506E003A95C6373
static BOOL FACEBOOK_POST_COMPLETED_MILESTONE(int milestoneId) { return invoke<BOOL>(0xE58E70, milestoneId); } // 0xAE566521443DBC23
static BOOL FACEBOOK_HAS_POST_COMPLETED() { return invoke<BOOL>(0xE58E80); } // 0x23ECFBF953F64001
static BOOL FACEBOOK_DID_POST_SUCCEED() { return invoke<BOOL>(0xE58E90); } // 0x220ABB0D55961BE1
static BOOL FACEBOOK_CAN_POST_TO_FACEBOOK() { return invoke<BOOL>(0xE58EA0); } // 0x6D230D68A9AD1134
static int TEXTURE_DOWNLOAD_REQUEST(Any* gamerHandle, const char* filePath, const char* name, BOOL p3) { return invoke<int>(0xE58EB0, gamerHandle, filePath, name, p3); } // 0x1905CE168C7AF873
static int TITLE_TEXTURE_DOWNLOAD_REQUEST(const char* filePath, const char* name, BOOL p2) { return invoke<int>(0xE59010, filePath, name, p2); } // 0x30B65E94C2188C92
static int UGC_TEXTURE_DOWNLOAD_REQUEST(const char* p0, int p1, int p2, int p3, const char* p4, BOOL p5) { return invoke<int>(0xE590D0, p0, p1, p2, p3, p4, p5); } // 0x03A1BB16285A7B9C
static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<Void>(0xE591A0, p0); } // 0x988DAD0F0370C94E
static BOOL TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<BOOL>(0xE591C0, p0); } // 0x26EA30089CAD115D
static const char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<const char*>(0xE591F0, p0); } // 0x6DE51300ACD3E3F3
static int GET_STATUS_OF_TEXTURE_DOWNLOAD(int p0) { return invoke<int>(0xE59220, p0); } // 0x15C0F0A696091ACB
static BOOL NETWORK_CHECK_ROS_LINK_WENTDOWN_NOT_NET() { return invoke<BOOL>(0xE59270); } // 0x3CF1DEF284B9B6C0
static BOOL NETWORK_SHOULD_SHOW_STRICT_NAT_WARNING() { return invoke<BOOL>(0xE592E0); } // 0x17739C59E555C46D
static BOOL NETWORK_IS_CABLE_CONNECTED() { return invoke<BOOL>(0xE592F0); } // 0x6B47B305B6557EF9
static BOOL NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() { return invoke<BOOL>(0xE59310); } // 0x62B038F95CEA3FE9
static BOOL NETWORK_HAVE_ROS_SOCIAL_CLUB_PRIV() { return invoke<BOOL>(0xE59370); } // 0xE67B481B4EC10A14
static BOOL NETWORK_HAVE_ROS_BANNED_PRIV() { return invoke<BOOL>(0xE593D0); } // 0xF4260C5C733DA1CB
static BOOL NETWORK_HAVE_ROS_CREATE_TICKET_PRIV() { return invoke<BOOL>(0xE59410); } // 0xC869C5AD1CA63C58
static BOOL NETWORK_HAVE_ROS_MULTIPLAYER_PRIV() { return invoke<BOOL>(0xE59470); } // 0x938C5858FA4618E2
static BOOL NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV() { return invoke<BOOL>(0xE594D0); } // 0xAE6B753124318E29
static BOOL NETWORK_HAS_ROS_PRIVILEGE(int index) { return invoke<BOOL>(0xE59530, index); } // 0x428539069343758E
static BOOL NETWORK_HAS_ROS_PRIVILEGE_END_DATE(int privilege, int* banType, Any* timeData) { return invoke<BOOL>(0xE595B0, privilege, banType, timeData); } // 0x20DACABA7023B608
static BOOL NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN() { return invoke<BOOL>(0xE595E0); } // 0x5BC93955B6EEBC0B
static BOOL NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT() { return invoke<BOOL>(0xE59640); } // 0x753B42F8D561B8E2
static int NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(Any* netHandle) { return invoke<int>(0xE59790, netHandle); } // 0x12AEE383533D0E70
static void NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE() { invoke<Void>(0xE597A0); } // 0xDC5F81D7F618A8A6
static void NETWORK_SKIP_RADIO_RESET_NEXT_OPEN() { invoke<Void>(0xE597B0); } // 0x7EF7ABCDDEEEB7C0
static BOOL NETWORK_SKIP_RADIO_WARNING() { return invoke<BOOL>(0xE597C0); } // 0xEFF4479E2B0D2080
static void NETWORK_FORCE_LOCAL_PLAYER_SCAR_SYNC() { invoke<Void>(0xE597D0); } // 0xBF561BB44F8AFA5C
static void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(BOOL toggle) { invoke<Void>(0xE597F0, toggle); } // 0xD8D822FF4C3DCD7D
static void NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(Entity entity, BOOL toggle) { invoke<Void>(0xE59840, entity, toggle); } // 0x8D2010DF3E481626
static void NETWORK_SHOW_CHAT_RESTRICTION_MSC(Player player) { invoke<Void>(0xE59890, player); } // 0x230CD2039E115591
static void NETWORK_SHOW_PSN_UGC_RESTRICTION() { invoke<Void>(0xE598E0); } // 0xC7C2484FD7A1279A
static BOOL NETWORK_IS_TITLE_UPDATE_REQUIRED() { return invoke<BOOL>(0xE59930); } // 0x6026EB0A2A2F509E
static void NETWORK_QUIT_MP_TO_DESKTOP() { invoke<Void>(0xE59990); } // 0x1BA57F70810F53CD
static BOOL NETWORK_IS_CONNECTED_VIA_RELAY(Player player) { return invoke<BOOL>(0xE599A0, player); } // 0x6C15571532CF7F95
static float NETWORK_GET_AVERAGE_LATENCY(Player player) { return invoke<float>(0xE59A00, player); } // 0xD29CB5E83871293B
static float NETWORK_GET_AVERAGE_PING(Player player) { return invoke<float>(0xE59A50, player); } // 0x20EDD3199D02CB60
static float NETWORK_GET_AVERAGE_PACKET_LOSS(Player player) { return invoke<float>(0xE59AA0, player); } // 0xA26711392EBF5371
static int NETWORK_GET_NUM_UNACKED_RELIABLES(Player player) { return invoke<int>(0xE59AF0, player); } // 0xC424F771EFDD2A58
static int NETWORK_GET_UNRELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0xE59B50, player); } // 0x7D17572D1EE9D0A9
static int NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0xE59BB0, player); } // 0x2031266910F9D195
static void NETWORK_REPORT_CODE_TAMPER() { invoke<Void>(0xE59C10); } // 0x5CE41A29691C7614
static Vector3 NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<Vector3>(0xE59C30, entity); } // 0x4D867CF71882EEA6
static Vector3 NETWORK_GET_LAST_PLAYER_POS_RECEIVED_OVER_NETWORK(Player player) { return invoke<Vector3>(0xE59D30, player); } // 0x65D66F9646758265
static Vector3 NETWORK_GET_LAST_VEL_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<Vector3>(0xE59E00, entity); } // 0x21D6FED3EFEC33E5
static Vector3 NETWORK_GET_PREDICTED_VELOCITY(Entity entity) { return invoke<Vector3>(0xE59EC0, entity); } // 0xD23AF6BA9E38FE33
static void NETWORK_DUMP_NET_IF_CONFIG() { invoke<Void>(0xE59F90); } // 0x3A5F05A23D5B4F88
static void NETWORK_GET_SIGNALLING_INFO(Any* p0) { invoke<Void>(0xE59FA0, p0); } // 0xDC05070D5646C09C
static void NETWORK_GET_NET_STATISTICS_INFO(Any* p0) { invoke<Void>(0xE59FB0, p0); } // 0xDF399EF490797927
static int NETWORK_GET_PLAYER_ACCOUNT_ID(Player player) { return invoke<int>(0xE59FC0, player); } // 0x17E5F27FA417E82E
static void NETWORK_UGC_NAV(Any p0, Any p1) { invoke<Void>(0xE5A010, p0, p1); } // 0x3E1F527308A7BBC1
static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xE639E0, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); } // 0x4E55EAB577C13329
static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xE63A80, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); } // 0x43AFC452F25F3A2F
static void DELETE_OBJECT(Object* object) { invoke<Void>(0xE63B20, object); } // 0x51C8BEA2005931AB
static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0xE63B30, object); } // 0x8225BA395C3FC89D
static BOOL PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(Object object) { return invoke<BOOL>(0xE63BD0, object); } // 0x711CB952E5BE087E
static BOOL ROTATE_OBJECT(Object object, float p1, float p2, BOOL p3) { return invoke<BOOL>(0xE63C70, object, p1, p2, p3); } // 0x6ADCD027CA259B43
static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return invoke<BOOL>(0xE63CB0, object, toX, toY, toZ, speedX, speedY, speedZ, collision); } // 0x51DACC000DE4DECC
static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0xE63CF0, object, targettable); } // 0x918FE23DCE5B8322
static void SET_OBJECT_FORCE_VEHICLES_TO_AVOID(Object object, BOOL toggle) { invoke<Void>(0xE63E70, object, toggle); } // 0x6FDDD37A4022A641
static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xE63ED0, x, y, z, radius, modelHash, isMission, p6, p7); } // 0x8366ABB82B1ABC59
static BOOL HAS_OBJECT_BEEN_BROKEN(Object object, Any p1) { return invoke<BOOL>(0xE63F20, object, p1); } // 0x1C3788A51C49D6AD
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return invoke<BOOL>(0xE63FC0, p0, p1, p2, p3, modelHash, p5); } // 0xF6774B3027B150AC
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_COMPLETELY_DESTROYED(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { return invoke<BOOL>(0xE63FF0, x, y, z, radius, modelHash, p5); } // 0xF701B83DA32F7F87
static BOOL GET_HAS_OBJECT_BEEN_COMPLETELY_DESTROYED(Any p0) { return invoke<BOOL>(0xE64020, p0); } // 0x0DD5D60B63FBBFC2
static Vector3 GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0xE64090, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); } // 0xF10F2A2453AF1DFB
static BOOL GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, Vector3* outPosition, Vector3* outRotation, int rotationOrder) { return invoke<BOOL>(0xE64170, x, y, z, radius, modelHash, outPosition, outRotation, rotationOrder); } // 0x8679173785B8D495
static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0xE64220, type, x, y, z, locked, heading, p6); } // 0x1F3E4227575DF103
static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0xE64320, type, x, y, z, locked, heading); } // 0x696D2AC31CB5932A
static void SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(Hash modelHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) { invoke<Void>(0xE64340, modelHash, x, y, z, locked, xRotMult, yRotMult, zRotMult); } // 0x6421C7C9616E4305
static void PLAY_OBJECT_AUTO_START_ANIM(Any p0) { invoke<Void>(0xE64460, p0); } // 0x8F07CC6637F60B7F
static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL scriptDoor, BOOL isLocal) { invoke<Void>(0xE644B0, doorHash, modelHash, x, y, z, p5, scriptDoor, isLocal); } // 0xB80B2E08713B8BC6
static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash, Any p1) { invoke<Void>(0xE64500, doorHash, p1); } // 0x19B3B7AC049E8354
static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorHash, int state, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE64520, doorHash, state, requestDoor, forceUpdate); } // 0xEBB2809684978887
static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorHash) { return invoke<int>(0xE64550, doorHash); } // 0x117BCCA03F7A311A
static int DOOR_SYSTEM_GET_DOOR_PENDING_STATE(Hash doorHash) { return invoke<int>(0xE64580, doorHash); } // 0xE2A2194077783E19
static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Hash doorHash, float rate, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE645B0, doorHash, rate, requestDoor, forceUpdate); } // 0xDD0EDCD573B965E2
static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorHash, float distance, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE64650, doorHash, distance, requestDoor, forceUpdate); } // 0x57A602C0620BEFF2
static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorHash, float ajar, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE646F0, doorHash, ajar, requestDoor, forceUpdate); } // 0x3A15B21067339E98
static float DOOR_SYSTEM_GET_AUTOMATIC_DISTANCE(Hash doorHash) { return invoke<float>(0xE64790, doorHash); } // 0xE29951C625F69A92
static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorHash) { return invoke<float>(0xE647E0, doorHash); } // 0x8CA2126DEA4C3796
static void DOOR_SYSTEM_SET_SPRING_REMOVED(Hash doorHash, BOOL removed, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE64870, doorHash, removed, requestDoor, forceUpdate); } // 0x2ED5915E42CF4212
static void DOOR_SYSTEM_SET_HOLD_OPEN(Hash doorHash, BOOL toggle) { invoke<Void>(0xE64920, doorHash, toggle); } // 0x0EBFE569715DB18F
static void DOOR_SYSTEM_SET_DOOR_OPEN_FOR_RACES(Hash doorHash, BOOL p1) { invoke<Void>(0xE64980, doorHash, p1); } // 0xB80A7611D19E162B
static BOOL IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorHash) { return invoke<BOOL>(0xE64A20, doorHash); } // 0x116053132936EA1F
static BOOL IS_DOOR_CLOSED(Hash doorHash) { return invoke<BOOL>(0xE64A50, doorHash); } // 0x497B2CD637A94E2A
static void OPEN_ALL_BARRIERS_FOR_RACE(BOOL p0) { invoke<Void>(0xE64AC0, p0); } // 0xEE7031BA6CBD6DBA
static void CLOSE_ALL_BARRIERS_FOR_RACE() { invoke<Void>(0xE64AE0); } // 0x3E4EE4ACF12D2A90
static BOOL DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(Any p0) { return invoke<BOOL>(0xE64AF0, p0); } // 0xC8E94211877921FE
static BOOL DOOR_SYSTEM_FIND_EXISTING_DOOR(float x, float y, float z, Hash modelHash, Hash* outDoorHash) { return invoke<BOOL>(0xE64B30, x, y, z, modelHash, outDoorHash); } // 0x05FE36AB1B2950A9
static BOOL IS_GARAGE_EMPTY(Hash garageHash, BOOL p1, int p2) { return invoke<BOOL>(0xE64BC0, garageHash, p1, p2); } // 0x988923E9EBDA2C20
static BOOL IS_PLAYER_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Player player, float p2, int p3) { return invoke<BOOL>(0xE64C50, garageHash, player, p2, p3); } // 0xA9BDD6C662512CA7
static BOOL IS_PLAYER_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Player player, int p2) { return invoke<BOOL>(0xE64CF0, garageHash, player, p2); } // 0x3DF64ECB2401B9C1
static BOOL ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xE64D50, garageHash, p1, p2, p3, p4); } // 0xB7AFC7F5C75DCD56
static BOOL IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xE64DC0, garageHash, p1, p2, p3, p4); } // 0x2ED8EB2145D177F8
static BOOL IS_OBJECT_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Entity entity, float p2, int p3) { return invoke<BOOL>(0xE64E30, garageHash, entity, p2, p3); } // 0x659143E4AE5A351B
static BOOL IS_OBJECT_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Entity entity, int p2) { return invoke<BOOL>(0xE64EF0, garageHash, entity, p2); } // 0x805A7BBF801B49D0
static void CLEAR_GARAGE(Hash garageHash, BOOL isNetwork) { invoke<Void>(0xE64F70, garageHash, isNetwork); } // 0xC2A1BF59954282E5
static void CLEAR_OBJECTS_INSIDE_GARAGE(Hash garageHash, BOOL vehicles, BOOL peds, BOOL objects, BOOL isNetwork) { invoke<Void>(0xE64F90, garageHash, vehicles, peds, objects, isNetwork); } // 0xC175C00B24E2628F
static void DISABLE_TIDYING_UP_IN_GARAGE(int id, BOOL toggle) { invoke<Void>(0xE64FD0, id, toggle); } // 0x1DC06048E0BEE337
static void ENABLE_SAVING_IN_GARAGE(Hash garageHash, BOOL toggle) { invoke<Void>(0xE65030, garageHash, toggle); } // 0xBA7A8F956317AC96
static void CLOSE_SAFEHOUSE_GARAGES() { invoke<Void>(0xE65090); } // 0x3C0B3EA001613632
static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xE650A0, x, y, z, radius, hash, p5); } // 0xE10356B235A70E70
static BOOL IS_POINT_IN_ANGLED_AREA(float xPos, float yPos, float zPos, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ) { return invoke<BOOL>(0xE65110, xPos, yPos, zPos, x1, y1, z1, x2, y2, z2, width, debug, includeZ); } // 0x26715B0ED6702C87
static void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(Object object, BOOL toggle) { invoke<Void>(0xE651F0, object, toggle); } // 0x1315213A9C4437FE
static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<Void>(0xE65250, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); } // 0x2493F314750274C9
static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0xE65280, p0, p1); } // 0x79BDC52C38AAF639
static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0xE652F0, object, toggle); } // 0x4B46E3AF872076CE
static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0xE65350, x, y, z, range, p4); } // 0x80F249EA6DFE8476
static BOOL IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) { return invoke<BOOL>(0xE65450, objectHash, x, y, z, range); } // 0x3C38570F42680D56
static void REMOVE_OBJECT_HIGH_DETAIL_MODEL(Object object) { invoke<Void>(0xE65480, object); } // 0xCF9F92EF5A069BD4
static void BREAK_OBJECT_FRAGMENT_CHILD(Object p0, Any p1, BOOL p2) { invoke<Void>(0xE654B0, p0, p1, p2); } // 0x8C4D4D7E3B6BC910
static void DAMAGE_OBJECT_FRAGMENT_CHILD(Any p0, Any p1, Any p2) { invoke<Void>(0xE654D0, p0, p1, p2); } // 0x3E27C7B2037D7E8B
static void FIX_OBJECT_FRAGMENT(Object object) { invoke<Void>(0xE654F0, object); } // 0x30A5E8BBE5D07DE7
static void TRACK_OBJECT_VISIBILITY(Object object) { invoke<Void>(0xE65570, object); } // 0x33D763C13554690A
static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0xE655B0, object); } // 0xF31BAE02C52ADEFD
static void SET_OBJECT_IS_SPECIAL_GOLFBALL(Object object, BOOL toggle) { invoke<Void>(0xE65620, object, toggle); } // 0x7D8D470E05A35981
static void SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS(Any p0, BOOL p1) { invoke<Void>(0xE65680, p0, p1); } // 0xC0794F64BB12AAF8
static void ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS(BOOL value) { invoke<Void>(0xE656E0, value); } // 0x137D2653DD6FE9A2
static void SET_CUTSCENES_WEAPON_FLASHLIGHT_ON_THIS_FRAME(Object object, BOOL toggle) { invoke<Void>(0xE65700, object, toggle); } // 0x7825AE6DE930430C
static Object GET_RAYFIRE_MAP_OBJECT(float x, float y, float z, float radius, const char* name) { return invoke<Object>(0xE65770, x, y, z, radius, name); } // 0xC8C12645F5A0E13B
static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object, int state) { invoke<Void>(0xE65880, object, state); } // 0xBF86159B8525B1AE
static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object) { return invoke<int>(0xE65890, object); } // 0xEB4069FA281FFD9B
static BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST(Object object) { return invoke<BOOL>(0xE658E0, object); } // 0x502101046E18AD3F
static float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Object object) { return invoke<float>(0xE65930, object); } // 0xEAD3338566510A40
static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0xE65960, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); } // 0x8D4CAF9A056EA9E4
static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0xE659A0, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); } // 0x6FCBED6282FF5DA5
static void FORCE_PICKUP_ROTATE_FACE_UP() { invoke<Void>(0xE659F0); } // 0x82FFC7AC4E85D734
static void SET_CUSTOM_PICKUP_WEAPON_HASH(Hash pickupHash, Pickup pickup) { invoke<Void>(0xE65A00, pickupHash, pickup); } // 0xCFA4C40D5C68471B
static Object CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xE65A40, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); } // 0xD0DDC0D0D8D33E57
static Object CREATE_NON_NETWORKED_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xE65A90, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); } // 0x192C5E68A3552FDC
static void BLOCK_PLAYERS_FOR_AMBIENT_PICKUP(Any p0, Any p1) { invoke<Void>(0xE65AF0, p0, p1); } // 0x4CA2980073803EFF
static Object CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xE65B40, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x29F49A5884D2FD3C
static Object CREATE_NON_NETWORKED_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xE65B80, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x77573CD394E8C3B1
static void ATTACH_PORTABLE_PICKUP_TO_PED(Object pickupObject, Ped ped) { invoke<Void>(0xE65BC0, pickupObject, ped); } // 0xCD1BFD3115E1591A
static void DETACH_PORTABLE_PICKUP_FROM_PED(Object pickupObject) { invoke<Void>(0xE65BD0, pickupObject); } // 0x31A69AB30F92CBD0
static void FORCE_PORTABLE_PICKUP_LAST_ACCESSIBLE_POSITION_SETTING(Object object) { invoke<Void>(0xE65C50, object); } // 0x7AD61992EAE86A99
static void HIDE_PORTABLE_PICKUP_WHEN_DETACHED(Object pickupObject, BOOL toggle) { invoke<Void>(0xE65CA0, pickupObject, toggle); } // 0x6F7F646DA603F6DF
static void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Hash modelHash, int number) { invoke<Void>(0xE65D00, modelHash, number); } // 0x48DD7FCBAD86D46F
static void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(BOOL toggle) { invoke<Void>(0xE65DC0, toggle); } // 0x2053D6988D24922A
static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, float p3, float p4) { return invoke<Vector3>(0xE65E10, x, y, z, p3, p4); } // 0x165E2DDD2BD0F07D
static void ADD_EXTENDED_PICKUP_PROBE_AREA(float x, float y, float z, float radius) { invoke<Void>(0xE65F20, x, y, z, radius); } // 0xB7E1B262DB074229
static void CLEAR_EXTENDED_PICKUP_PROBE_AREAS() { invoke<Void>(0xE65F90); } // 0x2E42BC795274B8C1
static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<Vector3>(0xE65FA0, pickup); } // 0x80C8AA1625977488
static void SUPPRESS_PICKUP_SOUND_FOR_PICKUP(Any p0, Any p1) { invoke<Void>(0xE66040, p0, p1); } // 0x70351229319C8FCB
static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xE660A0, pickupHash); } // 0xF429153602FD9CAF
static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0xE660C0, pickup); } // 0x1D56B24774D5E23C
static void REMOVE_PICKUP(Pickup pickup) { invoke<Void>(0xE660F0, pickup); } // 0xDDFB0941A19702BE
static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) { invoke<Void>(0xE66100, x, y, z, value, amount, model); } // 0x24703703CFA1C70A
static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0xE66120, pickup); } // 0xB0E14182FAD64944
static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0xE66170, pickupObject); } // 0x313F30E8A7FB3625
static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0xE661A0, pickup); } // 0xA9D6BD2486442887
static BOOL IS_OBJECT_A_PICKUP(Object object) { return invoke<BOOL>(0xE661C0, object); } // 0xDC4C404BF0F7C610
static BOOL IS_OBJECT_A_PORTABLE_PICKUP(Object object) { return invoke<BOOL>(0xE66220, object); } // 0x0051FB632E333967
static BOOL DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0xE66280, pickupHash, x, y, z, radius); } // 0x6AA6E814FE2A18C2
static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { invoke<Void>(0xE663A0, pickup, duration); } // 0xE611C8912D834299
static void FORCE_PICKUP_REGENERATE(Any p0) { invoke<Void>(0xE663B0, p0); } // 0x59955A005920818D
static void SET_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_OF_TYPE(Player player, Hash pickupHash, BOOL toggle) { invoke<Void>(0xE66420, player, pickupHash, toggle); } // 0xF3F15DACA12B4829
static void SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Hash modelHash, BOOL toggle) { invoke<Void>(0xE66490, modelHash, toggle); } // 0xFE931774D31D4525
static void ALLOW_ALL_PLAYERS_TO_COLLECT_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xE664D0, pickupHash); } // 0x88D79D666165710F
static void SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) { invoke<Void>(0xE664F0, object, p1, p2); } // 0xBF998058B3DD9EEF
static void PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Object object, BOOL p1, BOOL p2) { invoke<Void>(0xE66580, object, p1, p2); } // 0x26909BE8B0CCD35B
static void SET_PICKUP_OBJECT_GLOW_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66620, pickup, toggle); } // 0x15D82129216A84DC
static void SET_PICKUP_GLOW_OFFSET(Pickup pickup, float p1) { invoke<Void>(0xE666F0, pickup, p1); } // 0xED6967E98C0B750B
static void SET_PICKUP_OBJECT_GLOW_OFFSET(Pickup pickup, float p1, BOOL p2) { invoke<Void>(0xE66740, pickup, p1, p2); } // 0x1EFD0C969D7EC8A5
static void SET_OBJECT_GLOW_IN_SAME_TEAM(Pickup pickup) { invoke<Void>(0xE667C0, pickup); } // 0x57619EEF13EEBFBE
static void SET_PICKUP_OBJECT_ARROW_MARKER(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66810, pickup, toggle); } // 0x5730F7F898FC023D
static void ALLOW_PICKUP_ARROW_MARKER_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66870, pickup, toggle); } // 0x965118645D618F6E
static int GET_DEFAULT_AMMO_FOR_WEAPON_PICKUP(Hash pickupHash) { return invoke<int>(0xE668D0, pickupHash); } // 0x0D44CA9207ABD071
static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(float multiplier) { invoke<Void>(0xE66960, multiplier); } // 0x234E9925E93F6A5A
static float GET_PICKUP_GENERATION_RANGE_MULTIPLIER() { return invoke<float>(0xE669F0); } // 0x2AD9C2DC3976B552
static void SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(BOOL p0) { invoke<Void>(0xE66A10, p0); } // 0x8BD66D017AB5A655
static void SET_PICKUP_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66A30, pickup, toggle); } // 0x9CA38BB13C29695F
static void SET_PICKUP_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66A80, pickup, toggle); } // 0x4C053DEF00842DC9
static void SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66AD0, pickup, toggle); } // 0xCDBF6DCBFC52E781
static void SET_PICKUP_OBJECT_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66B20, pickup, toggle); } // 0x08EC1AE8FE5E74E2
static void SET_PICKUP_OBJECT_ALPHA_WHEN_TRANSPARENT(int p0) { invoke<Void>(0xE66B80, p0); } // 0x7E1C4CAEFA5571B2
static void SET_PORTABLE_PICKUP_PERSIST(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66BA0, pickup, toggle); } // 0x5612E9BDDC2940D7
static void ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66C00, pickup, toggle); } // 0xB192A63C891A0E89
static void FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66C70, pickup, toggle); } // 0x95ED454235D93943
static void ALLOW_PICKUP_BY_NONE_PARTICIPANT(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66CD0, pickup, toggle); } // 0x3B4B7B1791F11CB8
static void SUPPRESS_PICKUP_REWARD_TYPE(int rewardType, BOOL suppress) { invoke<Void>(0xE66D20, rewardType, suppress); } // 0xD346DC73B664C2EC
static void CLEAR_ALL_PICKUP_REWARD_TYPE_SUPPRESSION() { invoke<Void>(0xE66D50); } // 0x49498E53B3E184F7
static void CLEAR_PICKUP_REWARD_TYPE_SUPPRESSION(int rewardType) { invoke<Void>(0xE66D60, rewardType); } // 0xB1FED11AF36ECDD3
static void RENDER_FAKE_PICKUP_GLOW(float x, float y, float z, int colorIndex) { invoke<Void>(0xE66D80, x, y, z, colorIndex); } // 0x60415964D3B19DC8
static void SET_PICKUP_OBJECT_COLLECTABLE_IN_VEHICLE(Pickup pickup) { invoke<Void>(0xE66DB0, pickup); } // 0xCF4D057C2C049142
static void SET_PICKUP_TRACK_DAMAGE_EVENTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66DF0, pickup, toggle); } // 0xD0AE52F8786F9DDC
static void SET_ENTITY_FLAG_SUPPRESS_SHADOW(Entity entity, BOOL toggle) { invoke<Void>(0xE66E50, entity, toggle); } // 0x1849D5FA4A78390C
static void SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(Object object, BOOL toggle) { invoke<Void>(0xE66EA0, object, toggle); } // 0xCE01C49286D13953
static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke<Hash>(0xE66EF0, pickupHash); } // 0x5A0A30874C8AA5B2
static Hash GET_PICKUP_TYPE_FROM_WEAPON_HASH(Hash weaponHash) { return invoke<Hash>(0xE66FA0, weaponHash); } // 0x9D3736A21578FCE2
static BOOL IS_PICKUP_WEAPON_OBJECT_VALID(Object object) { return invoke<BOOL>(0xE67010, object); } // 0x6B0D585D62AACB6F
static int GET_OBJECT_TINT_INDEX(Object object) { return invoke<int>(0xE67060, object); } // 0xC557ED333E7A31E1
static void SET_OBJECT_TINT_INDEX(Object object, int textureVariation) { invoke<Void>(0xE670C0, object, textureVariation); } // 0xDEFDEE8D4FA47138
static BOOL SET_TINT_INDEX_CLOSEST_BUILDING_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, int textureVariation) { return invoke<BOOL>(0xE67150, x, y, z, radius, modelHash, textureVariation); } // 0x44EFE8009F436110
static void SET_PROP_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xE67210, p0, p1); } // 0xD3CBD77236B58852
static BOOL SET_PROP_LIGHT_COLOR(Object object, BOOL p1, int r, int g, int b) { return invoke<BOOL>(0xE67280, object, p1, r, g, b); } // 0x53AEF1FECF5138CF
static BOOL IS_PROP_LIGHT_OVERRIDEN(Object object) { return invoke<BOOL>(0xE672C0, object); } // 0xCF84B0AC4DDC5E1C
static void SET_OBJECT_IS_VISIBLE_IN_MIRRORS(Object object, BOOL toggle) { invoke<Void>(0xE672F0, object, toggle); } // 0x5D56BEB3F5597195
static void SET_OBJECT_SPEED_BOOST_AMOUNT(Object object, Any p1) { invoke<Void>(0xE67350, object, p1); } // 0xB853745FD2637D7F
static void SET_OBJECT_SPEED_BOOST_DURATION(Object object, float duration) { invoke<Void>(0xE673A0, object, duration); } // 0x824F169326B2BC67
static Hash CONVERT_OLD_PICKUP_TYPE_TO_NEW(Hash pickupHash) { return invoke<Hash>(0xE67410, pickupHash); } // 0xAC96042A1278D845
static void SET_FORCE_OBJECT_THIS_FRAME(float x, float y, float z, float p3) { invoke<Void>(0xE67430, x, y, z, p3); } // 0x320BC441CADA2E79
static void ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Object object) { invoke<Void>(0xE67490, object); } // 0xC942CD0D37369DC4
static void SET_DISABLE_COLLISIONS_BETWEEN_CARS_AND_CAR_PARACHUTE(Any p0) { invoke<Void>(0xE674D0, p0); } // 0x7A2982A0B5AB7BEB
static void SET_PROJECTILES_SHOULD_EXPLODE_ON_CONTACT(Entity entity, Any p1) { invoke<Void>(0xE674F0, entity, p1); } // 0x78CDDDB2C832ADEF
static void SET_DRIVE_ARTICULATED_JOINT(Object object, BOOL toggle, int p2) { invoke<Void>(0xE67550, object, toggle, p2); } // 0x95D654C0E9FE1D7E
static void SET_DRIVE_ARTICULATED_JOINT_WITH_INFLICTOR(Object object, BOOL toggle, int p2, Ped ped) { invoke<Void>(0xE675D0, object, toggle, p2, ped); } // 0x3BC4D68025ED9B51
static void SET_OBJECT_IS_A_PRESSURE_PLATE(Object object, BOOL toggle) { invoke<Void>(0xE675F0, object, toggle); } // 0x806B9D97E4C16543
static void SET_WEAPON_IMPACTS_APPLY_GREATER_FORCE(Object object, BOOL p1) { invoke<Void>(0xE67650, object, p1); } // 0x6F3AF5B029E1AD6C
static BOOL GET_IS_ARTICULATED_JOINT_AT_MIN_ANGLE(Object object, Any p1) { return invoke<BOOL>(0xE676B0, object, p1); } // 0xD935AEB5CFA7FA1B
static BOOL GET_IS_ARTICULATED_JOINT_AT_MAX_ANGLE(Any p0, Any p1) { return invoke<BOOL>(0xE67720, p0, p1); } // 0xA06DCC0EBCEFF7EA
static void SET_IS_OBJECT_ARTICULATED(Object object, BOOL toggle) { invoke<Void>(0xE67790, object, toggle); } // 0x140444BB8ABDB066
static void SET_IS_OBJECT_BALL(Object object, BOOL toggle) { invoke<Void>(0xE677F0, object, toggle); } // 0x09D0318A9D395CB5
static BOOL IS_CONTROL_ENABLED(int control, int action) { return invoke<BOOL>(0xE6A3F0, control, action); } // 0x5CCBA474776568B7
static BOOL IS_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A450, control, action); } // 0x6D05C5731A838CB3
static BOOL IS_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xE6A4C0, control, action); } // 0x9924343EC2EAE1E4
static BOOL IS_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A530, control, action); } // 0x875A214D5EBCA509
static BOOL IS_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xE6A5A0, control, action); } // 0x2645430E708CBFAC
static int GET_CONTROL_VALUE(int control, int action) { return invoke<int>(0xE6A6A0, control, action); } // 0x6C29A57AC29D7033
static float GET_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xE6A720, control, action); } // 0xB504E1B50AA21FC5
static void SET_USE_ADJUSTED_MOUSE_COORDS(BOOL toggle) { invoke<Void>(0xE6A780, toggle); } // 0x88C44A9692A5A3A0
static float GET_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xE6A7A0, control, action); } // 0x4AAE7492E7D81A57
static BOOL SET_CONTROL_VALUE_NEXT_FRAME(int control, int action, float value) { return invoke<BOOL>(0xE6A800, control, action, value); } // 0x11E5CA6A9B6D7D2A
static BOOL IS_DISABLED_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A880, control, action); } // 0x4465D55576678706
static BOOL IS_DISABLED_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xE6A920, control, action); } // 0xAA7C376C3569E05B
static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A9C0, control, action); } // 0xDEE3EFEA31A1F555
static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xE6AA60, control, action); } // 0x61C3701AD6D746B2
static float GET_DISABLED_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xE6AB00, control, action); } // 0xF069618D9974EB9D
static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xE6ABA0, control, action); } // 0xC3B77DE416935168
static int GET_CONTROL_HOW_LONG_AGO(int control) { return invoke<int>(0xE6AC40, control); } // 0x93D020792180298F
static BOOL IS_USING_KEYBOARD_AND_MOUSE(int control) { return invoke<BOOL>(0xE6AC90, control); } // 0xAE231F549813BBDF
static BOOL IS_USING_CURSOR(int control) { return invoke<BOOL>(0xE6ACA0, control); } // 0xD67885288D4A40CB
static BOOL SET_CURSOR_POSITION(float x, float y) { return invoke<BOOL>(0xE6ACF0, x, y); } // 0xA715917D148B834B
static BOOL IS_USING_REMOTE_PLAY(int control) { return invoke<BOOL>(0xE6AD00, control); } // 0xF4E95755715FE93D
static BOOL HAVE_CONTROLS_CHANGED(int control) { return invoke<BOOL>(0xE6AD50, control); } // 0x7811C74D5B749F76
static const char* GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(int control, int action, BOOL allowXOSwap) { return invoke<const char*>(0xE6AD80, control, action, allowXOSwap); } // 0xE934399D6F2C3AC5
static const char* GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(int control, int controlGroup, BOOL allowXOSwap) { return invoke<const char*>(0xE6AE30, control, controlGroup, allowXOSwap); } // 0xF761D79754BC3043
static void SET_CONTROL_LIGHT_EFFECT_COLOR(int control, int red, int green, int blue) { invoke<Void>(0xE6AEE0, control, red, green, blue); } // 0x5806B70875E083E0
static void CLEAR_CONTROL_LIGHT_EFFECT(int control) { invoke<Void>(0xE6AF80, control); } // 0x9882AC0599785A65
static void SET_CONTROL_SHAKE(int control, int duration, int frequency) { invoke<Void>(0xE6AFC0, control, duration, frequency); } // 0x97A041099E92C69F
static void SET_CONTROL_TRIGGER_SHAKE(int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency) { invoke<Void>(0xE6B030, control, leftDuration, leftFrequency, rightDuration, rightFrequency); } // 0x238500FECB845FFF
static void STOP_CONTROL_SHAKE(int control) { invoke<Void>(0xE6B040, control); } // 0x9683D8208E71E46D
static void SET_CONTROL_SHAKE_SUPPRESSED_ID(int control, int uniqueId) { invoke<Void>(0xE6B080, control, uniqueId); } // 0xE0CC4855A08C0666
static void CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(int control) { invoke<Void>(0xE6B0C0, control); } // 0xF27E6847E6EE009E
static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xE6B100); } // 0x660D0B8C8AE85314
static BOOL IS_MOUSE_LOOK_INVERTED() { return invoke<BOOL>(0xE6B120); } // 0xDD087A873D2E08F0
static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xE6B130); } // 0xC613ED89DC21151D
static int GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() { return invoke<int>(0xE6B140); } // 0x8783C7E86E757352
static BOOL GET_IS_USING_ALTERNATE_HANDBRAKE() { return invoke<BOOL>(0xE6B150); } // 0x17D4CDD893C6031C
static BOOL GET_IS_USING_ALTERNATE_DRIVEBY() { return invoke<BOOL>(0xE6B170); } // 0x7BC5EE3C02F4154B
static BOOL GET_ALLOW_MOVEMENT_WHILE_ZOOMED() { return invoke<BOOL>(0xE6B190); } // 0x22C925E7C63C5628
static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) { invoke<Void>(0xE6B1B0, toggle); } // 0x92F061476F865C31
static void SET_INPUT_EXCLUSIVE(int control, int action) { invoke<Void>(0xE6B1D0, control, action); } // 0x4CC1CF98851922CE
static void DISABLE_CONTROL_ACTION(int control, int action, BOOL disableRelatedActions) { invoke<Void>(0xE6B220, control, action, disableRelatedActions); } // 0x66EFB3D6110055C4
static void ENABLE_CONTROL_ACTION(int control, int action, BOOL enableRelatedActions) { invoke<Void>(0xE6B2B0, control, action, enableRelatedActions); } // 0xB211E45F1FE1ED2D
static void DISABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xE6B340, control); } // 0xD4510218399ED105
static void ENABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xE6B390, control); } // 0xD6D50527C75F8C6C
static BOOL INIT_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xE6B3C0, schemeName); } // 0x005E8B7CFA7D52A6
static BOOL SWITCH_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xE6B3D0, schemeName); } // 0x60923CE1CFC6ABD4
static void SHUTDOWN_PC_SCRIPTED_CONTROLS() { invoke<Void>(0xE6B3E0); } // 0x4E6A84BCEF2DCCBF
static void ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(int control) { invoke<Void>(0xE6B3F0, control); } // 0xE0EEB603997F273F
static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL nodeEnabled, BOOL unknown2) { invoke<Void>(0xE6F500, x1, y1, z1, x2, y2, z2, nodeEnabled, unknown2); } // 0xD1B0AF388B711EBC
static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0xE6F530, x1, y1, z1, x2, y2, z2, width, unknown1, unknown2, unknown3); } // 0x5E08BBBF87BC4886
static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, Any p7) { invoke<Void>(0xE6F570, x1, y1, z1, x2, y2, z2, p6, p7); } // 0x79CA429D8B4B057A
static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xE6F5A0, x, y, z, onGround, outPosition, flags); } // 0xC0EEE6A2207F3CB8
static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeFlags, float p5, float p6) { return invoke<BOOL>(0xE6F6F0, x, y, z, outPosition, nodeFlags, p5, p6); } // 0x3875519517101875
static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, float unknown2) { return invoke<BOOL>(0xE6F7D0, x, y, z, outPosition, unknown1, unknown2); } // 0x8E942EABE97448C2
static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, float p7) { return invoke<BOOL>(0xE6F8A0, x, y, z, outPosition, outHeading, nodeType, p6, p7); } // 0x813ADF2A2A03F440
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, int nodeFlags, float unknown1, float unknown2) { return invoke<BOOL>(0xE6F990, x, y, z, nthClosest, outPosition, nodeFlags, unknown1, unknown2); } // 0x8B777C12D64DF209
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodeFlags, float p5, float p6) { return invoke<int>(0xE6FA70, x, y, z, nth, nodeFlags, p5, p6); } // 0x97C50CC028477E0D
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int* outNumLanes, int nodeFlags, float unknown3, float unknown4) { return invoke<BOOL>(0xE6FB10, x, y, z, nthClosest, outPosition, outHeading, outNumLanes, nodeFlags, unknown3, unknown4); } // 0x6009FBA2EAAA60BE
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p7, float p8) { return invoke<int>(0xE6FC10, x, y, z, nthClosest, outPosition, outHeading, nodeFlags, p7, p8); } // 0x990DA6AEDBBBA89A
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p10, float p11) { return invoke<BOOL>(0xE6FCC0, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodeFlags, p10, p11); } // 0x7F8B389881024657
static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) { return invoke<BOOL>(0xE6FDD0, x, y, z, density, flags); } // 0x99FBD9356770254E
static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0xE6FE00, vehicleNodeId); } // 0x2EE1ADDFD32F7C35
static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0xE6FE20, nodeId, outPosition); } // 0xAAB540AD076E01F8
static BOOL GET_VEHICLE_NODE_IS_GPS_ALLOWED(int nodeID) { return invoke<BOOL>(0xE6FF00, nodeID); } // 0x8D4953B2FFED058B
static BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeID) { return invoke<BOOL>(0xE6FF50, nodeID); } // 0xD2507ABB3A05C571
static BOOL GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<BOOL>(0xE6FFA0, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x748728E3BFD8E371
static BOOL LOAD_ALL_PATH_NODES(BOOL set) { return invoke<BOOL>(0xE70080, set); } // 0x10564B8977071406
static void SET_ALLOW_STREAM_PROLOGUE_NODES(BOOL toggle) { invoke<Void>(0xE700F0, toggle); } // 0x14B872A3D2879E35
static void SET_ALLOW_STREAM_HEIST_ISLAND_NODES(int type) { invoke<Void>(0xE70110, type); } // 0x6FAD8BFDFFCEDD65
static BOOL ARE_NODES_LOADED_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xE70130, x1, y1, x2, y2); } // 0xFFEB5F24B372DFF6
static BOOL REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xE70170, x1, y1, x2, y2); } // 0x693ACD1AA0BDB375
static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xE70220, p0, p1, p2, p3, p4, p5, p6); } // 0x33B6B083EA6305A5
static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7) { invoke<Void>(0xE70240, x1, y1, z1, x2, y2, z2, width, p7); } // 0x2AF2D6F164BD6F5A
static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xE70260, multiplier); } // 0xF9372EC61E6191AF
static void ADJUST_AMBIENT_PED_SPAWN_DENSITIES_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xE70270, p0, p1, p2, p3, p4, p5, p6); } // 0xBAC712AB83AFA8CC
static void SET_PED_PATHS_BACK_TO_ORIGINAL(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xE70310, x1, y1, z1, x2, y2, z2, p6); } // 0xE649818AF72843C4
static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) { return invoke<BOOL>(0xE703C0, x, y, z, radius, p4, p5, p6, outPosition, nodeId); } // 0x0771D4899F0EDF3E
static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0xE705B0, x, y, z, streetName, crossingRoad); } // 0x77BCD89051F77C43
static int GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, BOOL p3, int* direction, float* p5, float* distToNxJunction) { return invoke<int>(0xE70640, x, y, z, p3, direction, p5, distToNxJunction); } // 0x766E7B4FEF97CFDE
static void SET_IGNORE_NO_GPS_FLAG(BOOL toggle) { invoke<Void>(0xE706A0, toggle); } // 0xAD69CF046AA50E85
static void SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(BOOL toggle) { invoke<Void>(0xE706C0, toggle); } // 0x7A0DF3CEAF912D48
static void SET_GPS_DISABLED_ZONE(float x1, float y1, float z1, float x2, float y2, float z3) { invoke<Void>(0xE706E0, x1, y1, z1, x2, y2, z3); } // 0x4F30C4E212ACCAAA
static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke<int>(0xE707A0); } // 0x0715F5EED76FCDE9
static BOOL GET_POS_ALONG_GPS_TYPE_ROUTE(Vector3* result, BOOL p1, float p2, int p3) { return invoke<BOOL>(0xE707D0, result, p1, p2, p3); } // 0x4AF7AA151DA57A33
static BOOL GET_GPS_BLIP_ROUTE_FOUND() { return invoke<BOOL>(0xE708C0); } // 0x1A9014F37459E83F
static BOOL GET_ROAD_BOUNDARY_USING_HEADING(float x, float y, float z, float heading, Vector3* outPosition) { return invoke<BOOL>(0xE708F0, x, y, z, heading, outPosition); } // 0x5053D36357207FD6
static BOOL GET_POSITION_BY_SIDE_OF_ROAD(float x, float y, float z, int p3, Vector3* outPosition) { return invoke<BOOL>(0xE70960, x, y, z, p3, outPosition); } // 0x2DFF53C2897C7990
static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0xE70A00, x, y, z, vehicle); } // 0x1F32EC7CE9CC63A2
static int GET_NEXT_GPS_DISABLED_ZONE_INDEX() { return invoke<int>(0xE70AB0); } // 0x278706F2D0A8F29B
static void SET_GPS_DISABLED_ZONE_AT_INDEX(float x1, float y1, float z1, float x2, float y2, float z2, int index) { invoke<Void>(0xE70AE0, x1, y1, z1, x2, y2, z2, index); } // 0xAAD42D6F976511F9
static void CLEAR_GPS_DISABLED_ZONE_AT_INDEX(int index) { invoke<Void>(0xE70BA0, index); } // 0x0887AF6FA4371E08
static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<Void>(0xE70BD0, x, y, radius); } // 0x8998A86E45C5155C
static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0xE70C20); } // 0x81F9331288182129
static BOOL IS_NAVMESH_REQUIRED_REGION_IN_USE() { return invoke<BOOL>(0xE70C40); } // 0x53F38E2C8579B2AA
static void DISABLE_NAVMESH_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle) { invoke<Void>(0xE70C70, x1, y1, z1, x2, y2, z2, toggle); } // 0xA8C09F16998DFD28
static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0xE70C90); } // 0xD33AE43EA8DC1C58
static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xE70CB0, x1, y1, z1, x2, y2, z2); } // 0x75A7B7B3DF681621
static int GET_NUM_NAVMESHES_EXISTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE70CE0, x1, y1, z1, x2, y2, z2); } // 0x758F97A0C79EEFBF
static int ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<int>(0xE70D10, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x8CC50AC10D8037C7
static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xE70DD0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD9ECC9BB146EA4A4
static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0xE70E90, p0); } // 0x8E99C7AF6C6639AB
static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xE70EC0, p0); } // 0xF935563454D3B338
static float GET_APPROX_HEIGHT_FOR_POINT(float x, float y) { return invoke<float>(0xE70EF0, x, y); } // 0x54D01A0F98391D5B
static float GET_APPROX_HEIGHT_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xE70F20, x1, y1, x2, y2); } // 0x2093CB9E0E9B985F
static float GET_APPROX_FLOOR_FOR_POINT(float x, float y) { return invoke<float>(0xE70F60, x, y); } // 0xFAF53F2F65D5EE26
static float GET_APPROX_FLOOR_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xE70F90, x1, y1, x2, y2); } // 0x05DB7284C236A9DE
static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xE70FD0, x1, y1, z1, x2, y2, z2); } // 0x1287CC087A5CE000
static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xE8FBF0, pedType, modelHash, x, y, z, heading, isNetwork, bScriptHostPed); } // 0xB1DBFEB95C0EFB88
static void DELETE_PED(Ped* ped) { invoke<Void>(0xE8FC40, ped); } // 0x734A9F4537A31459
static Ped CLONE_PED(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag) { return invoke<Ped>(0xE8FC50, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag); } // 0xEA797D2F13BCD0AA
static Ped CLONE_PED_ALT(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag, BOOL p4) { return invoke<Ped>(0xE8FCA0, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag, p4); } // 0x7486FF8F1B2245EA
static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0xE8FCF0, ped, targetPed); } // 0x4E719C7F4406EC93
static void CLONE_PED_TO_TARGET_ALT(Ped ped, Ped targetPed, BOOL p2) { invoke<Void>(0xE8FD90, ped, targetPed, p2); } // 0xCA1E369E8B71BF45
static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0xE8FE30, ped, vehicle, atGetIn); } // 0xCECDBB848D53DEB2
static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xE8FE60, ped, modelHash); } // 0x0595DAC15F5513F9
static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0xE8FF40, ped, atGetIn); } // 0x7F420695E3F776FB
static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xE8FF70, x1, y1, z1, x2, y2, z2); } // 0x59A8C2AB2084CAF7
static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xE90020, ped); } // 0x4FAFF4BCB7633475
static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0xE90080, ped); } // 0xC00DCFE53DCBBABA
static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xE900E0, ped); } // 0xBFD01C2045360289
static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0xE90140, ped, p1); } // 0x89568FA9A6BC0B4A
static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xE901C0, ped); } // 0xBE65C2DD27AEFD7B
static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0xE90230, ped); } // 0xF5327658CA9AF463
static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xE90260, ped); } // 0xC722DDBD6C3E86D7
static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0xE902C0, ped); } // 0x501EBB0523078750
static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xE90320, vehicle, pedType, modelHash, seat, isNetwork, bScriptHostPed); } // 0x8728A378EF2B46B2
static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xE90360, ped, heading); } // 0xFBF90D96AEB26BCF
static void FORCE_ALL_HEADING_VALUES_TO_ALIGN(Ped ped) { invoke<Void>(0xE90450, ped); } // 0xF62B077162F79BAA
static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0xE90460, ped, otherPed, angle); } // 0x3644984C9D7B57EF
static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xE90490, ped); } // 0xFFAC548682B3D56E
static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xE90500, ped); } // 0xD9CCFCDF70474932
static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0xE90560, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x6051CE9D47B0B904
static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0xE905A0, x1, y1, z1, x2, y2, z2, p6, p7); } // 0x68C0C5563ECBBAB6
static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0xE905E0, ped); } // 0x65F146FF416F109F
static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0xE90640, ped, accuracy); } // 0xC652B7E19CE29859
static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xE906D0, ped); } // 0xF558A1138519E6F6
static void SET_AMBIENT_LAW_PED_ACCURACY_MODIFIER(float multiplier) { invoke<Void>(0xE90740, multiplier); } // 0xEDC191D9E24A6A2D
static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xE90770, ped, modelHash); } // 0x700C28A639389477
static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0xE90830, ped, weaponHash); } // 0xB958FAC3AA36D900
static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0xE90840, ped); } // 0x77870665080C9E81
static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0xE90850, ped, amount); } // 0x2E20E7B6C4BBA61D
static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0xE90930, ped, amount); } // 0x10A676E622A468AA
static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0xE90A10, ped, vehicle, seatIndex); } // 0x73CAFD2038E812B3
static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0xE90A30, ped, toggle); } // 0x9A74653FD0288BAB
static BOOL CAN_CREATE_RANDOM_PED(BOOL p0) { return invoke<BOOL>(0xE90A90, p0); } // 0x5E0FF86EB887D780
static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xE90B50, posX, posY, posZ); } // 0x7F179394883885FA
static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0xE90BD0, vehicle, returnHandle); } // 0x3CD322135CF08E09
static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0xE90C00); } // 0x70BB2517035D5D12
static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xE90C50); } // 0x60E0AE8EF70F606A
static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0xE90CB0, ped); } // 0x6EC1B5B2C6C31862
static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0xE90D10, ped, toggle); } // 0x1537AF7B62B52EB1
static void SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(BOOL toggle) { invoke<Void>(0xE90D70, toggle); } // 0x75B4FDDCE5B4C969
static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0xE90D90, ped); } // 0xB98B1A5B59BC5065
static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0xE90E00, ped); } // 0x26A004F4BA50E71C
static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL includeEntering) { return invoke<Vehicle>(0xE90E80, ped, includeEntering); } // 0x6EF03BE64E058E2F
static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0xE90EB0, ped); } // 0x61BB4B7411E1DF82
static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xE90F10, multiplier); } // 0xF9A2335AB37CF17E
static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xE90F20, p0, p1); } // 0x0397A00D015A11D4
static void SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME() { invoke<Void>(0xE90F40); } // 0x94D0F337C46797FB
static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0xE90F50, x, y, z); } // 0x2A5514EA88DA4DC4
static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xE90FB0, x1, y1, z1, x2, y2, z2); } // 0x89C4F1335B4A6633
static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0xE91030); } // 0x93586F94C370857F
static void INSTANTLY_FILL_PED_POPULATION() { invoke<Void>(0xE91040); } // 0x337117D37E592B05
static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0xE91050, ped); } // 0x1BAABBB7277FCD90
static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0xE91090, ped); } // 0x92875FEB15AFF7C7
static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0xE910D0, ped); } // 0x92D9D3367234ABE7
static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xE91130, ped, vehicle); } // 0x6A89FD77560DE959
static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0xE911D0, ped, amount); } // 0x886FA295C1257AAA
static int GET_PED_MONEY(Ped ped) { return invoke<int>(0xE91230, ped); } // 0x6E01C40ECE96D208
static void SET_HEALTH_SNACKS_CARRIED_BY_ALL_NEW_PEDS(float p0, Any p1) { invoke<Void>(0xE91280, p0, p1); } // 0x4AD0013B427A98CA
static void SET_AMBIENT_PEDS_DROP_MONEY(BOOL p0) { invoke<Void>(0xE912C0, p0); } // 0xB715358D51663C7A
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(BOOL p0) { invoke<Void>(0xE912F0, p0); } // 0x9288ABAC1FCB4745
static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xE91310, ped, toggle); } // 0xE915224DCA36212A
static void SET_PED_UPPER_BODY_DAMAGE_ONLY(Ped ped, BOOL toggle) { invoke<Void>(0xE91360, ped, toggle); } // 0xEFD4518EFFDFB602
static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xE913C0, ped, vehicle); } // 0xF4244288C3EF3306
static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0xE913F0, ped); } // 0x27E68848F0E5D7D9
static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0xE91480, ped); } // 0x5B3431FA66D59A4C
static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0xE914B0, ped); } // 0xFFEFA49356BD7CA2
static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xE91520, ped); } // 0x74CD4FE549433E92
static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0xE91590, ped, p1, p2); } // 0x240E88FB0B8CC932
static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0xE91600, ped); } // 0xE70AAE8EBF7D65BD
static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xE91670, ped); } // 0x483232F244CDBFC6
static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0xE916E0, ped); } // 0xFE90F09EC43D7D44
static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xE91750, ped); } // 0xC5F2281709805477
static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0xE917C0, ped); } // 0x1F7A48429F9F64CE
static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xE91840, ped, toggle); } // 0x34A9A872D3C510BF
static BOOL GET_PED_DIES_IN_WATER(Ped ped) { return invoke<BOOL>(0xE91890, ped); } // 0x9EA69973FD5ABBBD
static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE918F0, ped, toggle); } // 0xA39E0AA2C6BBD52E
static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xE91940, ped); } // 0xE5E6F6EFCE07789A
static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0xE91990, ped, toggle); } // 0x3CDDF07147FB8B6F
static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE919F0, ped, toggle); } // 0x9C18DF7FC19D843C
static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0xE91A50, ped, outBone); } // 0xB76C3F86B744BBA5
static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0xE91AC0, ped); } // 0xCBCBAEEB5BBCA58A
static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0xE91B10, value); } // 0x36978A351E9CB5D8
static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xE91B30); } // 0xDD84F9C956E69AC8
static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0xE91B50, modifier); } // 0x767EC66D239AED1D
static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xE91B70); } // 0x01B722A2B2026558
static void SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(Ped ped, BOOL p1) { invoke<Void>(0xE91B90, ped, p1); } // 0x00941975834A0817
static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0xE91BE0, ped, toggle); } // 0x3F58BFCF656F0DF1
static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) { invoke<Void>(0xE91C40, ped, team, toggle); } // 0x6A17FC9B41F35458
static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0xE91CC0, ped, player, toggle); } // 0xF861636AF1D2D3D2
static void SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(Ped ped, BOOL toggle) { invoke<Void>(0xE91D40, ped, toggle); } // 0x7D2CC3BDBE189210
static void SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(Ped ped, BOOL toggle) { invoke<Void>(0xE91DA0, ped, toggle); } // 0x476AD3ABB8EA8A58
static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0xE91E00, ped); } // 0x84F50401806477CE
static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0xE91E70, ped); } // 0x5A816292AD6929DF
static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0xE91ED0, ped); } // 0x333554781C7582D7
static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0xE91F90, ped); } // 0x9857C978BD3CBEDA
static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xE91FF0, ped); } // 0x2C807E70DCB4BB36
static BOOL IS_PED_LANDING(Any p0) { return invoke<BOOL>(0xE92050, p0); } // 0x285B49B5EF71E8ED
static BOOL IS_PED_DOING_A_BEAST_JUMP(Any p0) { return invoke<BOOL>(0xE920B0, p0); } // 0xC77607B4F69D0DFD
static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0xE92130, ped); } // 0x7CB06BFD42FB0E24
static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0xE92190, ped); } // 0x75B105C651D87D0E
static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0xE921F0, ped); } // 0xCD80FA7E842E5CA9
static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xE92250, ped); } // 0xE7895DBF72C7F282
static BOOL IS_PED_OPENING_DOOR(Ped ped) { return invoke<BOOL>(0xE92280, ped); } // 0xB16071F8F0F2A561
static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0xE92310, ped); } // 0x57E7FD3BD6BB28C0
static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xE923E0, ped); } // 0x2621F11E556C9703
static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) { invoke<Void>(0xE92450, ped, tintIndex); } // 0xD23AAC1FA1C1571E
static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, int* outTintIndex) { invoke<Void>(0xE924A0, ped, outTintIndex); } // 0x651A46CD4EAC23F3
static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) { invoke<Void>(0xE924F0, ped, p1); } // 0x68D0A76A580AC47D
static Object CREATE_PARACHUTE_BAG_OBJECT(Ped ped, BOOL p1, BOOL p2) { return invoke<Object>(0xE92540, ped, p1, p2); } // 0xF3DC3DD7A741C1D5
static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0xE925D0, ped, toggle); } // 0xD0B00571D4BDDC97
static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xE92630, ped); } // 0xDC91B9320E14F119
static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0xE92690, ped); } // 0x0F00017BC718D851
static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xE92750, ped, value); } // 0xC45887CFF81A1950
static void SET_PED_HIGHLY_PERCEPTIVE(Ped ped, BOOL toggle) { invoke<Void>(0xE927B0, ped, toggle); } // 0xCAF62AAD9CA7C260
static void SET_COP_PERCEPTION_OVERRIDES(float seeingRange, float seeingRangePeripheral, float hearingRange, float visualFieldMinAzimuthAngle, float visualFieldMaxAzimuthAngle, float fieldOfGazeMaxAngle, float p6) { invoke<Void>(0xE92800, seeingRange, seeingRangePeripheral, hearingRange, visualFieldMinAzimuthAngle, visualFieldMaxAzimuthAngle, fieldOfGazeMaxAngle, p6); } // 0xF4B325151D7AC09F
static void SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped, float p1) { invoke<Void>(0xE92880, ped, p1); } // 0x7D6A73BC9D136D34
static void DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped) { invoke<Void>(0xE928F0, ped); } // 0x75DACB7D11C3CEF4
static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0xE92940, ped, value); } // 0x25DBF9F9C6BDFFEA
static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0xE929A0, ped, value); } // 0x35365D1E3ADB7109
static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0xE92A00, ped, value); } // 0x3C7306C2CE967C57
static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xE92A60, ped, value); } // 0xC8DEC2468E748263
static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xE92AC0, ped, angle); } // 0xA5D7DCF7BE7B181D
static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xE92B20, ped, angle); } // 0xD1DDDDB8B108DF01
static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0xE92B80, ped, range); } // 0xAF30637CFE0F3A89
static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xE92BE0, ped, angle); } // 0xA6102F762BBA9BC9
static float GET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped) { return invoke<float>(0xE92C40, ped); } // 0x70101B2986BB6AB2
static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, const char* action) { invoke<Void>(0xE92CA0, ped, p1, action); } // 0xF9358C41CC69C616
static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0xE92D60, ped); } // 0xC2BF1F6F84E31EB2
static int CREATE_GROUP(int unused) { return invoke<int>(0xE92DC0, unused); } // 0xAE734C5C560DD787
static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0xE92E40, ped, groupId); } // 0xFF7B703047EDEC8F
static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0xE92E50, ped, groupId); } // 0x03AB73582A77DBD3
static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0xE92E60, pedHandle, groupHandle, toggle); } // 0x2D8E4004BC147E7E
static void REMOVE_GROUP(int groupId) { invoke<Void>(0xE92E80, groupId); } // 0x94CC4CA44256FDCB
static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0xE92E90, ped); } // 0x5C4B3034CCDA5270
static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xE92EA0, ped, groupId); } // 0xD11A63E12F198FDB
static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0xE92ED0, ped); } // 0xC3174723CF144560
static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0xE92F70, groupHandle, separationRange); } // 0x316802E03D8923D8
static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xE92F80, ped, ms); } // 0xFED960E0DE07E343
static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0xE92FC0, ped); } // 0x78174817EDF226B3
static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0xE93020, ped, target); } // 0x1B32E388988DD296
static Entity GET_PED_TARGET_FROM_COMBAT_PED(Ped ped, Any p1) { return invoke<Entity>(0xE93050, ped, p1); } // 0x11330C43B3678209
static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xE93080, ped, target); } // 0xB8CCCA6CFFCE7734
static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xE93130, ped); } // 0xB29E06D8C7B733E6
static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0xE931C0, ped); } // 0x49CB27F641DC1328
static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0xE931F0, ped); } // 0xA6534E6C7AE314D6
static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0xE93220, ped, p1); } // 0x11BF418D1AFD7970
static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xE93250, ped); } // 0xC1089D3918F03D33
static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0xE93270, ped); } // 0x3DEAB4931240C1E3
static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xE93290, ped); } // 0xCA038E64C65D1F9D
static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) { return invoke<BOOL>(0xE932C0, ped, exceptUseWeapon); } // 0xD6179D448A06A77F
static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0xE932F0, ped); } // 0xC0BE0D29628A246A
static BOOL IS_PED_IN_HIGH_COVER(Ped ped) { return invoke<BOOL>(0xE93320, ped); } // 0xFAD234E6A6D853B1
static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0xE93350, ped); } // 0x3F055D2CBA242A5D
static BOOL SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<BOOL>(0xE93410, ped, pinned, i); } // 0x97FBC735CAFB56C8
static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0xE935A0, ped); } // 0x03603B0046EE6ACD
static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xE935C0, ped); } // 0xF9F8E3060F7CAEDB
static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0xE935E0, ped); } // 0x836392D80E4F106A
static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0xE93640, ped); } // 0x6D7C109F77738F39
static int GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0xE93690, ped); } // 0x1F4CEA172C882694
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET(Ped ped) { return invoke<int>(0xE936E0, ped); } // 0x8B5EECBB010D0C63
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Ped ped, float x, float y, float z, float radius) { return invoke<int>(0xE93750, ped, x, y, z, radius); } // 0xF483865E4C02C371
static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0xE93820, ped, hash); } // 0x17ABD7A8B101AF83
static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0xE93880, ped, hash); } // 0x3CEA1FD137ACE2D9
static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xE93890, relationship, group1, group2); } // 0xD414C47AFF81382A
static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xE93910, relationship, group1, group2); } // 0x40D1AAC4EFD3C281
static BOOL ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) { return invoke<BOOL>(0xE93950, name, groupHash); } // 0x06CD913C241C765E
static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0xE939C0, groupHash); } // 0x2B1BDC32466B40A9
static BOOL DOES_RELATIONSHIP_GROUP_EXIST(Hash groupHash) { return invoke<BOOL>(0xE939D0, groupHash); } // 0xB2AE1A67479A5AF3
static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xE93A00, ped1, ped2); } // 0x1E37AEC038A241A3
static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0xE93AB0, ped); } // 0x4001C3C533FE6925
static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0xE93B10, ped); } // 0x2A661A0285B74A27
static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0xE93B70, group1, group2); } // 0x048553DADAD2512F
static void SET_RELATIONSHIP_GROUP_AFFECTS_WANTED_LEVEL(Hash group, BOOL p1) { invoke<Void>(0xE93BD0, group, p1); } // 0x290573EE8D28208D
static void TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(Ped ped, Any p1, float p2, Hash hash, Any p4, Any p5) { invoke<Void>(0xE93C60, ped, p1, p2, hash, p4, p5); } // 0xC0343109FF76497E
static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0xE93C80, ped, toggle); } // 0x89C101B2B73350C7
static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { invoke<Void>(0xE93CE0, ped, radius, maxFriends); } // 0xDC914F868C070C56
static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return invoke<BOOL>(0xE93D60, ped, event); } // 0x81ECDD5A759C026D
static BOOL GET_POS_FROM_FIRED_EVENT(Ped ped, int eventType, Any* outData) { return invoke<BOOL>(0xE93DC0, ped, eventType, outData); } // 0x6B7357A27B4D68F1
static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0xE93E40, ped, patternHash); } // 0x675B6F5098262382
static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0xE93E50, ped, shootRate); } // 0x39256A89E9D7464A
static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xE93F00, ped, combatType, p2); } // 0xC3AD0E1324FB3465
static float GET_COMBAT_FLOAT(Ped ped, int p1) { return invoke<float>(0xE93F70, ped, p1); } // 0x34DE92FC6933B92B
static void GET_GROUP_SIZE(int groupID, Any* p1, int* sizeInMembers) { invoke<Void>(0xE93FF0, groupID, p1, sizeInMembers); } // 0xE6E9D3B5BEFF0EB3
static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0xE94080, groupId); } // 0xDC469CE2BE7CE722
static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0xE940C0, ped); } // 0x26B246D60FABB3E2
static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0xE940E0, ped); } // 0x133460AD0F183CC9
static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0xE94140, ped); } // 0x5F858847305B52A9
static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xE94160, groupId, formationType); } // 0xDC80C872B18711B5
static void SET_GROUP_FORMATION_SPACING(int groupId, float x, float y, float z) { invoke<Void>(0xE941D0, groupId, x, y, z); } // 0x47F8464BB13E408D
static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xE94280, groupHandle); } // 0xAD9D10D7F8C6F478
static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0xE94300, ped); } // 0xCDA725BC2F170795
static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped ped) { return invoke<Vehicle>(0xE94380, ped); } // 0x31945A289F1359A1
static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0xE943A0, ped, toggle); } // 0x7EF69980DE8B28B0
static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL p2, Any p3) { invoke<Void>(0xE94490, ped, damageAmount, p2, p3); } // 0x39AB1812D20C2C99
static int GET_TIME_PED_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash) { return invoke<int>(0xE94600, ped, weaponHash); } // 0x81B96B8125212E06
static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0xE946B0, ped, toggle); } // 0x4CE80A0172B32F75
static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0xE94710, ped, toggle); } // 0xBC14FFDBE1C32C51
static int GET_PED_TYPE(Ped ped) { return invoke<int>(0xE94770, ped); } // 0x0DFE7358172FC006
static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0xE947D0, ped, toggle); } // 0x91B8DEBF573007DE
static void SET_PED_HEALTH_PENDING_LAST_DAMAGE_EVENT_OVERRIDE_FLAG(BOOL toggle) { invoke<Void>(0xE94860, toggle); } // 0x12100CAEF6D8A8EF
static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0xE94890, ped, value); } // 0x36A20106D0B42723
static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0xE94900, ped); } // 0x3C8EDE4003ABACA0
static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xE94950, ped, value); } // 0xABA0B084615631D7
static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0xE949D0, ped, value); } // 0x0ACCC8916441860A
static void SET_CORPSE_RAGDOLL_FRICTION(Ped ped, float p1) { invoke<Void>(0xE94A30, ped, p1); } // 0xC082B2B13450E715
static void SET_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped, Vehicle vehicle, int seatIndex, int flags, Any p4) { invoke<Void>(0xE94A80, ped, vehicle, seatIndex, flags, p4); } // 0xFD763E094E35D34A
static void CLEAR_ALL_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped) { invoke<Void>(0xE94AA0, ped); } // 0x3805B001642BC9B1
static void SET_PED_CAN_BE_KNOCKED_OFF_BIKE(Any p0, Any p1) { invoke<Void>(0xE94AF0, p0, p1); } // 0xE57B0AA791ADBC93
static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0xE94B00, ped, state); } // 0x68F395D64BC35E68
static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0xE94B80, ped); } // 0x02F51D23580B7A15
static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0xE94C40, ped); } // 0x0C771CCC16BC7A60
static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xE94C50, ped, posX, posY, posZ); } // 0xCE2DE9BE961A9AF1
static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0xE94CC0, groupID, memberNumber); } // 0x619062CCF4C1D4D5
static Ped GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0xE94D40, groupID); } // 0x6814C7F2C075A4F3
static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0xE94DB0, ped, toggle); } // 0x44FB298D6382876D
static void SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(Ped ped, BOOL toggle) { invoke<Void>(0xE94E10, ped, toggle); } // 0x55A8A33A33B949EC
static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0xE94E60, ped); } // 0x2CFBD7757B4D922F
static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0xE94EC0, ped); } // 0x9AC89B274C35B3FC
static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xE94F30, ped, posX, posY, posZ); } // 0x2B083B6FDD0231F9
static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE94FC0, ped, toggle); } // 0xD394176EC453FD41
static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xE95020, toggle); } // 0xD682DD0578BF5392
static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xE95050, toggle); } // 0xD5E2F27BCC913BE9
static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xE95070, toggle); } // 0x931C6A48678F5793
static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xE95090); } // 0x714C359ADAF7B58F
static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0xE950B0, ped, toggle); } // 0x4BD214FCF7332FF6
static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xE95100, ped, p1, p2); } // 0xB2EDAEE9E5BA8E24
static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0xE95170, ped); } // 0x17CB7D9FBEC4100F
static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xE951F0, ped); } // 0x9D6DF8F3584AAC2B
static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0xE95220, ped); } // 0x74408742BCE2802F
static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0xE952E0, ped, toggle); } // 0x590E598CA58BADDE
static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0xE95360, ped, toggle); } // 0xCF10C35FF25A86A7
static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0xE953E0, ped, toggle); } // 0x61BBBE1B9F8AC7D0
static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xE95440, ped, toggle, p2); } // 0x19621C4DDF8636D4
static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0xE954C0, ped); } // 0xD8746B5875BA4019
static void SET_PED_ALERTNESS(Ped ped, int value) { invoke<Void>(0xE95520, ped, value); } // 0x085B81BB17715A70
static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE95570, ped, toggle); } // 0x379E96D5D36B27DC
static void SET_PED_MOVEMENT_CLIPSET(Ped ped, const char* clipSet, float transitionSpeed) { invoke<Void>(0xE955D0, ped, clipSet, transitionSpeed); } // 0x4669032A1DFBB449
static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0xE955F0, ped, p1); } // 0x4A46A67DB6AC487D
static void SET_PED_STRAFE_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xE95660, ped, clipSet); } // 0x696095B298957860
static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0xE95670, ped); } // 0x529EC998DD2C51F8
static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xE956D0, ped, clipSet); } // 0xC806A20F4C5AC6AF
static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0xE956E0, ped); } // 0xC935F6A2D1890729
static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, const char* clipset) { invoke<Void>(0xE95740, ped, clipset); } // 0x1E4D3966543704DD
static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xE95750, ped); } // 0x728A2C1D61F55E08
static void SET_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped, const char* p1) { invoke<Void>(0xE957A0, ped, p1); } // 0x6D80A3E2F71A926F
static void CLEAR_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xE957B0, ped); } // 0x8ED4FEE426B22F3D
static void CLEAR_PED_FALL_UPPER_BODY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xE95800, ped); } // 0xBFCE94361188CEB2
static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xE95850, ped, context); } // 0x9E02F7BF34671713
static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0xE958C0, ped); } // 0x26E9393912EA6F6A
static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, const char* animDict, const char* anim) { return invoke<BOOL>(0xE95920, ped, animDict, anim); } // 0xA23312A0DE89348E
static void SET_PED_ALTERNATE_WALK_ANIM(Ped ped, const char* animDict, const char* animName, float p3, BOOL p4) { invoke<Void>(0xE95950, ped, animDict, animName, p3, p4); } // 0x3AE0EEB34FAAC92B
static void CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) { invoke<Void>(0xE95980, ped, p1); } // 0x8B224316C228BF51
static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, BOOL p5) { invoke<Void>(0xE95A20, ped, stance, animDictionary, animationName, p4, p5); } // 0xCC2D0738666FD62D
static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0xE95A50, ped, stance, p2); } // 0x384E72D362B96929
static void SET_PED_GESTURE_GROUP(Ped ped, const char* animGroupGesture) { invoke<Void>(0xE95B00, ped, animGroupGesture); } // 0xA962F06E648B8941
static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xE95B90, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0xBE8776D2466E9EA6
static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xE95CA0, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0x7A6103DCF5EE8CC3
static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE95DB0, ped, componentId); } // 0xC0120BBCC298EA2F
static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0xE95E20, ped, componentId); } // 0x1A4EFE92822E3123
static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE95E50, ped, componentId); } // 0xD6AED6BFCC58AF7F
static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0xE95EC0, ped, componentId, drawableId); } // 0x8401C77F508D70FD
static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0xE95EF0, ped, propId); } // 0x4D0F04723A52D0E9
static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0xE95F20, ped, propId, drawableId); } // 0x1D77F90D87ACD2BA
static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE95F50, ped, componentId); } // 0xDAF263B0E792EAEC
static BOOL GET_MP_OUTFIT_DATA_FROM_METADATA(Any* p0, Any* p1) { return invoke<BOOL>(0xE95FB0, p0, p1); } // 0x386E4537DAFC3779
static int GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0xE95FE0, p0); } // 0x82ADFEA98A0C26DC
static int GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0xE96000, p0); } // 0x6F4B2AB7CFB2F472
static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xE96020, ped, componentId, drawableId, textureId); } // 0xE91CD2B3CF8A106C
static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0xE960A0, ped, componentId, drawableId, textureId, paletteId); } // 0xD1C578C204015E1F
static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, int p1) { invoke<Void>(0xE96160, ped, p1); } // 0xC6E8E1D693021E9E
static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0xE96200, ped); } // 0xB6FA664D27C123AC
static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0xE962B0, ped); } // 0x77EFA99E6A8FFC43
static void SET_PED_BLEND_FROM_PARENTS(Ped ped, Any p1, Any p2, float p3, float p4) { invoke<Void>(0xE96330, ped, p1, p2, p3, p4); } // 0x335B397DCC88FD74
static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0xE96350, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); } // 0x0A5987DCA39E8BE5
static BOOL GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0xE964B0, ped, headBlendData); } // 0x5CB7287FD7611BC7
static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0xE965A0, ped, shapeMix, skinMix, thirdMix); } // 0xB320F619D5CC2D27
static void SET_HEAD_BLEND_EYE_COLOR(Ped ped, int index) { invoke<Void>(0xE96620, ped, index); } // 0x348FF3E632DCB635
static int GET_HEAD_BLEND_EYE_COLOR(Ped ped) { return invoke<int>(0xE96670, ped); } // 0x795C9AE513FFEF5F
static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xE966D0, ped, overlayID, index, opacity); } // 0xE5B6C9B29510B84E
static int GET_PED_HEAD_OVERLAY(Ped ped, int overlayID) { return invoke<int>(0xE96750, ped, overlayID); } // 0x8E73BECF421D257E
static int GET_PED_HEAD_OVERLAY_NUM(int overlayID) { return invoke<int>(0xE967C0, overlayID); } // 0x6D19BF3A83702C49
static void SET_PED_HEAD_OVERLAY_TINT(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0xE968E0, ped, overlayID, colorType, colorID, secondColorID); } // 0x94965BB62753D4D6
static void SET_PED_HAIR_TINT(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0xE96960, ped, colorID, highlightColorID); } // 0x894EE2587C8D8D1E
static int GET_NUM_PED_HAIR_TINTS() { return invoke<int>(0xE969C0); } // 0x37A0D41DCFB52CC8
static int GET_NUM_PED_MAKEUP_TINTS() { return invoke<int>(0xE969D0); } // 0x0A4209F7407B86F6
static void GET_PED_HAIR_TINT_COLOR(int hairColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0xE969E0, hairColorIndex, outR, outG, outB); } // 0xB062D1D08D9CC751
static void GET_PED_MAKEUP_TINT_COLOR(int makeupColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0xE96A30, makeupColorIndex, outR, outG, outB); } // 0x091AAB4C71ADE4CD
static BOOL IS_PED_HAIR_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xE96A80, colorId); } // 0xCBC4C0F54C8BFFD1
static int GET_DEFAULT_SECONDARY_TINT_FOR_CREATOR(int colorId) { return invoke<int>(0xE96AD0, colorId); } // 0xBED8C136A36DA2C4
static BOOL IS_PED_LIPSTICK_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xE96B10, colorId); } // 0xC4DF7897A59B7B8F
static BOOL IS_PED_BLUSH_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xE96B60, colorId); } // 0x86F83CBBA37677B2
static BOOL IS_PED_HAIR_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xE96BB0, colorID); } // 0xBB9FAE42E3101CD8
static int GET_DEFAULT_SECONDARY_TINT_FOR_BARBER(int colorID) { return invoke<int>(0xE96C00, colorID); } // 0x0BC34ECDC4790796
static BOOL IS_PED_LIPSTICK_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xE96C40, colorID); } // 0x52611559311E2B64
static BOOL IS_PED_BLUSH_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xE96C90, colorID); } // 0xE3FAB626C2DBDF88
static BOOL IS_PED_BLUSH_FACEPAINT_TINT_FOR_BARBER(int colorId) { return invoke<BOOL>(0xE96CE0, colorId); } // 0xA3089FB5A559E0D5
static int GET_TINT_INDEX_FOR_LAST_GEN_HAIR_TEXTURE(Hash modelHash, int drawableId, int textureId) { return invoke<int>(0xE96D30, modelHash, drawableId, textureId); } // 0xD839A970B98A1E9C
static void SET_PED_MICRO_MORPH(Ped ped, int index, float scale) { invoke<Void>(0xE96E10, ped, index, scale); } // 0xAAF9B08B469F707F
static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0xE96E80, ped); } // 0x4CEC77F224BCD884
static void FINALIZE_HEAD_BLEND(Ped ped) { invoke<Void>(0xE96EE0, ped); } // 0xAF8337BF5A296283
static void SET_HEAD_BLEND_PALETTE_COLOR(Ped ped, int r, int g, int b, int id) { invoke<Void>(0xE96F30, ped, r, g, b, id); } // 0xA3C0950202881572
static void DISABLE_HEAD_BLEND_PALETTE_COLOR(Ped ped) { invoke<Void>(0xE96FF0, ped); } // 0x0C3579BA21459B45
static int GET_PED_HEAD_BLEND_FIRST_INDEX(int type) { return invoke<int>(0xE97040, type); } // 0x6C88944114345A04
static int GET_PED_HEAD_BLEND_NUM_HEADS(int type) { return invoke<int>(0xE970A0, type); } // 0x69618F2236615539
static int SET_PED_PRELOAD_VARIATION_DATA(Ped ped, int slot, int drawableId, int textureId) { return invoke<int>(0xE97110, ped, slot, drawableId, textureId); } // 0xBE291C733F237949
static BOOL HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xE971D0, ped); } // 0xB76612E72B637A6B
static void RELEASE_PED_PRELOAD_VARIATION_DATA(Ped ped) { invoke<Void>(0xE97230, ped); } // 0x30325AB568E2F2EF
static int SET_PED_PRELOAD_PROP_DATA(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<int>(0xE97280, ped, componentId, drawableId, TextureId); } // 0xEC129CEFDDA0A303
static BOOL HAS_PED_PRELOAD_PROP_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xE97340, ped); } // 0x14491B5694114619
static void RELEASE_PED_PRELOAD_PROP_DATA(Ped ped) { invoke<Void>(0xE973A0, ped); } // 0xB736C2C734C35F54
static int GET_PED_PROP_INDEX(Ped ped, int componentId, Any p2) { return invoke<int>(0xE973F0, ped, componentId, p2); } // 0xB204F40D393426B6
static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach, Any p5) { invoke<Void>(0xE97450, ped, componentId, drawableId, TextureId, attach, p5); } // 0x7F08C4791E6D6969
static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xE97480, ped, p1, p2, p3, p4); } // 0xE19C037272259115
static void CLEAR_PED_PROP(Ped ped, int propId, Any p2) { invoke<Void>(0xE97520, ped, propId, p2); } // 0x09397806857F5DFB
static void CLEAR_ALL_PED_PROPS(Ped ped, Any p1) { invoke<Void>(0xE97580, ped, p1); } // 0x445E7F949766A0C7
static void DROP_AMBIENT_PROP(Ped ped) { invoke<Void>(0xE975D0, ped); } // 0x5A5573FECDE27C3C
static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0xE97660, ped, componentId); } // 0x0DC23FA727759F9F
static void CLEAR_PED_PARACHUTE_PACK_VARIATION(Ped ped) { invoke<Void>(0xE976C0, ped); } // 0xCDF42A1B8D2576E8
static void SET_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xE97710, ped); } // 0x07E6931DA4A9ACB6
static void CLEAR_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xE97760, ped); } // 0xB0EFB4958498E2D0
static BOOL IS_USING_PED_SCUBA_GEAR_VARIATION(Any p0) { return invoke<BOOL>(0xE977B0, p0); } // 0x1D5385246A3434D3
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xE97810, ped, toggle); } // 0xAAA71DD7E9059338
static void SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float x, float y, float z) { invoke<Void>(0xE97830, ped, p1, p2, x, y, z); } // 0xEABB1C18FA028606
static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xE978D0, ped, target); } // 0xC225BC409BD24794
static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0xE97980, ped, radius); } // 0xA2759157C7F12D3C
static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0xE97A20, x, y, z, xRadius, yRadius, zRadius, pedType); } // 0xFA4D35AD36BDA1FE
static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0xE97A50, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); } // 0x02E029D1D9614563
static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0xE97B50, value); } // 0x9C9B7988CF45CAF0
static BOOL GET_CAN_PED_BE_GRABBED_BY_SCRIPT(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0xE97B70, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x51150F0B2D9D1CF3
static void SET_DRIVER_RACING_MODIFIER(Ped driver, float modifier) { invoke<Void>(0xE97C60, driver, modifier); } // 0xF823BACD940DEAF1
static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0xE97CD0, driver, ability); } // 0x6D618646705A0465
static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0xE97D40, driver, aggressiveness); } // 0x8C863F5EB14919DB
static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xE97DB0, ped); } // 0xC24FAA5E8D69F7F8
static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xE97E30, ped, time1, time2, ragdollType, p4, p5, p6); } // 0xB1C2DC5C115FA50D
static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float velocity, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0xE97E90, ped, time, p2, ragdollType, x, y, z, velocity, p8, p9, p10, p11, p12, p13); } // 0x52B67D4C57E4BF4B
static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xE97EE0, ped, toggle); } // 0xF9E1F44FD9B4934B
static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xE97F00, ped); } // 0x8BF5256C439DF778
static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xE97F70, ped); } // 0x86521C678E8AA3FF
static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0xE98000, ped); } // 0x661428616F87F180
static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0xE98080, ped); } // 0xBD1B952A9BBB567F
static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0xE980F0, ped, toggle); } // 0x9FF00EA9A61211D2
static BOOL IS_PED_RUNNING_MELEE_TASK(Ped ped) { return invoke<BOOL>(0xE98110, ped); } // 0x942229677774817C
static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0xE98170, ped); } // 0x65815C3D3CB39062
static BOOL IS_MOBILE_PHONE_TO_PED_EAR(Ped ped) { return invoke<BOOL>(0xE981C0, ped); } // 0xD9FC29710C12DA3A
static void SET_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xE98250, ped, blockingFlag); } // 0x72B18C9612CF3DA0
static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xE98260, ped, blockingFlag); } // 0xBCB78CFBB026B0DF
static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xE982D0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xDF2B856299BCDF13
static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0xE98300, ped, x, y, z, radius, p5, p6); } // 0xBB4D4E549F8E6E8C
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xE983F0, ped, target, xOffset, yOffset, zOffset, radius, p6); } // 0x98EEF9ADA73BD5B2
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Ped ped, Vehicle target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xE98420, ped, target, xOffset, yOffset, zOffset, radius, p6); } // 0x06AA75009161058B
static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0xE98450, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xE0C92005A30D227B
static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xE98490, ped, p1, p2, p3, p4); } // 0x1738EA03946B4D2A
static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0xE98550, ped, toggle); } // 0x805B057FA4E28531
static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<Vector3>(0xE985B0, ped, p1); } // 0x93B95A59CB61088B
static BOOL IS_PED_DEFENSIVE_AREA_ACTIVE(Ped ped, BOOL p1) { return invoke<BOOL>(0xE98620, ped, p1); } // 0x4B3F6436660DC25C
static void SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) { invoke<Void>(0xE986A0, ped, itemSet); } // 0x392230C626567F51
static void REMOVE_PED_PREFERRED_COVER_SET(Ped ped) { invoke<Void>(0xE986F0, ped); } // 0x97FD4A8DDB09A043
static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0xE98740, ped); } // 0xB713CAFC12DED3BE
static void RESURRECT_PED(Ped ped) { invoke<Void>(0xE987D0, ped); } // 0x6ED737C2A74E181D
static void SET_PED_NAME_DEBUG(Ped ped, const char* name) { invoke<Void>(0xE98870, ped, name); } // 0xEB418CA245FFE897
static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL worldSpace) { return invoke<Vector3>(0xE98880, ped, worldSpace); } // 0x8C4993D059F4DAEB
static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xE98960, ped, toggle); } // 0x9E6CC93E007219AC
static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0xE989D0, ped, toggle); } // 0x9590C8D34FFFCE10
static void SPECIAL_FUNCTION_DO_NOT_USE(Ped ped, BOOL p1) { invoke<Void>(0xE98A30, ped, p1); } // 0x4EBA48817E0C608D
static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0xE98AB0, ped); } // 0x69AE13B08EFD8497
static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { invoke<Void>(0xE98B00, ped, p1, p2, p3, p4); } // 0x83707FFC4BC486A1
static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, const char* woundType) { invoke<Void>(0xE98C50, ped, boneIndex, xRot, yRot, zRot, woundType); } // 0xFFD554A221AA80F0
static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, int p1, float p2, float p3, const char* p4) { invoke<Void>(0xE98D20, ped, p1, p2, p3, p4); } // 0x07D31B8F40A98A75
static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, int p1, float p2, float p3, float p4, float p5, int p6, float p7, const char* p8) { invoke<Void>(0xE98E00, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD1D8E1BF0769890C
static void APPLY_PED_DAMAGE_DECAL(Ped ped, int damageZone, float xOffset, float yOffset, float heading, float scale, float alpha, int variation, BOOL fadeIn, const char* decalName) { invoke<Void>(0xE98F10, ped, damageZone, xOffset, yOffset, heading, scale, alpha, variation, fadeIn, decalName); } // 0xC9FB3D0735F8ECD9
static void APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) { invoke<Void>(0xE99030, ped, damagePack, damage, mult); } // 0x5909C9E03CEF097D
static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0xE990E0, ped); } // 0x8EA9C5E0178372E1
static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0xE99130, ped, p1); } // 0x1926B687CF984FCC
static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) { invoke<Void>(0xE99180, ped, p1, p2); } // 0x81C558E9A03D2F2B
static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, const char* p2) { invoke<Void>(0xE991F0, ped, p1, p2); } // 0xC6DFC06670D0589A
static int GET_PED_DECORATIONS_STATE(Ped ped) { return invoke<int>(0xE99290, ped); } // 0x1ACEEA8FD72F77BC
static void MARK_PED_DECORATIONS_AS_CLONED_FROM_LOCAL_PLAYER(Ped ped, BOOL p1) { invoke<Void>(0xE99350, ped, p1); } // 0x67A5951D0BFF01FA
static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0xE993C0, ped); } // 0x5EF96FB2D3902DC7
static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0xE99420, ped, height); } // 0x545222B91BFCB344
static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0xE99490, ped); } // 0x0DFA7D3DCFE10E65
static void SET_PED_WETNESS(Ped ped, float wetLevel) { invoke<Void>(0xE994E0, ped, wetLevel); } // 0xA60928A188EC78EF
static void CLEAR_PED_ENV_DIRT(Ped ped) { invoke<Void>(0xE99540, ped); } // 0xD81F5EA29FD2682E
static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0xE99580, ped, sweat); } // 0xB44335AF5013DA2A
static void ADD_PED_DECORATION_FROM_HASHES(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xE995D0, ped, collection, overlay); } // 0x49A5A17556C31561
static void ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xE99670, ped, collection, overlay); } // 0x166CDAB8FE42C210
static int GET_PED_DECORATION_ZONE_FROM_HASHES(Hash collection, Hash overlay) { return invoke<int>(0xE99730, collection, overlay); } // 0x50CA4ACB66148FF0
static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xE99790, ped); } // 0xA781062E77B54775
static void CLEAR_PED_DECORATIONS_LEAVE_SCARS(Ped ped) { invoke<Void>(0xE997E0, ped); } // 0x98E00E3ED7D61628
static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0xE99860, ped); } // 0x3268785AA66D674C
static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xE998A0, ped, boneId, offsetX, offsetY, offsetZ); } // 0x83FDC027F0BEA202
static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0xE99910, startImmediately, messageId); } // 0x83DCA877143E0B26
static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0xE99980, ped); } // 0xAFFF2379B0BAC81C
static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<int>(0xE99990, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); } // 0xA7B0B03284E7503C
static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0xE999F0); } // 0x830C51B62E7CD5B2
static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0xE99A10, p0, p1); } // 0xD7B6A43ACC36D868
static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { invoke<Void>(0xE99A30, x, y, z, range, p4); } // 0x2485C562F3C50736
static BOOL DOES_SCENARIO_BLOCKING_AREA_EXISTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xE99AB0, x1, y1, z1, x2, y2, z2); } // 0xCFE9A25C2271CFBF
static BOOL IS_PED_USING_SCENARIO(Ped ped, const char* scenario) { return invoke<BOOL>(0xE99B40, ped, scenario); } // 0x282B0289FBD3C119
static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xE99B70, ped); } // 0x5110BDFA9CB51F2B
static BOOL SET_PED_PANIC_EXIT_SCENARIO(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99BD0, p0, p1, p2, p3); } // 0x51468F9DE2FB70E4
static void TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Ped ped, BOOL toggle) { invoke<Void>(0xE99C00, ped, toggle); } // 0x2A3951555E558728
static BOOL TRIGGER_PED_SCENARIO_PANICEXITTOFLEE(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99C70, p0, p1, p2, p3); } // 0xD4DE27DF3E2EBFF4
static BOOL SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99CA0, p0, p1, p2, p3); } // 0xFFB6CB69ACC75D8D
static void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xE99D50, ped); } // 0xAB51C8960A87DF53
static void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xE99DA0, ped); } // 0x895CE77855F9AFD2
static BOOL SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped ped, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99DF0, ped, p1, p2, p3); } // 0x36B2377A209962E5
static void SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(Ped ped, BOOL p1) { invoke<Void>(0xE99EB0, ped, p1); } // 0x77837D91524AF89C
static void SET_PED_SHOULD_IGNORE_SCENARIO_NAV_CHECKS(Any p0, BOOL p1) { invoke<Void>(0xE99F00, p0, p1); } // 0x92298AA9DE8C4A55
static void SET_PED_SHOULD_PROBE_FOR_SCENARIO_EXITS_IN_ONE_FRAME(Any p0, BOOL p1) { invoke<Void>(0xE99F60, p0, p1); } // 0xE54C4227DC826E1C
static BOOL IS_PED_GESTURING(Any p0) { return invoke<BOOL>(0xE99FB0, p0); } // 0xB3BE3390D375B97E
static void RESET_FACIAL_IDLE_ANIM(Ped ped) { invoke<Void>(0xE9A000, ped); } // 0xCE0A933AAD7CE47D
static void PLAY_FACIAL_ANIM(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xE9A050, ped, animName, animDict); } // 0x7ACB6964CC7261E4
static void SET_FACIAL_CLIPSET(Ped ped, const char* animDict) { invoke<Void>(0xE9A070, ped, animDict); } // 0xA86012225D130D96
static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xE9A120, ped, animName, animDict); } // 0x2C09C6B54CFCFAF1
static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0xE9A140, ped); } // 0x490EA3A0CF334F58
static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xE9A150, ped, toggle); } // 0x47B4C8905694BBE1
static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xE9A1C0, ped, toggle, p2); } // 0x5260CB9F2F8EA05A
static void SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(Ped ped, BOOL p1) { invoke<Void>(0xE9A250, ped, p1); } // 0x39259B19C39CA05F
static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xE9A2B0, ped, toggle); } // 0xC1BC1B8A5AA67C6B
static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xE9A300, ped, toggle); } // 0xD9757FAB956617BA
static void TRIGGER_IDLE_ANIMATION_ON_PED(Ped ped) { invoke<Void>(0xE9A350, ped); } // 0xC4BFA8F80937118D
static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A3B0, ped, toggle); } // 0x59481BA67136FCF1
static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A460, ped, toggle); } // 0x07B9040E912A4EA1
static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A4C0, ped, toggle); } // 0x2270A1F43A18098E
static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A520, ped, toggle); } // 0x0EAF677B65FA8A40
static void SET_PED_CAN_TORSO_REACT_IK(Ped ped, BOOL p1) { invoke<Void>(0xE9A580, ped, p1); } // 0xCCA22A4A1FC7433F
static void SET_PED_CAN_TORSO_VEHICLE_IK(Ped ped, BOOL p1) { invoke<Void>(0xE9A5E0, ped, p1); } // 0xD6AD3D0B48A10776
static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0xE9A640, ped, toggle); } // 0x26C12212366CBF6E
static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xE9A690, ped1, ped2); } // 0x9E437CA2E2CAD79D
static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0xE9A6C0, ped, entity); } // 0x2E0309EF5F2EBDB1
static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0xE9A6F0, ped, lookAt); } // 0x183A28D5B0D656FF
static void SET_PED_CLOTH_PIN_FRAMES(Any p0, Any p1) { invoke<Void>(0xE9A700, p0, p1); } // 0x5B0311DB2CD63603
static void SET_PED_CLOTH_PACKAGE_INDEX(Any p0, Any p1) { invoke<Void>(0xE9A750, p0, p1); } // 0x71AA6A2F0208FC46
static void SET_PED_CLOTH_PRONE(Any p0, BOOL p1) { invoke<Void>(0xE9A7A0, p0, p1); } // 0x8AADE09D284D2B86
static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0xE9A7F0, ped, flagId, value); } // 0x0428AFDCAA63B06E
static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xE9A8A0, ped, flagId, doReset); } // 0x0FB8E752BCC547A9
static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0xE9A920, ped, flagId, p2); } // 0x49F8918E2DC5FFBC
static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xE9A950, ped, flagId); } // 0x025281901DECB32C
static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0xE9A9C0, ped, index); } // 0x412B9F2CF0E60079
static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0xE9AA20, ped, toggle); } // 0x84D421ACEBF9E529
static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xE9AA80, ped, evadingEntity); } // 0x60C848F2DC20EC23
static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xE9AB10, ped, x, y, z, toggle); } // 0xC7AF90C5FC07B06B
static void SET_PED_MODEL_IS_SUPPRESSED(Hash modelHash, BOOL toggle) { invoke<Void>(0xE9AB30, modelHash, toggle); } // 0xA1F44380A2D59F2B
static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0xE9AB50); } // 0xE5D8756E0C3EFFB7
static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xE9AB60, ped, toggle); } // 0x11FB2E1F7BAAB75A
static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xE9AC20, ped, toggle); } // 0x338FB3F98A204FD0
static void BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xE9AC40, ped, toggle); } // 0x26F0AA3C95EE2A6B
static void SET_PED_WILL_ONLY_ATTACK_WANTED_PLAYER(Any p0, Any p1) { invoke<Void>(0xE9AC90, p0, p1); } // 0xA8F01F16717271B9
static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xE9ACF0, ped, toggle); } // 0x81E9E7612B0E4BCE
static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { invoke<Void>(0xE9AD50, ped, cannotRemove, helmetFlag, textureIndex); } // 0x165FAFDA0B5E4A40
static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0xE9AD70, ped, instantly); } // 0xE4E1DBF4388028C0
static BOOL IS_PED_TAKING_OFF_HELMET(Ped ped) { return invoke<BOOL>(0xE9AD90, ped); } // 0x1073851035816B77
static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { invoke<Void>(0xE9ADF0, ped, canWearHelmet); } // 0xECF7FE1783A38672
static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0xE9AE40, ped, helmetFlag); } // 0x2D581D395A36F669
static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex, BOOL p2) { invoke<Void>(0xE9AE90, ped, propIndex, p2); } // 0x8112F193D4649FEA
static void SET_PED_HELMET_VISOR_PROP_INDICES(Ped ped, BOOL p1, int p2, int p3) { invoke<Void>(0xE9AF30, ped, p1, p2, p3); } // 0xE354CDA241A4A73E
static BOOL IS_PED_HELMET_VISOR_UP(Ped ped) { return invoke<BOOL>(0xE9AFB0, ped); } // 0x99D9C76822DA4A29
static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0xE9B030, ped, textureIndex); } // 0x297DBAD88EF053F9
static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xE9B090, ped); } // 0x6DBAC05AFA907A23
static void CLEAR_PED_STORED_HAT_PROP(Ped ped) { invoke<Void>(0xE9B0F0, ped); } // 0x8452AC966C087132
static int GET_PED_HELMET_STORED_HAT_PROP_INDEX(Ped ped) { return invoke<int>(0xE9B150, ped); } // 0xB34A70D5AC13FB8C
static int GET_PED_HELMET_STORED_HAT_TEX_INDEX(Ped ped) { return invoke<int>(0xE9B1B0, ped); } // 0xAA6E5BB6733B4BB0
static BOOL IS_CURRENT_HEAD_PROP_A_HELMET(Any p0) { return invoke<BOOL>(0xE9B210, p0); } // 0xBA172498AF5A8211
static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xE9B240, ped, toggle); } // 0x70FF391C9D345B04
static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xE9B2A0, ped, toggle); } // 0x32089D2C6AD6199B
static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xE9B300, ped, toggle); } // 0x2D3F2F7AD2E2AB65
static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE9B360, ped, toggle); } // 0xD78BC33933604161
static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xE9B370, ped, mode); } // 0xFC85193CBD98FD69
static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xE9B3D0, ped, toggle); } // 0xD4109F723B3DF74F
static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xE9B430, ped, toggle); } // 0xD724351CCF90F653
static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xE9B490, ped, toggle); } // 0x3FF406EF0BE27DA3
static void SET_LADDER_CLIMB_INPUT_STATE(Ped ped, int p1) { invoke<Void>(0xE9B4E0, ped, p1); } // 0x52E59AF01BE23E89
static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) { invoke<Void>(0xE9B540, ped); } // 0x9EDCA2C3E5F3B330
static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) { invoke<Void>(0xE9B580, ped, p1); } // 0x3DE9177F07328831
static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0xE9B5D0, ped, combatMovement); } // 0xD0764B65C2DFEDCA
static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<int>(0xE9B620, ped); } // 0x3EFB664623EEAD3F
static void SET_PED_COMBAT_ABILITY(Ped ped, int abilityLevel) { invoke<Void>(0xE9B680, ped, abilityLevel); } // 0x139711196A42A037
static void SET_PED_COMBAT_RANGE(Ped ped, int combatRange) { invoke<Void>(0xE9B6D0, ped, combatRange); } // 0x1090EAA386FB31A8
static int GET_PED_COMBAT_RANGE(Ped ped) { return invoke<int>(0xE9B720, ped); } // 0x883842C6E1BC2105
static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeId, BOOL enabled) { invoke<Void>(0xE9B780, ped, attributeId, enabled); } // 0xBE8796DB2B90A437
static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0xE9B7F0, ped, responseType); } // 0x570AAA413775DFFB
static BOOL IS_PED_PERFORMING_MELEE_ACTION(Ped ped) { return invoke<BOOL>(0xE9B840, ped); } // 0xB73833BDAAE31047
static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xE9B8B0, ped); } // 0x729CB628AF931FC1
static BOOL IS_PED_PERFORMING_A_COUNTER_ATTACK(Ped ped) { return invoke<BOOL>(0xE9B950, ped); } // 0xB915B7889D38C06A
static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0xE9B9E0, ped); } // 0x145143011E40A843
static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0xE9BA50, ped); } // 0xC148F260F73A1A6B
static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0xE9BAE0, ped); } // 0x5BDFCAB88CC62A9B
static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xE9BB30, ped); } // 0xD9F6166CE6292D26
static BOOL WAS_PED_KNOCKED_OUT(Ped ped) { return invoke<BOOL>(0xE9BB80, ped); } // 0x969DAA52492D900B
static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributeFlags, BOOL enable) { invoke<Void>(0xE9BBD0, ped, attributeFlags, enable); } // 0x1CA08719184AFC6F
static void SET_PED_COWER_HASH(Ped ped, const char* p1) { invoke<Void>(0xE9BC40, ped, p1); } // 0xE591C62C2F46B4D7
static void SET_PED_STEERS_AROUND_DEAD_BODIES(Ped ped, BOOL toggle) { invoke<Void>(0xE9BCA0, ped, toggle); } // 0xB18666D28D4F44C5
static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0xE9BD00, ped, toggle); } // 0x639E8A4EA31DD813
static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0xE9BD50, ped, toggle); } // 0xD6218A048A54AAB5
static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0xE9BDB0, ped, toggle); } // 0x98692EF468EC3185
static void SET_PED_IS_AVOIDED_BY_OTHERS(Any p0, BOOL p1) { invoke<Void>(0xE9BE10, p0, p1); } // 0xC55B2DE435555EC3
static void SET_PED_INCREASED_AVOIDANCE_RADIUS(Ped ped) { invoke<Void>(0xE9BE70, ped); } // 0xB739D4CB4D58B663
static void SET_PED_BLOCKS_PATHING_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xE9BEB0, ped, toggle); } // 0x67CBB32D0502A940
static void SET_PED_NO_TIME_DELAY_BEFORE_SHOT(Any p0) { invoke<Void>(0xE9BF10, p0); } // 0x80DCC55011762DB5
static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xE9BF50, x, y, z, radius); } // 0x2DBCF31839B069B4
static void FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xE9C030, ped, p1, p2); } // 0xD8ED11B32DF72E0B
static BOOL IS_PED_HEADING_TOWARDS_POSITION(Ped ped, float x, float y, float z, float p4) { return invoke<BOOL>(0xE9C0C0, ped, x, y, z, p4); } // 0xA702E444F81F0A83
static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { invoke<Void>(0xE9C0F0, ped); } // 0x7A8C6BB4DA2434F1
static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xE9C130, ped, p1); } // 0x7AA365BA6A18440B
static void REQUEST_PED_RESTRICTED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xE9C190, ped, p1); } // 0x2437F0D5BB0A2298
static void REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xE9C1E0, ped, p1); } // 0xB861E76BA27B15F1
static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0xE9C240, ped); } // 0x731EE2A006FD5120
static int GET_TRACKED_PED_PIXELCOUNT(Ped ped) { return invoke<int>(0xE9C2A0, ped); } // 0x9AD0C5A6374B4A86
static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0xE9C300, ped); } // 0xDEA601233F857293
static BOOL HAS_PED_RECEIVED_EVENT(Ped ped, int eventId) { return invoke<BOOL>(0xE9C360, ped, eventId); } // 0x613F3705BEA060B4
static BOOL CAN_PED_SEE_HATED_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xE9C390, ped1, ped2); } // 0x7E54CB377175F94E
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_TURRET_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xE9C3C0, ped, p1); } // 0xB4C8F59204E526EA
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_EXTRA_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xE9C440, ped, p1); } // 0xFB91087FE596EC02
static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0xE9C4C0, ped, boneId); } // 0x72F7E39FB49FC0BA
static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0xE9C4F0, ped, bone); } // 0xA2EFF78CEBC29932
static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xE9C500, ped, value); } // 0xDD7B1A7458742205
static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0xE9C5A0, ped); } // 0x5D023856BF4C9AB2
static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0xE9C630, ped, toggle); } // 0xC91E7DFEE6F07739
static void SET_PED_ENVEFF_CPV_ADD(Ped ped, float p1) { invoke<Void>(0xE9C6B0, ped, p1); } // 0xD9101AFF302E59F6
static void SET_PED_ENVEFF_COLOR_MODULATOR(Ped ped, int p1, int p2, int p3) { invoke<Void>(0xE9C750, ped, p1, p2, p3); } // 0xA681A230BE3E4A24
static void SET_PED_EMISSIVE_SCALE(Ped ped, float intensity) { invoke<Void>(0xE9C820, ped, intensity); } // 0xB0FB407889558D1A
static float GET_PED_EMISSIVE_SCALE(Ped ped) { return invoke<float>(0xE9C8C0, ped); } // 0x6D7810EB34D1A1E3
static BOOL IS_PED_SHADER_READY(Ped ped) { return invoke<BOOL>(0xE9C950, ped); } // 0xE87274DCAEC35329
static void SET_PED_ENABLE_CREW_EMBLEM(Ped ped, BOOL toggle) { invoke<Void>(0xE9C9C0, ped, toggle); } // 0xE8CE8BAA294AD605
static void REQUEST_RAGDOLL_BOUNDS_UPDATE(Any p0, Any p1) { invoke<Void>(0xE9CA10, p0, p1); } // 0xA56B5C6A4349684D
static void SET_PED_AO_BLOB_RENDERING(Ped ped, BOOL toggle) { invoke<Void>(0xE9CA20, ped, toggle); } // 0x949A46B6409BF541
static BOOL IS_PED_SHELTERED(Ped ped) { return invoke<BOOL>(0xE9CA80, ped); } // 0x021754B7D780A311
static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0xE9CAE0, x, y, z, roll, pitch, yaw, p6); } // 0x2EC137C692A52458
static int CREATE_SYNCHRONIZED_SCENE_AT_MAP_OBJECT(float x, float y, float z, float radius, Hash object) { return invoke<int>(0xE9CB10, x, y, z, radius, object); } // 0xEC6D10B2D602CDDF
static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<BOOL>(0xE9CB40, sceneId); } // 0x5266F1D2AEF6F73A
static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { invoke<Void>(0xE9CB70, sceneID, x, y, z, roll, pitch, yaw, p7); } // 0x8E654C1A28DAD371
static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<Void>(0xE9CC30, sceneID, phase); } // 0x7BB893EF8F683419
static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xE9CC70, sceneID); } // 0xBD3B265153D3BA2D
static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<Void>(0xE9CCB0, sceneID, rate); } // 0x16B754A9C2FD8E74
static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0xE9CD20, sceneID); } // 0x81A27DBBC2296EB2
static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) { invoke<Void>(0xE9CD60, sceneID, toggle); } // 0xBF3497E24DEAD835
static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<BOOL>(0xE9CDA0, sceneID); } // 0x7E2BC58952835E3B
static void SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID, BOOL toggle) { invoke<Void>(0xE9CDE0, sceneID, toggle); } // 0xA7C372501A8A3B23
static BOOL IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID) { return invoke<BOOL>(0xE9CE30, sceneID); } // 0x5BD19E1149597B09
static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { invoke<Void>(0xE9CE70, sceneID, entity, boneIndex); } // 0x2DCB8CA1FE6895AB
static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<Void>(0xE9CEE0, sceneID); } // 0x83E8210E2B5723F2
static void TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(int scene) { invoke<Void>(0xE9CF10, scene); } // 0x007DF2AFED58568A
static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4) { return invoke<BOOL>(0xE9CF50, ped, motionStateHash, p2, p3, p4); } // 0x717804C8C8DA67BF
static BOOL GET_PED_CURRENT_MOVE_BLEND_RATIO(Ped ped, float* speedX, float* speedY) { return invoke<BOOL>(0xE9CF90, ped, speedX, speedY); } // 0x5437DF794F3A1FAA
static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xE9D010, ped, value); } // 0x4190C67D524CD0DC
static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xE9D060, ped, value); } // 0x7992D566A90CD49C
static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0xE9D0C0, ped, value); } // 0xB27B08E34AC92345
static void SET_PED_MOVE_RATE_IN_WATER_OVERRIDE(Ped ped, float p1) { invoke<Void>(0xE9D140, ped, p1); } // 0xFF02104E431CCA25
static BOOL PED_HAS_SEXINESS_FLAG_SET(Ped ped, int sexinessFlag) { return invoke<BOOL>(0xE9D1C0, ped, sexinessFlag); } // 0x840F81C8B23F1122
static int GET_PED_NEARBY_VEHICLES(Ped ped, Any* sizeAndVehs) { return invoke<int>(0xE9D220, ped, sizeAndVehs); } // 0xD65B4E942A960E26
static int GET_PED_NEARBY_PEDS(Ped ped, Any* sizeAndPeds, int ignore) { return invoke<int>(0xE9D250, ped, sizeAndPeds, ignore); } // 0xAA3F0A9E20917995
static BOOL HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Ped ped) { return invoke<BOOL>(0xE9D280, ped); } // 0x69CD279BFCFE278E
static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0xE9D2E0, ped); } // 0x1072B16512C86D96
static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, int p2, const char* action) { invoke<Void>(0xE9D340, ped, p1, p2, action); } // 0x96A0632EBDD87FA3
static void SET_MOVEMENT_MODE_OVERRIDE(Ped ped, const char* name) { invoke<Void>(0xE9D360, ped, name); } // 0x5C61336874E84777
static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0xE9D3C0, ped, value); } // 0x04FC75A7251431C6
static int REGISTER_PEDHEADSHOT(Ped ped) { return invoke<int>(0xE9D410, ped); } // 0x5CF63381522A9972
static int REGISTER_PEDHEADSHOT_HIRES(Ped ped) { return invoke<int>(0xE9D480, ped); } // 0xA4C84E0CB47D2F16
static int REGISTER_PEDHEADSHOT_TRANSPARENT(Ped ped) { return invoke<int>(0xE9D4F0, ped); } // 0xD993C02BC3A99162
static void UNREGISTER_PEDHEADSHOT(int id) { invoke<Void>(0xE9D560, id); } // 0x697995B2B26B6CD4
static BOOL IS_PEDHEADSHOT_VALID(int id) { return invoke<BOOL>(0xE9D580, id); } // 0xCF3FA9D6B87D2277
static BOOL IS_PEDHEADSHOT_READY(int id) { return invoke<BOOL>(0xE9D5C0, id); } // 0x445B6F53EA9E6A6F
static const char* GET_PEDHEADSHOT_TXD_STRING(int id) { return invoke<const char*>(0xE9D5F0, id); } // 0x008C0EB38E4459EE
static BOOL REQUEST_PEDHEADSHOT_IMG_UPLOAD(int id) { return invoke<BOOL>(0xE9D620, id); } // 0x63F7CF92622A91BF
static void RELEASE_PEDHEADSHOT_IMG_UPLOAD(int id) { invoke<Void>(0xE9D660, id); } // 0x60EF2F9A22C75C6D
static BOOL IS_PEDHEADSHOT_IMG_UPLOAD_AVAILABLE() { return invoke<BOOL>(0xE9D680); } // 0x8F38E50ADC31E1C2
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_FAILED() { return invoke<BOOL>(0xE9D6A0); } // 0xFE3891B19F28B05F
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_SUCCEEDED() { return invoke<BOOL>(0xE9D6C0); } // 0x39B1D02A82A412D3
static void SET_PED_HEATSCALE_OVERRIDE(Ped ped, float heatScale) { invoke<Void>(0xE9D6E0, ped, heatScale); } // 0x3A99D838C9A7E1A7
static void DISABLE_PED_HEATSCALE_OVERRIDE(Ped ped) { invoke<Void>(0xE9D740, ped); } // 0x0CE75744CB55A9B5
static void SPAWNPOINTS_START_SEARCH(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { invoke<Void>(0xE9D780, p0, p1, p2, p3, p4, interiorFlags, scale, duration); } // 0x965EA50BC3B24F5B
static void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, int interiorFlags, float scale, int duration) { invoke<Void>(0xE9D800, x1, y1, z1, x2, y2, z2, width, interiorFlags, scale, duration); } // 0xC9666089A105E4BD
static void SPAWNPOINTS_CANCEL_SEARCH() { invoke<Void>(0xE9D8A0); } // 0xE07943643E972CC4
static BOOL SPAWNPOINTS_IS_SEARCH_ACTIVE() { return invoke<BOOL>(0xE9D8B0); } // 0xBC88293FA9783DEB
static BOOL SPAWNPOINTS_IS_SEARCH_COMPLETE() { return invoke<BOOL>(0xE9D8E0); } // 0x35705F8A1AB3E367
static BOOL SPAWNPOINTS_IS_SEARCH_FAILED() { return invoke<BOOL>(0xE9D910); } // 0x54CEFF81D65925A1
static int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS() { return invoke<int>(0xE9D940); } // 0x53367B4589EB191D
static void SPAWNPOINTS_GET_SEARCH_RESULT(int randomInt, float* x, float* y, float* z) { invoke<Void>(0xE9D970, randomInt, x, y, z); } // 0x47B485915DC62445
static void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(int p0, int* p1) { invoke<Void>(0xE9DA00, p0, p1); } // 0xD0905E590E711B1A
static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { invoke<Void>(0xE9DA60, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); } // 0xF9F66C74E3167674
static void FORCE_INSTANT_LEG_IK_SETUP(Ped ped) { invoke<Void>(0xE9DAA0, ped); } // 0x854D2E21A9863405
static void REQUEST_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DB00, asset); } // 0xEC6AB0F95905E8F0
static BOOL HAS_ACTION_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xE9DB80, asset); } // 0x2B3F2546A5C7ED4F
static void REMOVE_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DBB0, asset); } // 0xDBE717677A78CC44
static void REQUEST_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DC30, asset); } // 0x56943E0C3826FD0D
static BOOL HAS_STEALTH_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xE9DCC0, asset); } // 0xD3FF790CDA1D2927
static void REMOVE_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DCF0, asset); } // 0xC2B66CA01C228D6C
static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0xE9DD80, ped, multiplier); } // 0x93956DF263A4A0DC
static void SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(Ped ped, BOOL toggle, int p2) { invoke<Void>(0xE9DDE0, ped, toggle, p2); } // 0x6E544F5DBF10461B
static void SET_FORCE_FOOTSTEP_UPDATE(Ped ped, BOOL toggle) { invoke<Void>(0xE9DE70, ped, toggle); } // 0x711F9BE10FCB4E6B
static void SET_FORCE_STEP_TYPE(Ped ped, BOOL p1, int type, int p3) { invoke<Void>(0xE9DEC0, ped, p1, type, p3); } // 0xBA5E2010650D3EE0
static BOOL IS_ANY_HOSTILE_PED_NEAR_POINT(Ped ped, float x, float y, float z, float radius) { return invoke<BOOL>(0xE9DF30, ped, x, y, z, radius); } // 0x830B1CF1020074B8
static void SET_PED_CAN_PLAY_IN_CAR_IDLES(Ped ped, BOOL toggle) { invoke<Void>(0xE9DF60, ped, toggle); } // 0xDBD50CFC0081C308
static BOOL IS_TARGET_PED_IN_PERCEPTION_AREA(Ped ped, Ped targetPed, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0xE9DFC0, ped, targetPed, p2, p3, p4, p5); } // 0xB808915F3B0D8766
static void SET_POP_CONTROL_SPHERE_THIS_FRAME(float x, float y, float z, float min, float max) { invoke<Void>(0xE9E000, x, y, z, min, max); } // 0x1A3EA72E4830538F
static void FORCE_ZERO_MASS_IN_COLLISIONS(Ped ped) { invoke<Void>(0xE9E070, ped); } // 0xF1EA3BEE2C40F823
static void SET_DISABLE_HIGH_FALL_DEATH(Ped ped, BOOL toggle) { invoke<Void>(0xE9E0B0, ped, toggle); } // 0x94FC2CFCFFCE172C
static void SET_PED_PHONE_PALETTE_IDX(Any p0, Any p1) { invoke<Void>(0xE9E100, p0, p1); } // 0x7CB81DD9FBD57E82
static void SET_PED_STEER_BIAS(Ped ped, float value) { invoke<Void>(0xE9E140, ped, value); } // 0xD4D1973154415E9B
static BOOL IS_PED_SWITCHING_WEAPON(Ped Ped) { return invoke<BOOL>(0xE9E190, Ped); } // 0xB8263BF236C755A5
static void SET_PED_TREATED_AS_FRIENDLY(Any p0, Any p1, Any p2) { invoke<Void>(0xE9E1F0, p0, p1, p2); } // 0x3B3AC5F69E21EAB7
static void SET_DISABLE_PED_MAP_COLLISION(Ped ped) { invoke<Void>(0xE9E270, ped); } // 0x7EF0501CDC9F69F6
static void ENABLE_MP_LIGHT(Ped ped, BOOL toggle) { invoke<Void>(0xE9E330, ped, toggle); } // 0x6164A393993354D7
static BOOL GET_MP_LIGHT_ENABLED(Ped ped) { return invoke<BOOL>(0xE9E380, ped); } // 0xAA5FEAAE62F40979
static void CLEAR_COVER_POINT_FOR_PED(Ped ped) { invoke<Void>(0xE9E3E0, ped); } // 0xE3AACA4B344A6492
static void SET_ALLOW_STUNT_JUMP_CAMERA(Ped ped, BOOL toggle) { invoke<Void>(0xE9E430, ped, toggle); } // 0xE7D55A9EFD3E9475
static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float windingSpeed, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<int>(0xEA0760, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, windingSpeed, p11, p12, rigid, p14, breakWhenShot, unkPtr); } // 0x0689621FADCB043F
static void DELETE_ROPE(int* ropeId) { invoke<Void>(0xEA07E0, ropeId); } // 0x51EC3CEC568ABB81
static void DELETE_CHILD_ROPE(int ropeId) { invoke<Void>(0xEA07F0, ropeId); } // 0x6FC03AECD995B8CC
static BOOL DOES_ROPE_EXIST(int* ropeId) { return invoke<BOOL>(0xEA0810, ropeId); } // 0x3E2705A53B1D4A09
static void ROPE_DRAW_ENABLED(int* ropeId, BOOL p1) { invoke<Void>(0xEA0850, ropeId, p1); } // 0x96205EB96C14F85F
static void ROPE_DRAW_SHADOW_ENABLED(int* ropeId, BOOL toggle) { invoke<Void>(0xEA08B0, ropeId, toggle); } // 0x673A321A632EAD3B
static void LOAD_ROPE_DATA(int ropeId, const char* rope_preset) { invoke<Void>(0xEA0910, ropeId, rope_preset); } // 0x4244303B05A2EF30
static void PIN_ROPE_VERTEX(int ropeId, int vertex, float x, float y, float z) { invoke<Void>(0xEA0960, ropeId, vertex, x, y, z); } // 0x537D4AFC3C6E5A9B
static void UNPIN_ROPE_VERTEX(int ropeId, int vertex) { invoke<Void>(0xEA09D0, ropeId, vertex); } // 0x32E7B8CFE85DB282
static int GET_ROPE_VERTEX_COUNT(int ropeId) { return invoke<int>(0xEA0A20, ropeId); } // 0x29D9CA677F5D2A36
static void ATTACH_ENTITIES_TO_ROPE(int ropeId, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0xEA0A80, ropeId, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); } // 0x3640C9BF5BF56ED8
static void ATTACH_ROPE_TO_ENTITY(int ropeId, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xEA0AD0, ropeId, entity, x, y, z, p5); } // 0x73F3DA3B1BFA714B
static void DETACH_ROPE_FROM_ENTITY(int ropeId, Entity entity) { invoke<Void>(0xEA0B90, ropeId, entity); } // 0x6DE0DFF01BAFA2BC
static void ROPE_SET_UPDATE_PINVERTS(int ropeId) { invoke<Void>(0xEA0C10, ropeId); } // 0x7E27CBB7DF2BAE69
static void ROPE_SET_UPDATE_ORDER(int ropeId, Any p1) { invoke<Void>(0xEA0C50, ropeId, p1); } // 0x0BE3274CCADBCC99
static void ROPE_SET_SMOOTH_REELIN(int ropeId, BOOL p1) { invoke<Void>(0xEA0C90, ropeId, p1); } // 0x39073821D1E47645
static BOOL IS_ROPE_ATTACHED_AT_BOTH_ENDS(int* ropeId) { return invoke<BOOL>(0xEA0CF0, ropeId); } // 0xB9DDE5F54A275DFF
static Vector3 GET_ROPE_LAST_VERTEX_COORD(int ropeId) { return invoke<Vector3>(0xEA0D40, ropeId); } // 0xCD3F86829B5968C9
static Vector3 GET_ROPE_VERTEX_COORD(int ropeId, int vertex) { return invoke<Vector3>(0xEA0DD0, ropeId, vertex); } // 0x7AACE64DEE426629
static void START_ROPE_WINDING(int ropeId) { invoke<Void>(0xEA0E90, ropeId); } // 0x2CFF537DCB91BDF5
static void STOP_ROPE_WINDING(int ropeId) { invoke<Void>(0xEA0ED0, ropeId); } // 0x1A14B471E6F52A55
static void START_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xEA0F00, ropeId); } // 0x9C8254FD6ED020B7
static void STOP_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xEA0F40, ropeId); } // 0x780E1FA7EA99BE9A
static void ROPE_CONVERT_TO_SIMPLE(int ropeId) { invoke<Void>(0xEA0F70, ropeId); } // 0x3C3B85A84C954686
static void ROPE_LOAD_TEXTURES() { invoke<Void>(0xEA0FD0); } // 0x162DAE7141F06640
static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xEA0FF0); } // 0xC54A9DA207D0D713
static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0xEA1020); } // 0xEBB9FF9FD0CF4CB2
static BOOL DOES_SCRIPT_OWN_ROPE(int ropeId) { return invoke<BOOL>(0xEA1040, ropeId); } // 0x67386FF623605BB2
static void ROPE_ATTACH_VIRTUAL_BOUND_GEOM(int ropeId, int p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { invoke<Void>(0xEA10C0, ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0x67C2FA3B5006F779
static void ROPE_CHANGE_SCRIPT_OWNER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xEA11C0, p0, p1, p2); } // 0x7A7B42D5C86E7EDF
static void ROPE_SET_REFFRAMEVELOCITY_COLLIDERORDER(int ropeId, int p1) { invoke<Void>(0xEA11E0, ropeId, p1); } // 0x0A07F53F5EED824F
static float ROPE_GET_DISTANCE_BETWEEN_ENDS(int ropeId) { return invoke<float>(0xEA1220, ropeId); } // 0x6D4D0805396CE83B
static void ROPE_FORCE_LENGTH(int ropeId, float length) { invoke<Void>(0xEA1270, ropeId, length); } // 0xB5186C080A343976
static void ROPE_RESET_LENGTH(int ropeId, float length) { invoke<Void>(0xEA12C0, ropeId, length); } // 0xECFFA90DECC6D406
static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0xEA1320, posX, posY, posZ, vecX, vecY, vecZ, impulse); } // 0xCA8F3804D06FF7BF
static void SET_DAMPING(Entity entity, int vertex, float value) { invoke<Void>(0xEA1370, entity, vertex, value); } // 0x43C223EA02402E66
static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0xEA14F0, entity); } // 0x79B52EC5A9AB6229
static void SET_CGOFFSET(Entity entity, float x, float y, float z) { invoke<Void>(0xEA1540, entity, x, y, z); } // 0x8462CDB3E1DA954A
static Vector3 GET_CGOFFSET(Entity entity) { return invoke<Vector3>(0xEA1550, entity); } // 0x30E2D00B68214AB1
static void SET_CG_AT_BOUNDCENTER(Entity entity) { invoke<Void>(0xEA15F0, entity); } // 0xE2B3F860B1A40B7B
static void BREAK_ENTITY_GLASS(Entity entity, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xEA16D0, entity, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xF7AACF0E52319649
static BOOL GET_IS_ENTITY_A_FRAG(Object object) { return invoke<BOOL>(0xEA1700, object); } // 0x4F1CAAB808618FF8
static void SET_DISABLE_BREAKING(Object object, BOOL toggle) { invoke<Void>(0xEA1760, object, toggle); } // 0xA713C2357FA1526D
static void RESET_DISABLE_BREAKING(Object object) { invoke<Void>(0xEA1800, object); } // 0x950E5A2F4659D2BD
static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0xEA1810, object, toggle); } // 0x091DA52005030F41
static void SET_USE_KINEMATIC_PHYSICS(Entity entity, BOOL toggle) { invoke<Void>(0xEA18B0, entity, toggle); } // 0x5FB8641E415105C3
static void SET_IN_STUNT_MODE(BOOL p0) { invoke<Void>(0xEA1930, p0); } // 0xE9E7D9BE2DE2136A
static void SET_IN_ARENA_MODE(BOOL toggle) { invoke<Void>(0xEA1960, toggle); } // 0xB5CC1BD0A7024484
static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0xEA9310, player); } // 0x56E414973C2A8C0E
static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0xEA9360, player); } // 0xE8466DBC1A7E794F
static void SET_PLAYER_MODEL(Player player, Hash model) { invoke<Void>(0xEA93A0, player, model); } // 0x52E0301351FCDEC5
static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p2, BOOL resetDamage) { invoke<Void>(0xEA93B0, player, ped, p2, resetDamage); } // 0x43892D65E9AE6F1B
static void GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) { invoke<Void>(0xEA93E0, player, r, g, b); } // 0x8137826EBA634D9F
static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0xEA9440); } // 0x7D1D107CFA0B3F0F
static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0xEA9470, player); } // 0x1864096A95E36EBA
static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0xEA94B0, player, team); } // 0x1B0F8D3B4EE07EE0
static int GET_NUMBER_OF_PLAYERS_IN_TEAM(int team) { return invoke<int>(0xEA9520, team); } // 0x18476AA515A4460B
static char* GET_PLAYER_NAME(Player player) { return invoke<char*>(0xEA95B0, player); } // 0xBD6CA019F46AB947
static float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0xEA9630, player); } // 0xF4141D223F2B1C76
static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0xEA9660, player); } // 0x8924DF54D314FD78
static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, Vector3* position, BOOL p2, BOOL p3) { invoke<Void>(0xEA9700, player, position, p2, p3); } // 0xEFE2B06D5134CD46
static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xEA9780, wantedLevel); } // 0x30C1D2072FB75567
static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0xEA97A0, player, wantedLevel, disableNoMission); } // 0xE20A252886E4FE1D
static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0xEA97C0, player, wantedLevel, p2); } // 0xF165EAD0AA08F3B6
static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0xEA9880, player, p1); } // 0x42C9A22D6724F283
static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xEA9940, player); } // 0xA2E55F2C91545EAD
static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0xEA99B0, player); } // 0x72C7CC058228E633
static BOOL IS_WANTED_AND_HAS_BEEN_SEEN_BY_COPS(Player player) { return invoke<BOOL>(0xEA9A10, player); } // 0x9780872414DA43F8
static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xEA9A80, player, toggle); } // 0xE383E18054CA323B
static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0xEA9AF0, player, wantedLevel); } // 0x3EE1A6D743332852
static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0xEA9B40, player); } // 0x3C482AC51A8E85DC
static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0xEA9BE0, player); } // 0xD5FF242D0AFC5855
static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0xEA9C20, player); } // 0x692665178199313C
static void SET_PLAYER_CONTROL(Player player, BOOL bHasControl, int flags) { invoke<Void>(0xEA9C60, player, bHasControl, flags); } // 0x4686BC3BFDBB5348
static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xEA9C80, player); } // 0xE7B45027762DEFE7
static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0xEA9CD0, maxWantedLevel); } // 0xDAE61414743C8D1D
static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0xEA9CF0, toggle); } // 0x7AD72DFA04253E47
static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xEA9D10, player, toggle); } // 0xDAA51A56DBEC0391
static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0xEA9D80, player); } // 0x75EAB09F5E974116
static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xEA9DC0, player, toggle); } // 0x3AFFD31224BF9207
static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xEA9E30, player, toggle); } // 0xAC50C24F47D00104
static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xEA9E80, player); } // 0x9C931A1395CC1AE9
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xEA9EB0, player, toggle); } // 0x8D76C231AB0E62A1
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xEA9F10, player); } // 0xCD0F6D8C76DD22A7
static void SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(Player player) { invoke<Void>(0xEA9F40, player); } // 0x73CB9EAA55D097EB
static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0xEA9F70, player, toggle); } // 0x50402A290336E9AF
static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0xEA9FC0, multiplier); } // 0x425BBE19F25A57AB
static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xEAA000, player, difficulty); } // 0x446468040E515438
static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xEAA050, player); } // 0xF58D3BBA4A469D70
static int GET_WANTED_LEVEL_TIME_TO_ESCAPE() { return invoke<int>(0xEAA090); } // 0xBF02D50FC8112D5B
static void SET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player, int wantedLevel, int lossTime) { invoke<Void>(0xEAA0B0, player, wantedLevel, lossTime); } // 0x64A38E41CEF44EEB
static void RESET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player) { invoke<Void>(0xEAA100, player); } // 0x252B3E511E67DD84
static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0xEAA140, duration); } // 0x97915D82C999021F
static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0xEAA1A0, player, crimeType, wantedLvlThresh); } // 0x80A39DDADDA2585C
static void SUPPRESS_CRIME_THIS_FRAME(Player player, int crimeType) { invoke<Void>(0xEAA270, player, crimeType); } // 0xFE89392FAC7394F2
static void UPDATE_WANTED_POSITION_THIS_FRAME(Player player) { invoke<Void>(0xEAA2C0, player); } // 0x489BA9F867E58A85
static void SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(Player player) { invoke<Void>(0xEAA2F0, player); } // 0x75690DF4B79CDDCC
static void ALLOW_EVASION_HUD_IF_DISABLING_HIDDEN_EVASION_THIS_FRAME(Player player, Any p1) { invoke<Void>(0xEAA320, player, p1); } // 0x779023E7E53EB834
static void FORCE_START_HIDDEN_EVASION(Player player) { invoke<Void>(0xEAA390, player); } // 0x6B6014A58DEBCCF3
static void SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(Player player) { invoke<Void>(0xEAA3D0, player); } // 0x4BD41CDB13AC8486
static void REPORT_POLICE_SPOTTED_PLAYER(Player player) { invoke<Void>(0xEAA400, player); } // 0x873D736C20070A10
static void SET_LAW_RESPONSE_DELAY_OVERRIDE(float p0) { invoke<Void>(0xEAA490, p0); } // 0x89BC3C904E08199E
static void RESET_LAW_RESPONSE_DELAY_OVERRIDE() { invoke<Void>(0xEAA4B0); } // 0x2FE39C7786330945
static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0xEAA4C0, player); } // 0xF7C1BF3F9EB7C65E
static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0xEAA500, player); } // 0xFB1E434B5C3D0CEE
static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xEAA530, player, entity); } // 0x41754DC6001F6313
static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0xEAA5D0, player, entity); } // 0x5266B2AB5BDC4B54
static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0xEAA630, player); } // 0x1C751EF63BF4D501
static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xEAA680, player, entity); } // 0xE5D813FA6F741B01
static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0xEAA730, player, entity); } // 0x66EE98F15844BE4D
static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0xEAA7A0, player, range); } // 0xE7B6A36E4BDF7C4C
static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0xEAA7F0, player, toggle); } // 0x19AD76EC04A73800
static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0xEAA840, player, toggle); } // 0x9856853A6FCF4F85
static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0xEAA890, player, toggle); } // 0x3EBA706E071AA76A
static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0xEAA8E0); } // 0xD6436470CD2C1484
static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0xEAA8F0, player); } // 0x4F035D45FC2856F8
static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0xEAA940, player, toggle); } // 0x0E0E682049E26249
static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0xEAA990, player); } // 0x336E2A96F643C9D5
static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0xEAA9C0, player, p1); } // 0x92EBF838856DCF63
static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0xEAAA20, player); } // 0x03689A4961280354
static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0xEAAA70, player); } // 0xE43577CB2EC4FFD6
static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0xEAAAE0, player); } // 0x941BFBB789EE4863
static float SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(Player player, float time) { return invoke<float>(0xEAAB40, player, time); } // 0x932BEE6E64F0144E
static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0xEAABB0, player); } // 0xD59511AF30BE1934
static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0xEAABD0, player); } // 0xD69C6BA96938C9C1
static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0xEAAC10, player); } // 0xE916D57851F785AB
static BOOL GET_ARE_CAMERA_CONTROLS_DISABLED() { return invoke<BOOL>(0xEAAC70); } // 0x3CC2AA893E5C4911
static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0xEAACB0, player); } // 0x206A708429803A39
static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0xEAAD00, player); } // 0xB96BD3A32937D44E
static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0xEAAD40, player, atArresting); } // 0x6652E84A43F51B8B
static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0xEAADD0, player); } // 0x3C2C878E6683CE75
static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xEAAE00); } // 0xDC8D5832207C2EAD
static Player GET_PLAYER_INDEX() { return invoke<Player>(0xEAAE30); } // 0xB6B621402486C3E4
static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0xEAAE70, value); } // 0xB23E0F9B63D009A8
static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0xEAAE80, value); } // 0xF0C9E5565CB32F4B
static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0xEAAE90, player); } // 0x750EA8475280B86D
static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0xEAAED0, player); } // 0x98FA166AB01A46F7
static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0xEAAF10, player); } // 0xAEAB3904F55BB907
static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0xEAAF50, player); } // 0x0A2AACDCE82B8394
static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0xEAAF90, player); } // 0x566C977EEAE1C0D1
static Player PLAYER_ID() { return invoke<Player>(0xEAAFC0); } // 0x259BE71D8A81D4FA
static Ped PLAYER_PED_ID() { return invoke<Ped>(0xEAB000); } // 0x4A8C381C258A124D
static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0xEAB040); } // 0x383461852896D73D
static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0xEAB080, cleanupFlags); } // 0x96CFB880BAC634CE
static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xEAB0C0, cleanupFlags); } // 0xB1495D79F52B9EEE
static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) { invoke<Void>(0xEAB100, name, cleanupFlags); } // 0x3A9A35C27C7B6D3C
static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0xEAB130, id, cleanupFlags); } // 0xE1440F5C29913E5D
static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0xEAB170); } // 0x36E4BBBE16306470
static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0xEAB1A0, player, vehicle); } // 0x220BB75D2FDC7141
static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0xEAB1B0, player); } // 0xC33666575B6C63DB
static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievementId) { return invoke<BOOL>(0xEAB1F0, achievementId); } // 0x584E143398F9661C
static BOOL SET_ACHIEVEMENT_PROGRESS(int achievementId, int progress) { return invoke<BOOL>(0xEAB220, achievementId, progress); } // 0xE3872E56266EDEDC
static int GET_ACHIEVEMENT_PROGRESS(int achievementId) { return invoke<int>(0xEAB250, achievementId); } // 0xB3E8CE9ABB5AD331
static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xEAB280, achievementId); } // 0x37088D2C63AC4C01
static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xEAB2B0); } // 0x99DFE4CAC19D527F
static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0xEAB2E0); } // 0x54A2F9B7AD878EB5
static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL p0) { invoke<Void>(0xEAB2F0, p0); } // 0xC296E8407A7E3E69
static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xEAB300); } // 0xEF37E704F02B50F3
static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0xEAB320, player, toggle); } // 0x2B52F77101390E6F
static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xEAB3A0, player); } // 0xCF59B5FEF38A9930
static BOOL GET_PLAYER_DEBUG_INVINCIBLE(Player player) { return invoke<BOOL>(0xEAB3E0, player); } // 0xD390851FAFF577C2
static void SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(Player player, BOOL toggle) { invoke<Void>(0xEAB3F0, player, toggle); } // 0x6C4F5AA91D39455C
static void SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(Player player, BOOL p1) { invoke<Void>(0xEAB460, player, p1); } // 0x66831E1107966731
static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0xEAB4B0, player, p2); } // 0x380902AACBEF8EDD
static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0xEAB500, player, toggle); } // 0xAD38642974DA79B6
static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0xEAB560, player, toggle); } // 0xEFF44B1774BDC08F
static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0xEAB5A0, targetMode); } // 0x1DBA5F84560D5943
static void SET_PLAYER_TARGET_LEVEL(int targetLevel) { invoke<Void>(0xEAB610, targetLevel); } // 0x204EF9C415A885DE
static BOOL GET_IS_USING_FPS_THIRD_PERSON_COVER() { return invoke<BOOL>(0xEAB620); } // 0xC600DDAA3EAEB670
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xEAB640, player); } // 0xAC7090FFDF63A3A0
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0xEAB670, player); } // 0x1F8DDF94E5D56F59
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0xEAB6C0, player); } // 0xD6AD454C9B73DD75
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xEAB6F0, player); } // 0xEFC75C3D53F60CB1
static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0xEAB740, player, multiplier); } // 0x7BFF320D45B40B56
static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xEAB7A0, player, multiplier); } // 0x289497A4BA9049E0
static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xEAB800, player, multiplier); } // 0xA52E1AE3848A506B
static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0xEAB860); } // 0x5B5405C7B1021630
static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xEAB890); } // 0xA4A53492861BFB22
static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xEAB8C0); } // 0xC281E62EC347918C
static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xEAB910); } // 0xC52E851E33ADFEE7
static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0xEAB940, player, toggle); } // 0x5F607C9E85F2ECC5
static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0xEAB980, player, toggle); } // 0x907872AE773E60D2
static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0xEAB9D0, player, toggle); } // 0x676D58067087BA0A
static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0xEABA20, player, toggle); } // 0xEF387B90B8B97EDA
static void DISABLE_PLAYER_THROW_GRENADE_WHILE_USING_GUN() { invoke<Void>(0xEABAB0); } // 0xF37B149B1A382D5B
static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0xEABAD0, player, toggle); } // 0x3EC357F31CEA229D
static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0xEABB90, player, value); } // 0x776D5F57819A1E41
static void SPECIAL_ABILITY_ACTIVATE(Player player, int p1) { invoke<Void>(0xEABBD0, player, p1); } // 0x565DC75434CCE76E
static void SET_SPECIAL_ABILITY_MP(Player player, int p1, Any p2) { invoke<Void>(0xEABC30, player, p1, p2); } // 0x5F5FDED45A3345C9
static void SPECIAL_ABILITY_DEACTIVATE_MP(Player player, int p1) { invoke<Void>(0xEABCA0, player, p1); } // 0x8181C267AB5DE670
static void SPECIAL_ABILITY_DEACTIVATE(Player player, Any p1) { invoke<Void>(0xEABCB0, player, p1); } // 0xF064FD8FB64821D1
static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player, Any p1) { invoke<Void>(0xEABD10, player, p1); } // 0x6A84D4B060E73EF5
static void SPECIAL_ABILITY_RESET(Player player, Any p1) { invoke<Void>(0xEABD80, player, p1); } // 0x89609F1D3BE65A34
static void SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(Player player, Any p1) { invoke<Void>(0xEABDE0, player, p1); } // 0x3ECCF6485789A1D6
static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xEABE40, player, p1, p2, p3); } // 0xE085C345EE8A8E00
static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xEABE70, player, p1, p2, p3); } // 0x31240ACBC2A082EA
static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xEABEA0, player, p1, p2, p3); } // 0x674C330ABC93304B
static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, Ped p1, Any p2) { invoke<Void>(0xEABED0, player, p1, p2); } // 0xEFA2B6B7AB16294E
static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2, Any p3) { invoke<Void>(0xEABF50, player, p1, p2, p3); } // 0x7CCB2F844CA7C337
static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2, Any p3) { invoke<Void>(0xEABFD0, player, normalizedValue, p2, p3); } // 0x9AD14335D95C64BA
static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xEAC060, player, p1, p2); } // 0x15263A2A8A135DF3
static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xEAC0E0, player, p1, p2); } // 0xB055330FF3BFD8A6
static void SPECIAL_ABILITY_LOCK(Hash playerModel, Any p1) { invoke<Void>(0xEAC160, playerModel, p1); } // 0xE3D5A2DE522F29C1
static void SPECIAL_ABILITY_UNLOCK(Hash playerModel, Any p1) { invoke<Void>(0xEAC180, playerModel, p1); } // 0xD33BCB9F50C1E588
static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0xEAC1A0, playerModel); } // 0x10140D9546976B7F
static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player, Any p1) { return invoke<BOOL>(0xEAC1D0, player, p1); } // 0xFD2D7766E325A3B2
static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player, Any p1) { return invoke<BOOL>(0xEAC240, player, p1); } // 0x568A5F4040D722C0
static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle, Any p2) { invoke<Void>(0xEAC2B0, player, toggle, p2); } // 0xE0A0D0E41195BAC0
static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player, Any p1) { return invoke<BOOL>(0xEAC320, player, p1); } // 0x3BBF563E688265AF
static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0xEAC390, multiplier); } // 0xF65CE7345EAFDBE2
static void UPDATE_SPECIAL_ABILITY_FROM_STAT(Player player, Any p1) { invoke<Void>(0xEAC3B0, player, p1); } // 0x04F239EFD194C236
static BOOL GET_IS_PLAYER_DRIVING_ON_HIGHWAY(Player player) { return invoke<BOOL>(0xEAC410, player); } // 0x771C914E893FD9EB
static BOOL GET_IS_PLAYER_DRIVING_WRECKLESS(Player player, int p1) { return invoke<BOOL>(0xEAC490, player, p1); } // 0x4A3BD6441F87BBF1
static BOOL GET_IS_MOPPING_AREA_FREE_IN_FRONT_OF_PLAYER(Player player, float p1) { return invoke<BOOL>(0xEAC530, player, p1); } // 0x93559B7C58C7660C
static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL findCollisionLand, BOOL p7) { invoke<Void>(0xEAC560, player, x, y, z, heading, p5, findCollisionLand, p7); } // 0xCB7327FDCE6757E1
static BOOL UPDATE_PLAYER_TELEPORT(Player player) { return invoke<BOOL>(0xEAC5A0, player); } // 0x8644ACAF2A301B7E
static void STOP_PLAYER_TELEPORT() { invoke<Void>(0xEAC5F0); } // 0xEB205B72FDDFDFC6
static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0xEAC600); } // 0x705A7AB2D4BC0A9B
static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0xEAC620, player); } // 0x5F93A870D439E8B4
static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0xEAC670, player, regenRate); } // 0x02DC05627BC628AF
static float GET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player) { return invoke<float>(0xEAC6C0, player); } // 0x4FF4A601A84AE24A
static void SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player, float limit) { invoke<Void>(0xEAC710, player, limit); } // 0xE968651CFDDDE20B
static void DISABLE_PLAYER_HEALTH_RECHARGE(Player player) { invoke<Void>(0xEAC770, player); } // 0x090F2F734B18CEBF
static void SET_PLAYER_FALL_DISTANCE_TO_TRIGGER_RAGDOLL_OVERRIDE(Player player, float p1) { invoke<Void>(0xEAC7A0, player, p1); } // 0xA9FF721056B7254E
static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC7F0, player, modifier); } // 0x148193D59AAB6D14
static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC840, player, modifier); } // 0x43DFCD4B65960E46
static void SET_PLAYER_WEAPON_MINIGUN_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC890, player, modifier); } // 0x10F23FF10E9AA211
static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier, BOOL p2) { invoke<Void>(0xEAC8E0, player, modifier, p2); } // 0xA8762533460B016B
static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC940, player, modifier); } // 0xECD5F8110C183253
static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC990, player, modifier); } // 0x1BB5389ACC6BFCFC
static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC9E0, player, modifier); } // 0x7754DB9F9579CEE4
static void SET_PLAYER_MAX_EXPLOSIVE_DAMAGE(Player player, float p1) { invoke<Void>(0xEACA30, player, p1); } // 0x14EBA27C5B556497
static void SET_PLAYER_EXPLOSIVE_DAMAGE_MODIFIER(Player player, Any p1) { invoke<Void>(0xEACA80, player, p1); } // 0x05DDADC6F9EA8B04
static void SET_PLAYER_WEAPON_TAKEDOWN_DEFENSE_MODIFIER(Player player, float p1) { invoke<Void>(0xEACAD0, player, p1); } // 0xF1617CCA9785B3DA
static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xEACB20, player, tintIndex); } // 0x9C63D805CB2ABDB5
static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xEACB60, player, tintIndex); } // 0x6A3837CF4CF46A9D
static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0xEACBA0, player, index); } // 0xA4C157F5AAD56833
static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0xEACBE0, player, index); } // 0x9A6FA1C41236F7D3
static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xEACC20, player, tintIndex); } // 0xC02C4AB8A5C744D7
static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xEACC60, player, tintIndex); } // 0x755C848B9B13C696
static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0xEACCA0, player); } // 0x2DF241BBC3BB2698
static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0xEACCD0, player); } // 0x05B7F4CBFA7B6871
static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0xEACD10, player, enabled); } // 0x92BC68FD9EBF7832
static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0xEACD60, player, r, g, b); } // 0xDC198F70124270BE
static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0xEACE10, player, r, g, b); } // 0xA74429530D79E338
static void SET_PLAYER_PHONE_PALETTE_IDX(Player player, int flags) { invoke<Void>(0xEACE90, player, flags); } // 0x454108124161B7D7
static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xEACEC0, player, multiplier); } // 0xF75E68D9DCB8C80B
static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xEACF10, player, multiplier); } // 0x92F9E3A242F41E98
static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0xEACF60, player, ped); } // 0xC1204DBD7B8A643E
static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0xEAD010, player, amount, gaitType, speed, p4, p5); } // 0x8EAC8FBDF8A3830E
static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0xEAD0C0, player); } // 0xDF1A809B241FEE24
static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0xEAD100, player, toggle); } // 0xE8B2E2E978035EF0
static void SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(Player player, BOOL toggle) { invoke<Void>(0xEAD150, player, toggle); } // 0x5D0510F58106E4FF
static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0xEAD1A0, player, value); } // 0x048D90B19F701DC3
static BOOL IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(Player player) { return invoke<BOOL>(0xEAD200, player); } // 0x423F801F012D944B
static void INCREASE_PLAYER_JUMP_SUPPRESSION_RANGE(Player player) { invoke<Void>(0xEAD240, player); } // 0x2B5801E768BECF3C
static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0xEAD270, player, toggle); } // 0x469AD8A2B1EBB937
static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, int p1) { invoke<Void>(0xEAD2B0, player, p1); } // 0xE00868707690F6A7
static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0xEAD2F0, index); } // 0x0DAFB2A5B123922B
static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xEAD320, value); } // 0x8D51A58AA12E95D0
static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xEAD350, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB56783BB72003C9A
static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0xEAD370); } // 0xD11FB55020B6F371
static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0xEAD3D0, player); } // 0xE6896553A815F074
static BOOL IS_PLAYER_BATTLE_AWARE(Player player) { return invoke<BOOL>(0xEAD420, player); } // 0x1AF2787435531EA9
static BOOL GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(Player player, int p1, BOOL p2) { return invoke<BOOL>(0xEAD4A0, player, p1, p2); } // 0x992BFEB6732434E5
static void EXTEND_WORLD_BOUNDARY_FOR_PLAYER(float x, float y, float z) { invoke<Void>(0xEAD510, x, y, z); } // 0xFFD4786D6EA9F414
static void RESET_WORLD_BOUNDARY_FOR_PLAYER() { invoke<Void>(0xEAD570); } // 0xDC14EA9673A80516
static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0xEAD5D0, player); } // 0x94CC17D69C81292D
static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0xEAD630, player); } // 0x358E7369E46B466E
static void SET_PLAYER_LEAVE_PED_BEHIND(Player player, BOOL toggle) { invoke<Void>(0xEAD680, player, toggle); } // 0xC4A38E060739AAF9
static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xEAD6D0, player, p1, p2, p3, p4); } // 0x740F6E63EE1C1D43
static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0xEAD740, player); } // 0xBFB1BDBC26BB9501
static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xEAD770, player, model); } // 0xCE1864BA99DCF3C2
static void SET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xEAD7B0, player, model); } // 0x953124DAB474F504
static Hash GET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0xEAD7F0, player); } // 0x4B04D06A9A9A2186
static Hash GET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0xEAD830, player); } // 0x000E48394E21867C
static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xEAD870, player); } // 0xC7DB642109D72AF8
static void CLEAR_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xEAD8B0, player); } // 0x6C8F0A6A6EFD073C
static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xEAD8F0, player, model); } // 0xD8FE716A11BE669A
static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0xEAD930, player); } // 0xBDAA517C3D10DB80
static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0xEAD970, player); } // 0x706D6DF51D119A27
static void SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(BOOL p0) { invoke<Void>(0xEAD9A0, p0); } // 0xE3CF1CD0E11083B3
static void SET_PLAYER_BLUETOOTH_STATE(Player player, BOOL state) { invoke<Void>(0xEAD9E0, player, state); } // 0x7B537987214FC5A3
static BOOL IS_PLAYER_BLUETOOTH_ENABLE(Player player) { return invoke<BOOL>(0xEADA30, player); } // 0x86A327F828FE34D1
static void DISABLE_CAMERA_VIEW_MODE_CYCLE(Player player) { invoke<Void>(0xEADA80, player); } // 0x98D2FC8206AB54E0
static int GET_PLAYER_FAKE_WANTED_LEVEL(Player player) { return invoke<int>(0xEADAB0, player); } // 0x0F9DAC8C6B952C2B
static void SET_PLAYER_CAN_DAMAGE_PLAYER(Player player1, Player player2, BOOL toggle) { invoke<Void>(0xEADB10, player1, player2, toggle); } // 0xA4337AACEADDAA8E
static void SET_APPLY_WAYPOINT_OF_PLAYER(Player player, int hudColor) { invoke<Void>(0xEADB90, player, hudColor); } // 0xC29BDAAD2623309A
static BOOL IS_PLAYER_VEHICLE_WEAPON_TOGGLED_TO_NON_HOMING(Any p0) { return invoke<BOOL>(0xEADBA0, p0); } // 0xBB7E639305F91EF7
static void SET_PLAYER_VEHICLE_WEAPON_TO_NON_HOMING(Any p0) { invoke<Void>(0xEADC10, p0); } // 0x174A79E28AE4782E
static void SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(Any p0, Any p1) { invoke<Void>(0xEADC70, p0, p1); } // 0x62013EEF72D4454F
static void ADD_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0xEADCF0, player, entity); } // 0x1DE8C13F47D5A73F
static void REMOVE_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0xEADD60, player, entity); } // 0x5D602AB9F6E93843
static void SET_PLAYER_PREVIOUS_VARIATION_DATA(Player player, int p1, int p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEADDD0, player, p1, p2, p3, p4, p5); } // 0xFA5313EFD99BB771
static void REMOVE_SCRIPT_FIRE_POSITION() { invoke<Void>(0xEADE50); } // 0xE0CE913C020B2907
static void SET_SCRIPT_FIRE_POSITION(float coordX, float coordY, float coordZ) { invoke<Void>(0xEADE90, coordX, coordY, coordZ); } // 0x1AE8EF20D4D96E11
static void REPLAY_START_EVENT(int p0) { invoke<Void>(0xEAE130, p0); } // 0xB9784D6C7219851B
static void REPLAY_STOP_EVENT() { invoke<Void>(0xEAE140); } // 0x3B327805C3CAF8DC
static void REPLAY_CANCEL_EVENT() { invoke<Void>(0xEAE150); } // 0xD1CEC1802EBF7D03
static void REPLAY_RECORD_BACK_FOR_TIME(float p0, float p1, int p2) { invoke<Void>(0xEAE160, p0, p1, p2); } // 0xA62957B100C8DE6D
static void REPLAY_CHECK_FOR_EVENT_THIS_FRAME(const char* missionNameLabel, Any p1) { invoke<Void>(0xEAE170, missionNameLabel, p1); } // 0xECF30459397D5190
static void REPLAY_PREVENT_RECORDING_THIS_FRAME() { invoke<Void>(0xEAE180); } // 0xC0964AABD3C0CC7E
static void REPLAY_RESET_EVENT_INFO() { invoke<Void>(0xEAE190); } // 0x031C8B7F8E00B5A7
static void REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME() { invoke<Void>(0xEAE1A0); } // 0x9D0B099EEAD74270
static void RECORD_GREATEST_MOMENT(int p0, int p1, int p2) { invoke<Void>(0xEAE1B0, p0, p1, p2); } // 0x5CFA0003D667CD0F
static void STOP_REPLAY_RECORDING() { invoke<Void>(0xEAE1C0); } // 0x98188EDB7446A033
static BOOL IS_REPLAY_RECORDING() { return invoke<BOOL>(0xEAE1D0); } // 0xE7585CE3CDD6F47E
static void REGISTER_EFFECT_FOR_REPLAY_EDITOR(const char* p0, BOOL p1) { invoke<Void>(0xEAE2F0, p0, p1); } // 0xF32B2D960EF3FA6E
static BOOL REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP() { return invoke<BOOL>(0xEAE300); } // 0xD5FD8DD00FB16F99
static void SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM() { invoke<Void>(0xEAE310); } // 0x952F7C7A0CC86DA0
static void SET_REPLAY_SYSTEM_PAUSED_FOR_SAVE(BOOL p0) { invoke<Void>(0xEAE320, p0); } // 0x41C6C46BCEFF9949
static void REPLAY_CONTROL_SHUTDOWN() { invoke<Void>(0xEAE330); } // 0xCE9266D07017085A
static void ACTIVATE_ROCKSTAR_EDITOR(int p0) { invoke<Void>(0xEAE340, p0); } // 0xA21271C08AEE8291
static BOOL SAVEMIGRATION_IS_MP_ENABLED() { return invoke<BOOL>(0xEAFBF0); } // 0xFE45CC32BB79DB76
static BOOL SAVEMIGRATION_MP_REQUEST_ACCOUNTS() { return invoke<BOOL>(0xEAFC10); } // 0x0A6CBDB5046B458B
static int SAVEMIGRATION_MP_GET_ACCOUNTS_STATUS() { return invoke<int>(0xEAFC40); } // 0x3E79E8FD627F8207
static int SAVEMIGRATION_MP_NUM_ACCOUNTS() { return invoke<int>(0xEAFC70); } // 0xB1DF64EC54DC6021
static BOOL SAVEMIGRATION_MP_GET_ACCOUNT(int p0, Any* p1) { return invoke<BOOL>(0xEAFCB0, p0, p1); } // 0xA283F9C6621A9294
static BOOL SAVEMIGRATION_MP_REQUEST_STATUS() { return invoke<BOOL>(0xEAFCE0); } // 0x8615C476E6BA23D8
static int SAVEMIGRATION_MP_GET_STATUS() { return invoke<int>(0xEAFD10); } // 0x340CF8A9750C3D1A
static void REQUEST_SCRIPT(const char* scriptName) { invoke<Void>(0xEB0E40, scriptName); } // 0x97A5024CE91641F1
static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { invoke<Void>(0xEB0EC0, scriptName); } // 0xFD49725F3FE7EE13
static BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0xEB0F20, scriptName); } // 0xA6E4F7A73ABC4A76
static BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0xEB0F70, scriptName); } // 0x61AD5054653814F5
static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0xEB0FB0, scriptHash); } // 0x625263BFD08AE230
static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0xEB10A0, scriptHash); } // 0xD21650BDA0F10841
static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0xEB1150, scriptHash); } // 0x65F606616F48186B
static BOOL DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash scriptHash) { return invoke<BOOL>(0xEB11F0, scriptHash); } // 0x5ADE92AC7A2490B6
static void TERMINATE_THREAD(int threadId) { invoke<Void>(0xEB1280, threadId); } // 0xC3CF96F73FC43848
static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0xEB1290, threadId); } // 0xF40767E41852FB72
static const char* GET_NAME_OF_SCRIPT_WITH_THIS_ID(int threadId) { return invoke<const char*>(0xEB12D0, threadId); } // 0xACF74B377C634277
static void SCRIPT_THREAD_ITERATOR_RESET() { invoke<Void>(0xEB1350); } // 0x29AB4A18A37441C7
static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<int>(0xEB1360); } // 0x29637E6F2B8E5690
static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xEB1380); } // 0x8F76B2250AC806FA
static void TERMINATE_THIS_THREAD() { invoke<Void>(0xEB13A0); } // 0xBBC29EBE6E1A48FA
static int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash scriptHash) { return invoke<int>(0xEB13C0, scriptHash); } // 0x486FF5D06E9659F1
static const char* GET_THIS_SCRIPT_NAME() { return invoke<const char*>(0xEB13E0); } // 0x1AF90EB93E0012D6
static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0xEB1410); } // 0x931D15B1D60C81B0
static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0xEB1430, eventGroup); } // 0x703C4F7316B7195D
static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0xEB1480, eventGroup, eventIndex); } // 0x5E3ED023C0E7CC7C
static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0xEB14B0, eventGroup, eventIndex); } // 0x4BC3E5D2FB0A1665
static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, Any* eventData, int eventDataSize) { return invoke<BOOL>(0xEB14F0, eventGroup, eventIndex, eventData, eventDataSize); } // 0xFCEF367B86651ED3
static void TRIGGER_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int playerBits) { invoke<Void>(0xEB1540, eventGroup, eventData, eventDataSize, playerBits); } // 0x2C0E0814582947D3
static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0xEB1560); } // 0xCD17096A98584C2B
static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0xEB1570, toggle); } // 0x6FF322107B12B749
static BOOL GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0xEB1590); } // 0x828F3FAE99DA791A
static void COMMIT_TO_LOADINGSCREEN_SELCTION() { invoke<Void>(0xEB15A0); } // 0x48AA9CAAAB71C7B8
static BOOL BG_IS_EXITFLAG_SET() { return invoke<BOOL>(0xEB15B0); } // 0x8FCC41E6E43728AA
static void BG_SET_EXITFLAG_RESPONSE() { invoke<Void>(0xEB15E0); } // 0xC68B0868CFA1B72F
static void BG_START_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0xEB1600, contextHash); } // 0x52DC717C5008D9DA
static void BG_END_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0xEB1620, contextHash); } // 0xA4991DF2B554184E
static void BG_START_CONTEXT(const char* contextName) { invoke<Void>(0xEB1640, contextName); } // 0x34D5EB1E6F706A50
static void BG_END_CONTEXT(const char* contextName) { invoke<Void>(0xEB1670, contextName); } // 0x3611A662967FC11C
static BOOL BG_DOES_LAUNCH_PARAM_EXIST(int scriptIndex, const char* p1) { return invoke<BOOL>(0xEB16A0, scriptIndex, p1); } // 0x9F05118582DBA146
static int BG_GET_LAUNCH_PARAM_VALUE(int scriptIndex, const char* p1) { return invoke<int>(0xEB1710, scriptIndex, p1); } // 0xF8F0D1290FE81BC5
static int BG_GET_SCRIPT_ID_FROM_NAME_HASH(Hash p0) { return invoke<int>(0xEB1790, p0); } // 0x616D6688F78D1729
static void REGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0xEAFE10, variable); } // 0xFAF127E6FF05E72E
static void UNREGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0xEAFE40, variable); } // 0xA759D3AD1579CBCB
static void FORCE_CHECK_SCRIPT_VARIABLES() { invoke<Void>(0xEAFE70); } // 0x3AABE0CD8115D72E
static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xEB3290, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x120E577522852984
static int START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xEB32C0, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x14C30F326F5883DA
static int START_SHAPE_TEST_BOUNDING_BOX(Entity entity, int flags1, int flags2) { return invoke<int>(0xEB32F0, entity, flags1, flags2); } // 0x33B15CA8B699DF5B
static int START_SHAPE_TEST_BOX(float x, float y, float z, float dimX, float dimY, float dimZ, float rotX, float rotY, float rotZ, Any p9, int flags, Entity entity, Any p12) { return invoke<int>(0xEB3320, x, y, z, dimX, dimY, dimZ, rotX, rotY, rotZ, p9, flags, entity, p12); } // 0xA86260972774CF88
static int START_SHAPE_TEST_BOUND(Entity entity, int flags1, int flags2) { return invoke<int>(0xEB3360, entity, flags1, flags2); } // 0x09132751EA3609EE
static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return invoke<int>(0xEB3390, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0x26C582EF5CD8A3A2
static int START_SHAPE_TEST_SWEPT_SPHERE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0xEB33D0, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0x666853720ADE415D
static int START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE(Vector3* pVec1, Vector3* pVec2, int flag, Entity entity, int flag2) { return invoke<int>(0xEB3410, pVec1, pVec2, flag, entity, flag2); } // 0x7705F42EDD7BAD81
static int GET_SHAPE_TEST_RESULT(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0xEB34B0, shapeTestHandle, hit, endCoords, surfaceNormal, entityHit); } // 0x0E7DD1EBCA8D2DE3
static int GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return invoke<int>(0xEB3560, shapeTestHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); } // 0xEE92B4A78668B1CE
static void RELEASE_SCRIPT_GUID_FROM_ENTITY(Entity entityHit) { invoke<Void>(0xEB3610, entityHit); } // 0x85A06221E981406B
static int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke<int>(0xEB5810); } // 0x2CA28CCB7CECACE7
static Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke<Hash>(0xEB5830, msgIndex); } // 0x544DCD3126D76335
static BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0xEB58A0, msgIndex); } // 0x0FA6FA5156AD5C8D
static BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0xEB58D0, msgIndex); } // 0x2FB38A412252BDF6
static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(int p0, const char* context, int* out) { return invoke<BOOL>(0xEB5900, p0, context, out); } // 0x58103281724A16DE
static BOOL SC_INBOX_MESSAGE_GET_DATA_BOOL(int p0, const char* p1) { return invoke<BOOL>(0xEB5940, p0, p1); } // 0x584EEB682A158C47
static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, char* out) { return invoke<BOOL>(0xEB59C0, p0, context, out); } // 0xC7B4A5CCCF31FA28
static BOOL SC_INBOX_MESSAGE_DO_APPLY(int p0) { return invoke<BOOL>(0xEB5A00, p0); } // 0x895C996CADF26E19
static const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int p0) { return invoke<const char*>(0xEB5A30, p0); } // 0x45A989529B3F2C25
static void SC_INBOX_MESSAGE_PUSH_GAMER_T0_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0xEB5A90, gamerHandle); } // 0x693B9B4C2F3B9312
static void SC_INBOX_SEND_UGCSTATUPDATE_TO_RECIP_LIST(Any* data) { invoke<Void>(0xEB5B50, data); } // 0x078587F1408317CE
static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(int p0, Any* p1) { return invoke<BOOL>(0xEB5B90, p0, p1); } // 0x0D6C8EFC46788359
static BOOL SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(int index, Any* outData) { return invoke<BOOL>(0xEB5BC0, index, outData); } // 0x67B3687F7C69B969
static void SC_EMAIL_RETRIEVE_EMAILS(int offset, int limit) { invoke<Void>(0xEB5BF0, offset, limit); } // 0x9286D4F3BBB483D0
static int SC_EMAIL_GET_RETRIEVAL_STATUS() { return invoke<int>(0xEB5C20); } // 0x80CA040BF6D2FA31
static int SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() { return invoke<int>(0xEB5C40); } // 0x6109CAB6F2F7BB46
static BOOL SC_EMAIL_GET_EMAIL_AT_INDEX(int p0, Any* p1) { return invoke<BOOL>(0xEB5C60, p0, p1); } // 0xEC552A25287441B8
static void SC_EMAIL_DELETE_EMAILS(Any* p0, Any p1) { invoke<Void>(0xEB5CD0, p0, p1); } // 0x44DD5E8545C5376F
static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0xEB5D10, gamerHandle); } // 0xCF62A74234A425DB
static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<Void>(0xEB5DB0); } // 0xAEFE34E8C6A5734B
static void SC_EMAIL_SEND_EMAIL(const char* p0) { invoke<Void>(0xEB5DC0, p0); } // 0x14F6AFFEDAA326C3
static BOOL SC_EMAIL_SET_CURRENT_EMAIL_TAG(Any p0) { return invoke<BOOL>(0xEB5E20, p0); } // 0xED8D0AF79CFA040D
static void SC_CACHE_NEW_ROCKSTAR_MSGS(BOOL toggle) { invoke<Void>(0xEB5E50, toggle); } // 0x865FD8AC99AF6852
static BOOL SC_HAS_NEW_ROCKSTAR_MSG() { return invoke<BOOL>(0xEB5E70); } // 0xDAE47D07294589FC
static const char* SC_GET_NEW_ROCKSTAR_MSG() { return invoke<const char*>(0xEB5E80); } // 0x6E9A5327B5FDB44C
static BOOL SC_PRESENCE_ATTR_SET_INT(Hash attrHash, int value) { return invoke<BOOL>(0xEB5EB0, attrHash, value); } // 0x1A84C6BBF1FCC329
static BOOL SC_PRESENCE_ATTR_SET_FLOAT(Hash attrHash, float value) { return invoke<BOOL>(0xEB5EE0, attrHash, value); } // 0x8D862F78BA8A0C4C
static BOOL SC_PRESENCE_ATTR_SET_STRING(Hash attrHash, const char* value) { return invoke<BOOL>(0xEB5F20, attrHash, value); } // 0xB20280920F18CE68
static BOOL SC_PRESENCE_SET_ACTIVITY_RATING(Any p0, float p1) { return invoke<BOOL>(0xEB5F60, p0, p1); } // 0xB88224D7000C5E8B
static BOOL SC_GAMERDATA_GET_INT(const char* name, int* value) { return invoke<BOOL>(0xEB5FA0, name, value); } // 0x1B6B8B2C731B0C3B
static BOOL SC_GAMERDATA_GET_FLOAT(const char* name, float* value) { return invoke<BOOL>(0xEB5FE0, name, value); } // 0x974E385E2B593AD0
static BOOL SC_GAMERDATA_GET_BOOL(const char* name) { return invoke<BOOL>(0xEB6020, name); } // 0x65395D04908A6F78
static BOOL SC_GAMERDATA_GET_STRING(const char* name, char* value) { return invoke<BOOL>(0xEB6090, name, value); } // 0xA11E96BAF56824EE
static BOOL SC_GAMERDATA_GET_ACTIVE_XP_BONUS(float* value) { return invoke<BOOL>(0xEB60D0, value); } // 0x7497E3ECE98A291B
static BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0xEB6100, string, token); } // 0x9586B50628529A63
static BOOL SC_PROFANITY_CHECK_STRING_UGC(const char* string, int* token) { return invoke<BOOL>(0xEB6150, string, token); } // 0xE2E0A9E99F465D83
static BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0xEB6180, token); } // 0x3D1C2138A70E7348
static BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0xEB61E0, token); } // 0x11A87C58414E6C46
static BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<BOOL>(0xEB6240, token); } // 0x7A6F7DFA98599242
static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0xEB62A0, token); } // 0x0AE6BE5940D835FA
static BOOL SC_LICENSEPLATE_CHECK_STRING(const char* p0, int* p1) { return invoke<BOOL>(0xEB63A0, p0, p1); } // 0x4FB031EC3F28B77C
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_VALID(Any p0) { return invoke<BOOL>(0xEB63E0, p0); } // 0x095CCC9C5DC3BBF2
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_PENDING(Any p0) { return invoke<BOOL>(0xEB6440, p0); } // 0xF7A6291F5AE831D1
static int SC_LICENSEPLATE_GET_COUNT(int token) { return invoke<int>(0xEB64A0, token); } // 0xD635755A3659101C
static const char* SC_LICENSEPLATE_GET_PLATE(int token, int plateIndex) { return invoke<const char*>(0xEB64F0, token, plateIndex); } // 0x649D7167E25976C9
static const char* SC_LICENSEPLATE_GET_PLATE_DATA(int token, int plateIndex) { return invoke<const char*>(0xEB6550, token, plateIndex); } // 0xA71470E61CE061AE
static BOOL SC_LICENSEPLATE_SET_PLATE_DATA(const char* oldPlateText, const char* newPlateText, Any* plateData) { return invoke<BOOL>(0xEB65B0, oldPlateText, newPlateText, plateData); } // 0x3892A85343809530
static BOOL SC_LICENSEPLATE_ADD(const char* plateText, Any* plateData, int* token) { return invoke<BOOL>(0xEB6630, plateText, plateData, token); } // 0x54B88AF600DB0C95
static BOOL SC_LICENSEPLATE_GET_ADD_IS_PENDING(int token) { return invoke<BOOL>(0xEB66A0, token); } // 0xF504C9571E86CF76
static int SC_LICENSEPLATE_GET_ADD_STATUS(int token) { return invoke<int>(0xEB6700, token); } // 0x2A1E3EE300513E84
static BOOL SC_LICENSEPLATE_ISVALID(const char* plateText, int* token) { return invoke<BOOL>(0xEB6750, plateText, token); } // 0x271FD9228830C5F4
static BOOL SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(int token) { return invoke<BOOL>(0xEB6790, token); } // 0x078BF797A07B0C7C
static int SC_LICENSEPLATE_GET_ISVALID_STATUS(int token) { return invoke<int>(0xEB67F0, token); } // 0x9B55331B5F9C67C8
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE() { return invoke<BOOL>(0xEB6840); } // 0x23AB41CD7BD481B9
static int SC_COMMUNITY_EVENT_GET_EVENT_ID() { return invoke<int>(0xEB6870); } // 0xB84E5B0DD408418E
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT(const char* p0, int* p1) { return invoke<BOOL>(0xEB68A0, p0, p1); } // 0xDBAD1B5E0100936B
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT(const char* p0, float* p1) { return invoke<BOOL>(0xEB68E0, p0, p1); } // 0x8D59CDA8F573220D
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING(const char* p0, char* p1) { return invoke<BOOL>(0xEB6920, p0, p1); } // 0xC337674BFF27442B
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME(char* p0) { return invoke<BOOL>(0xEB6970, p0); } // 0xD0333868D1D47D97
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE(const char* p0) { return invoke<BOOL>(0xEB69B0, p0); } // 0x80AD0C08672402C2
static int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(const char* p0) { return invoke<int>(0xEB69E0, p0); } // 0xC9892FE6CC695923
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE(const char* p0, int* p1, const char* p2) { return invoke<BOOL>(0xEB6A10, p0, p1, p2); } // 0xFF6EC8172B647C9E
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE(const char* p0, float* p1, const char* p2) { return invoke<BOOL>(0xEB6A60, p0, p1, p2); } // 0x69A1136FA3794E40
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE(const char* p0, char* p1, const char* p2) { return invoke<BOOL>(0xEB6AB0, p0, p1, p2); } // 0x0D777171FC10DBDA
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE(char* p0, const char* p1) { return invoke<BOOL>(0xEB6B00, p0, p1); } // 0xD078F914C227CF7B
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID(int p0) { return invoke<BOOL>(0xEB6B50, p0); } // 0x0DA41896C7810BBB
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(int p0, const char* p1, int* p2) { return invoke<BOOL>(0xEB6B80, p0, p1, p2); } // 0x72930FB68F9B4179
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID(int p0, const char* p1, float* p2) { return invoke<BOOL>(0xEB6BD0, p0, p1, p2); } // 0x80C6F609D860930C
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(int p0, const char* p1, char* p2) { return invoke<BOOL>(0xEB6C20, p0, p1, p2); } // 0x59632E3312C5FFDF
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(int p0, char* p1) { return invoke<BOOL>(0xEB6C70, p0, p1); } // 0xF5EB76164CE420A5
static BOOL SC_TRANSITION_NEWS_SHOW(Any p0) { return invoke<BOOL>(0xEB6CC0, p0); } // 0x414AC8390B655576
static BOOL SC_TRANSITION_NEWS_SHOW_TIMED(Any p0, Any p1) { return invoke<BOOL>(0xEB6D10, p0, p1); } // 0xB5F751D7204D8B1A
static BOOL SC_TRANSITION_NEWS_SHOW_NEXT_ITEM() { return invoke<BOOL>(0xEB6D60); } // 0x529DE110B096B460
static BOOL SC_TRANSITION_NEWS_HAS_EXTRA_DATA_TU() { return invoke<BOOL>(0xEB6D90); } // 0x16A1E7B3E8F85EB9
static BOOL SC_TRANSITION_NEWS_GET_EXTRA_DATA_INT_TU(const char* p0, int* p1) { return invoke<BOOL>(0xEB6DC0, p0, p1); } // 0xACB8B29F6BEB8B58
static void SC_TRANSITION_NEWS_END() { invoke<Void>(0xEB6E00); } // 0x318195DFBDDB6FFA
static BOOL SC_PAUSE_NEWS_INIT_STARTER_PACK(Any p0) { return invoke<BOOL>(0xEB6E20, p0); } // 0xDF0800F98C6064FB
static BOOL SC_PAUSE_NEWS_GET_PENDING_STORY(Any p0) { return invoke<BOOL>(0xEB6E60, p0); } // 0xAB564B6E85995DBB
static void SC_PAUSE_NEWS_SHUTDOWN() { invoke<Void>(0xEB6E90); } // 0x88600576EDB50BD2
static const char* SC_ACCOUNT_INFO_GET_NICKNAME() { return invoke<const char*>(0xEB6EB0); } // 0xE5546772B54C0EEE
static BOOL SC_ACHIEVEMENT_INFO_STATUS(int* p0) { return invoke<BOOL>(0xEB6ED0, p0); } // 0x616C54D34FFE092C
static BOOL SC_HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xEB6F40, achievementId); } // 0xF841B04B93D27BA9
static BOOL STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<BOOL>(0xECF000, statSlot); } // 0xF253153116210E81
static BOOL STAT_LOAD(int statSlot) { return invoke<BOOL>(0xECF0B0, statSlot); } // 0x2D1E9C333C5B2D4B
static BOOL STAT_SAVE(int p0, BOOL p1, int p2, BOOL p3) { return invoke<BOOL>(0xECF0E0, p0, p1, p2, p3); } // 0x3AADA29651BD7786
static void STAT_SET_OPEN_SAVETYPE_IN_JOB(int p0) { invoke<Void>(0xECF120, p0); } // 0x2A3AA41B5A7E92FA
static BOOL STAT_LOAD_PENDING(int statSlot) { return invoke<BOOL>(0xECF150, statSlot); } // 0x944042019AAAD145
static BOOL STAT_SAVE_PENDING() { return invoke<BOOL>(0xECF180); } // 0xA0BF4C723F7D0831
static BOOL STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<BOOL>(0xECF1A0); } // 0xFF94E450D8F794CD
static BOOL STAT_DELETE_SLOT(int p0) { return invoke<BOOL>(0xECF1E0, p0); } // 0xD808EAD42CF65DA5
static BOOL STAT_SLOT_IS_LOADED(int statSlot) { return invoke<BOOL>(0xECF250, statSlot); } // 0x7A207DD1AEF9D26E
static BOOL STAT_CLOUD_SLOT_LOAD_FAILED(int p0) { return invoke<BOOL>(0xECF280, p0); } // 0x219ED949271099BA
static int STAT_CLOUD_SLOT_LOAD_FAILED_CODE(Any p0) { return invoke<int>(0xECF2B0, p0); } // 0x2F2F3B8D58302682
static void STAT_SET_BLOCK_SAVES(BOOL toggle) { invoke<Void>(0xECF300, toggle); } // 0xC88945F4DD99D7E0
static BOOL STAT_GET_BLOCK_SAVES() { return invoke<BOOL>(0xECF320); } // 0x5927F0EB6A8C0001
static BOOL STAT_CLOUD_SLOT_SAVE_FAILED(Any p0) { return invoke<BOOL>(0xECF340, p0); } // 0x64F5ED1652910707
static void STAT_CLEAR_PENDING_SAVES(Any p0) { invoke<Void>(0xECF3C0, p0); } // 0x2CB53B9DB9AB03C1
static BOOL STAT_LOAD_DIRTY_READ_DETECTED() { return invoke<BOOL>(0xECF400); } // 0x31AE99BF71F99FDF
static void STAT_CLEAR_DIRTY_READ_DETECTED() { invoke<Void>(0xECF430); } // 0xF05E12C1DE78B9F2
static BOOL STAT_GET_LOAD_SAFE_TO_PROGRESS_TO_MP_FROM_SP() { return invoke<BOOL>(0xECF460); } // 0xDD07F250CCC73F1A
static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0xECF4B0, statName, value, save); } // 0x1164A75E490C27B6
static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0xECF4E0, statName, value, save); } // 0x4F8678C02360C3D2
static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0xECF520, statName, value, save); } // 0xF1D0B0CE940F620D
static BOOL STAT_SET_GXT_LABEL(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xECF560, statName, value, save); } // 0xFE0BEB152470B0B8
static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0xECF5A0, statName, value, numFields, save); } // 0x8FDC19B6566720CA
static BOOL STAT_SET_STRING(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xECF5E0, statName, value, save); } // 0x1A43F9BE4B6AAB67
static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0xECF620, statName, x, y, z, save); } // 0x2936060DABE3BC7C
static BOOL STAT_SET_MASKED_INT(Hash statName, int p1, int p2, int p3, BOOL save) { return invoke<BOOL>(0xECF660, statName, p1, p2, p3, save); } // 0xCC11C02D491BBBBB
static BOOL STAT_SET_USER_ID(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xECF6A0, statName, value, save); } // 0xD13EF24D43A8E864
static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0xECF6E0, statName, p1); } // 0x465DA23A52B88B07
static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0xECF710, statHash, outValue, p2); } // 0xDF7F16323520B858
static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0xECF7F0, statHash, outValue, p2); } // 0x2F0966A034F5ADC6
static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0xECF820, statHash, outValue, p2); } // 0xF249567F2E83E093
static BOOL STAT_GET_DATE(Hash statHash, Any* outValue, int numFields, Any p3) { return invoke<BOOL>(0xECF850, statHash, outValue, numFields, p3); } // 0x22F25CEE5BAA4944
static const char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<const char*>(0xECF880, statHash, p1); } // 0xCEA81DACD6DA3ADB
static BOOL STAT_GET_POS(Hash statName, float* outX, float* outY, float* outZ, Any p4) { return invoke<BOOL>(0xECF8B0, statName, outX, outY, outZ, p4); } // 0xB738B2E1369125F6
static BOOL STAT_GET_MASKED_INT(Hash statHash, int* outValue, int p2, int p3, Any p4) { return invoke<BOOL>(0xECF8F0, statHash, outValue, p2, p3, p4); } // 0x1F1450A1F4852E10
static const char* STAT_GET_USER_ID(Hash statHash) { return invoke<const char*>(0xECF9C0, statHash); } // 0xD8DECC82BA81E8D9
static const char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<const char*>(0xECF9F0, statName); } // 0x586035D0F620ADEE
static BOOL STAT_SET_LICENSE_PLATE(Hash statName, const char* str) { return invoke<BOOL>(0xECFA20, statName, str); } // 0x9E1D4641E6A5C2F0
static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0xECFA50, statName, value); } // 0x3CAC0DB32E69B1B8
static BOOL STAT_COMMUNITY_START_SYNCH() { return invoke<BOOL>(0xECFAD0); } // 0x4B995F8441EAC13B
static BOOL STAT_COMMUNITY_SYNCH_IS_PENDING() { return invoke<BOOL>(0xECFB00); } // 0xB8581B151258A47D
static BOOL STAT_COMMUNITY_GET_HISTORY(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0xECFB10, statName, p1, outValue); } // 0x3BD9AF4ED006CA00
static void STAT_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xECFB50, p0); } // 0xC4FBBBC915C04DF9
static void STAT_LOCAL_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xECFB60, p0); } // 0xB9BE1957DDE28FC8
static int STAT_GET_NUMBER_OF_DAYS(Hash statName) { return invoke<int>(0xECFBC0, statName); } // 0x4F256B9F00ACB695
static int STAT_GET_NUMBER_OF_HOURS(Hash statName) { return invoke<int>(0xECFBE0, statName); } // 0xDF21396D0886D8F7
static int STAT_GET_NUMBER_OF_MINUTES(Hash statName) { return invoke<int>(0xECFC00, statName); } // 0xE44C8536D6F264FC
static int STAT_GET_NUMBER_OF_SECONDS(Hash statName) { return invoke<int>(0xECFC20, statName); } // 0x77A7B5685F038D01
static void STAT_SET_PROFILE_SETTING_VALUE(int profileSetting, int value) { invoke<Void>(0xECFC40, profileSetting, value); } // 0x7743BAF85DF35E38
static void STATS_COMPLETED_CHARACTER_CREATION(Any p0) { invoke<Void>(0xECFCB0, p0); } // 0xCD2B99375CA577C6
static int PACKED_STAT_GET_INT_STAT_INDEX(int p0) { return invoke<int>(0xECFCC0, p0); } // 0xC24FF3ECDBA75CAC
static Hash GET_PACKED_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xECFCF0, index, spStat, charStat, character); } // 0xC80B42F8AEC90782
static Hash GET_PACKED_TU_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xECFDD0, index, spStat, charStat, character); } // 0x443206C9783C69F1
static Hash GET_PACKED_NG_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character, const char* section) { return invoke<Hash>(0xECFEB0, index, spStat, charStat, character, section); } // 0x6B604293CA9BF4E0
static BOOL GET_PACKED_STAT_BOOL_CODE(int index, int characterSlot) { return invoke<BOOL>(0xECFF90, index, characterSlot); } // 0xA6D3C21763E25496
static int GET_PACKED_STAT_INT_CODE(int index, int characterSlot) { return invoke<int>(0xED0040, index, characterSlot); } // 0x03CFFD51CE515454
static void SET_PACKED_STAT_BOOL_CODE(int index, BOOL value, int characterSlot) { invoke<Void>(0xED00F0, index, value, characterSlot); } // 0xA595AA1819B05EA0
static void SET_PACKED_STAT_INT_CODE(int index, int value, int characterSlot) { invoke<Void>(0xED0140, index, value, characterSlot); } // 0x0F575D68F532124C
static void PLAYSTATS_BACKGROUND_SCRIPT_ACTION(const char* action, int value) { invoke<Void>(0xED0190, action, value); } // 0xF62AFE29E168F6E0
static void PLAYSTATS_NPC_INVITE(const char* p0) { invoke<Void>(0xED03A0, p0); } // 0x7BF080B6E9DA59BA
static void PLAYSTATS_AWARD_XP(int amount, Hash type, Hash category) { invoke<Void>(0xED03B0, amount, type, category); } // 0xF509A0F327DF0ADD
static void PLAYSTATS_RANK_UP(int rank) { invoke<Void>(0xED03D0, rank); } // 0xC9F6D856F39266AF
static void PLAYSTATS_STARTED_SESSION_IN_OFFLINEMODE() { invoke<Void>(0xED03E0); } // 0xA8F0E4FAD3A68800
static void PLAYSTATS_ACTIVITY_DONE(int p0, int activityId) { invoke<Void>(0xED0470, p0, activityId); } // 0x53F0C32557EF5D43
static void PLAYSTATS_LEAVE_JOB_CHAIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED0510, p0, p1, p2, p3, p4); } // 0x7B6C12F588333BA9
static void PLAYSTATS_MISSION_STARTED(const char* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xED05D0, p0, p1, p2, p3); } // 0x048963DA591ECAAF
static void PLAYSTATS_MISSION_OVER(const char* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0xED05F0, p0, p1, p2, p3, p4, p5); } // 0x1A6EB10909EB6840
static void PLAYSTATS_MISSION_CHECKPOINT(const char* p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED06A0, p0, p1, p2, p3); } // 0x375B1B37EF136A49
static void PLAYSTATS_RANDOM_MISSION_DONE(const char* name, Any p1, Any p2, Any p3) { invoke<Void>(0xED06D0, name, p1, p2, p3); } // 0x3AF124228E3EAF07
static void PLAYSTATS_ROS_BET(int amount, int act, Player player, float cm) { invoke<Void>(0xED0700, amount, act, player, cm); } // 0x1C55C6E8F7E0027C
static void PLAYSTATS_RACE_CHECKPOINT(Vehicle p0, Any p1, int p2, int p3, Any p4) { invoke<Void>(0xED07B0, p0, p1, p2, p3, p4); } // 0x8316C9B9D1E7C6F9
static BOOL PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(int* playerAccountId, int* posixTime) { return invoke<BOOL>(0xED07E0, playerAccountId, posixTime); } // 0x0189E96FAC892B16
static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2) { invoke<Void>(0xED0810, p0, p1, p2); } // 0x6DA5DF2F00E56237
static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED0830, p0, p1, p2, p3, p4); } // 0xE72DE3350869DA0C
static void PLAYSTATS_CRATE_DROP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xED0860, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x781030C356161426
static void PLAYSTATS_CRATE_CREATED(float p0, float p1, float p2) { invoke<Void>(0xED0910, p0, p1, p2); } // 0x840F7B4124045541
static void PLAYSTATS_HOLD_UP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED0940, p0, p1, p2, p3); } // 0xF1A3507F1CCB5AB2
static void PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED0970, p0, p1, p2, p3); } // 0x3A6A8B40F4CEF984
static void PLAYSTATS_RACE_TO_POINT_MISSION_DONE(int p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED09F0, p0, p1, p2, p3); } // 0xC93D3E846508BAF3
static void PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(Any p0) { invoke<Void>(0xED0AB0, p0); } // 0x4E84B27CF8AA616F
static void PLAYSTATS_WEBSITE_VISITED(Hash scaleformHash, int p1) { invoke<Void>(0xED0AC0, scaleformHash, p1); } // 0x60C742268AC666E4
static void PLAYSTATS_FRIEND_ACTIVITY(int p0, BOOL p1) { invoke<Void>(0xED0AD0, p0, p1); } // 0x52BD224DF16926E9
static void PLAYSTATS_ODDJOB_DONE(int totalTimeMs, int p1, BOOL p2) { invoke<Void>(0xED0AE0, totalTimeMs, p1, p2); } // 0x60642EDE690B1018
static void PLAYSTATS_PROP_CHANGE(Ped p0, int p1, int p2, int p3) { invoke<Void>(0xED0AF0, p0, p1, p2, p3); } // 0xC55C44E111865A0F
static void PLAYSTATS_CLOTH_CHANGE(Ped p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED0B80, p0, p1, p2, p3, p4); } // 0x940BFADAD95A939F
static void PLAYSTATS_WEAPON_MODE_CHANGE(Hash weaponHash, Hash componentHashTo, Hash componentHashFrom) { invoke<Void>(0xED0C00, weaponHash, componentHashTo, componentHashFrom); } // 0xA634868C7A532A58
static void PLAYSTATS_CHEAT_APPLIED(const char* cheat) { invoke<Void>(0xED0CC0, cheat); } // 0xDB98FB9902F6B17C
static void PLAYSTATS_JOB_ACTIVITY_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0CE0, p0, p1, p2, p3); } // 0x7701647A03967883
static void PLAYSTATS_JOB_BEND(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0D00, p0, p1, p2, p3); } // 0x791C60FDE763B02C
static void PLAYSTATS_JOB_LTS_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0D20, p0, p1, p2, p3); } // 0xA65F85EADA8FCE58
static void PLAYSTATS_JOB_LTS_ROUND_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0D40, p0, p1, p2, p3); } // 0x8B363F1214B75578
static void PLAYSTATS_QUICKFIX_TOOL(int element, const char* item) { invoke<Void>(0xED0D60, element, item); } // 0x93270A4C77D1DCB1
static void PLAYSTATS_IDLE_KICK(int msStoodIdle) { invoke<Void>(0xED0E10, msStoodIdle); } // 0xA3DDD8C7699A4B48
static void PLAYSTATS_SET_JOIN_TYPE(int joinType) { invoke<Void>(0xED0E90, joinType); } // 0x011E6F76C331CFCE
static void PLAYSTATS_HEIST_SAVE_CHEAT(Hash hash, int p1) { invoke<Void>(0xED0EA0, hash, p1); } // 0x1D287C5DA2285371
static void PLAYSTATS_APPEND_DIRECTOR_METRIC(Any* p0) { invoke<Void>(0xED0EB0, p0); } // 0x38D116A5A4F69C5B
static void PLAYSTATS_AWARD_BAD_SPORT(int id) { invoke<Void>(0xED0F30, id); } // 0xF03BD9D28197A400
static void PLAYSTATS_PEGASUS_AS_PERSONAL_AIRCRAFT(Hash modelHash) { invoke<Void>(0xED0FA0, modelHash); } // 0xC08C0C34ECB97688
static void _PLAYSTATS_SHOPMENU_NAV(Any p0, Any p1, Any p2) { invoke<Void>(0xED1020, p0, p1, p2); } // 0xB56CE5A91FCC8552
static void PLAYSTATS_FM_EVENT_CHALLENGES(Any p0) { invoke<Void>(0xED10C0, p0); } // 0x2D37C46EADE98E63
static void PLAYSTATS_FM_EVENT_VEHICLETARGET(Any p0) { invoke<Void>(0xED10D0, p0); } // 0x32E12CCFF254D37A
static void PLAYSTATS_FM_EVENT_URBANWARFARE(Any p0) { invoke<Void>(0xED10E0, p0); } // 0x2825919430010B91
static void PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(Any p0) { invoke<Void>(0xED10F0, p0); } // 0x173E12E4AAA563A1
static void PLAYSTATS_FM_EVENT_ATOB(Any p0) { invoke<Void>(0xED1100, p0); } // 0xD2041B451EDC1C66
static void PLAYSTATS_FM_EVENT_PENNEDIN(Any p0) { invoke<Void>(0xED1110, p0); } // 0xC98FBB17B1EC9BA1
static void PLAYSTATS_FM_EVENT_PASSTHEPARCEL(Any p0) { invoke<Void>(0xED1120, p0); } // 0x4C70DC8FBB218E4E
static void PLAYSTATS_FM_EVENT_HOTPROPERTY(Any p0) { invoke<Void>(0xED1130, p0); } // 0xEBB6A19519CEBE34
static void PLAYSTATS_FM_EVENT_DEADDROP(Any p0) { invoke<Void>(0xED1140, p0); } // 0x41A58057D21172EA
static void PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(Any p0) { invoke<Void>(0xED1150, p0); } // 0x0E8BC7181CB760A3
static void PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(Any p0) { invoke<Void>(0xED1160, p0); } // 0x842F188EE807AF8B
static void PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(Any p0) { invoke<Void>(0xED1170, p0); } // 0xEC859204FA292EDF
static void PLAYSTATS_FM_EVENT_HUNTBEAST(Any p0) { invoke<Void>(0xED1180, p0); } // 0x05FBB9E5C4B211A4
static void PLAYSTATS_PIMENU_HIDE_OPTIONS(Any* data) { invoke<Void>(0xED1190, data); } // 0x608D1A3E3DEAEBAF
static int LEADERBOARDS_GET_NUMBER_OF_COLUMNS(int p0, Any p1) { return invoke<int>(0xED1280, p0, p1); } // 0x6D2024112D9A9660
static int LEADERBOARDS_GET_COLUMN_ID(int p0, int p1, int p2) { return invoke<int>(0xED12C0, p0, p1, p2); } // 0x54F72D02D777FBCB
static int LEADERBOARDS_GET_COLUMN_TYPE(int p0, Any p1, Any p2) { return invoke<int>(0xED1310, p0, p1, p2); } // 0x3C041FAC0ACE6A45
static int LEADERBOARDS_READ_CLEAR_ALL() { return invoke<int>(0xED1380); } // 0xB3740C450B9A06AE
static int LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<int>(0xED13C0, p0, p1, p2); } // 0x92E48B0F5D4E76F2
static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xED1430, p0, p1, p2); } // 0x2F700943A3341959
static BOOL LEADERBOARDS_READ_ANY_PENDING() { return invoke<BOOL>(0xED1460); } // 0x5824DB463E853B3E
static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xED14B0, p0, p1, p2); } // 0x7BBF11C251338D41
static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xED1530, p0, p1, p2, p3, p4, p5); } // 0x918B101666F9CB83
static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0xED1570, p0, p1); } // 0xFAFBA6521BA828B9
static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xED15A0, p0, p1, p2); } // 0xCB7FE0F272C209AB
static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xED15D0, p0, p1, p2); } // 0x15A7798AEEFAC562
static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xED1600, p0, p1, p2); } // 0x9A9BC0C3D955A625
static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0xED1630, p0, p1, p2); } // 0x40ED52FB5B42D9FB
static BOOL LEADERBOARDS2_READ_RANK_PREDICTION(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xED1660, p0, p1, p2); } // 0xAB3A622E50A5CCE2
static BOOL LEADERBOARDS2_READ_BY_PLAFORM(Any* p0, const char* gamerHandleCsv, const char* platformName) { return invoke<BOOL>(0xED1690, p0, gamerHandleCsv, platformName); } // 0x86A2F61D43CBFF3E
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_START(Any* p0) { return invoke<BOOL>(0xED16C0, p0); } // 0xF685596DB2F81084
static void LEADERBOARDS2_READ_GET_ROW_DATA_END() { invoke<Void>(0xED16F0); } // 0x612EE6D9325A3B16
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_INFO(Any p0, Any* p1) { return invoke<BOOL>(0xED1720, p0, p1); } // 0xA8236CAFF38CEF7C
static int LEADERBOARDS2_READ_GET_ROW_DATA_INT(Any p0, Any p1) { return invoke<int>(0xED1860, p0, p1); } // 0x575A7688415EEE2A
static float LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(Any p0, Any p1) { return invoke<float>(0xED1890, p0, p1); } // 0xFF7C26AC7D71757C
static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0xED18C0, p0); } // 0x41B592D7008A639E
static void LEADERBOARDS_WRITE_ADD_COLUMN(Any p0, Any p1, float p2) { invoke<Void>(0xED18F0, p0, p1, p2); } // 0x3573EC2255786C32
static void LEADERBOARDS_WRITE_ADD_COLUMN_LONG(Any p0, Any p1, Any p2) { invoke<Void>(0xED1910, p0, p1, p2); } // 0x4D9375FB05743625
static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0xED1930, p0); } // 0x6353C1BD2A5E7EA9
static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0xED1960); } // 0xB83DA0A55841C11A
static void LEADERBOARDS_CLEAR_CACHE_DATA_ID(Any p0) { invoke<Void>(0xED1980, p0); } // 0xEB551BF55D9D9721
static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0xED19A0, p0); } // 0xC0967BD19C389A28
static int LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<int>(0xED1A00, p0); } // 0x992FDA8495111E7E
static int LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Any p0) { return invoke<int>(0xED1A60, p0); } // 0xEDF2663D6A2097BD
static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xED1AA0, p0, p1, p2); } // 0x4B9EEFBC1906C36A
static void PRESENCE_EVENT_UPDATESTAT_INT(Hash statHash, int value, int p2) { invoke<Void>(0xED1AD0, statHash, value, p2); } // 0x8DD7F37773EBD5B9
static void PRESENCE_EVENT_UPDATESTAT_FLOAT(Hash statHash, float value, int p2) { invoke<Void>(0xED1AF0, statHash, value, p2); } // 0xE9694EE166E27C86
static void PRESENCE_EVENT_UPDATESTAT_INT_WITH_STRING(Hash statHash, int value, int p2, const char* string) { invoke<Void>(0xED1B10, statHash, value, p2, string); } // 0x0E6887182A0B2C89
static BOOL GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES() { return invoke<BOOL>(0xED1B50); } // 0xCA63545216190A04
static void SET_HAS_POSTED_ALL_VEHICLES_DRIVEN() { invoke<Void>(0xED1B80); } // 0x8E4CE3E418A4A18A
static void SET_PROFILE_SETTING_PROLOGUE_COMPLETE() { invoke<Void>(0xED1BD0); } // 0xDA9DD27943055A8D
static void SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE() { invoke<Void>(0xED1C20); } // 0x3B2E94EC82DA9C40
static void SET_PROFILE_SETTING_CREATOR_RACES_DONE(int value) { invoke<Void>(0xED1C70, value); } // 0xEFE7FA2B8F97F8BF
static void SET_PROFILE_SETTING_CREATOR_DM_DONE(int value) { invoke<Void>(0xED1CD0, value); } // 0x524ADF7DCA7AB2FD
static void SET_PROFILE_SETTING_CREATOR_CTF_DONE(int value) { invoke<Void>(0xED1D30, value); } // 0x6424B1392993B4E8
static void SET_JOB_ACTIVITY_ID_STARTED(Any p0, int characterSlot) { invoke<Void>(0xED1D90, p0, characterSlot); } // 0x91F6DFBE57E45538
static void SET_FREEMODE_PROLOGUE_DONE(Any p0, int characterSlot) { invoke<Void>(0xED1DA0, p0, characterSlot); } // 0x1A169A00A9C3A74E
static void SET_FREEMODE_STRAND_PROGRESSION_STATUS(int profileSetting, int settingValue) { invoke<Void>(0xED1DB0, profileSetting, settingValue); } // 0x6CDC48346A1C4FCF
static void STAT_NETWORK_INCREMENT_ON_SUICIDE(Any p0, float p1) { invoke<Void>(0xED1E00, p0, p1); } // 0x4BE1DC2DE96B1199
static void STAT_SET_CHEAT_IS_ACTIVE() { invoke<Void>(0xED1E80); } // 0xB2C27348224E729C
static BOOL LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(Any* p0, Any* p1) { return invoke<BOOL>(0xED1EA0, p0, p1); } // 0xFFC169CFE58B4AE2
static void FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE() { invoke<Void>(0xED1ED0); } // 0xFFD62C221C935ADB
static void STAT_MIGRATE_CLEAR_FOR_RESTART() { invoke<Void>(0xED1F20); } // 0xA1C98227D7D82333
static BOOL STAT_MIGRATE_SAVEGAME_START(const char* platformName) { return invoke<BOOL>(0xED1F30, platformName); } // 0x38BED19EB5C34B41
static int STAT_MIGRATE_SAVEGAME_GET_STATUS() { return invoke<int>(0xED1F40); } // 0x8F9CF4C6161EB431
static BOOL STAT_MIGRATE_CHECK_ALREADY_DONE() { return invoke<BOOL>(0xED1F50); } // 0xB4BB3DD3A6D3F304
static BOOL STAT_MIGRATE_CHECK_START() { return invoke<BOOL>(0xED1F60); } // 0xA7CF0480510EE046
static int STAT_MIGRATE_CHECK_GET_IS_PLATFORM_AVAILABLE(int p0) { return invoke<int>(0xED1F70, p0); } // 0xE76F74E4C982A0D4
static int STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(int p0, Any* p1) { return invoke<int>(0xED1F80, p0, p1); } // 0x0FE2E7ACE70D240E
static int STAT_GET_SAVE_MIGRATION_STATUS(Any* data) { return invoke<int>(0xED1F90, data); } // 0xF55F8AA504635B5C
static BOOL STAT_SAVE_MIGRATION_CANCEL_PENDING_OPERATION() { return invoke<BOOL>(0xED1FA0); } // 0x439313DFB58CA8B9
static int STAT_GET_CANCEL_SAVE_MIGRATION_STATUS() { return invoke<int>(0xED1FB0); } // 0x8D48140414CDD574
static BOOL STAT_SAVE_MIGRATION_CONSUME_CONTENT(Hash contentId, const char* srcPlatform, const char* srcGamerHandle) { return invoke<BOOL>(0xED1FC0, contentId, srcPlatform, srcGamerHandle); } // 0x07D12DEAC5A3B4E6
static int STAT_GET_SAVE_MIGRATION_CONSUME_CONTENT_STATUS(int* p0) { return invoke<int>(0xED1FD0, p0); } // 0x040F27244ED9B5A6
static void STAT_ENABLE_STATS_TRACKING() { invoke<Void>(0xED1FE0); } // 0x1E132C341165F83E
static void STAT_DISABLE_STATS_TRACKING() { invoke<Void>(0xED1FF0); } // 0x7D809DF9CCA503F0
static BOOL STAT_IS_STATS_TRACKING_ENABLED() { return invoke<BOOL>(0xED2000); } // 0x672D6F3E8E916DB5
static BOOL STAT_START_RECORD_STAT(int statType, int valueType) { return invoke<BOOL>(0xED2020, statType, valueType); } // 0xD007674D8A581D71
static BOOL STAT_STOP_RECORD_STAT() { return invoke<BOOL>(0xED2070); } // 0x77DAA17F34FDE49D
static BOOL STAT_GET_RECORDED_VALUE(float* value) { return invoke<BOOL>(0xED20A0, value); } // 0x6975D53533891910
static BOOL STAT_IS_RECORDING_STAT() { return invoke<BOOL>(0xED20D0); } // 0xC3051E9423297E5C
static int STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE() { return invoke<int>(0xED20F0); } // 0xDA0C268B09050750
static float STAT_GET_CURRENT_REAR_WHEEL_DISTANCE() { return invoke<float>(0xED2100); } // 0x91F40F276617074F
static float STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE() { return invoke<float>(0xED2130); } // 0xFF41A17ED9059E7D
static float STAT_GET_CURRENT_JUMP_DISTANCE() { return invoke<float>(0xED2160); } // 0x143EE419E5A537E6
static float STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE() { return invoke<float>(0xED2180); } // 0x24B36D1854339214
static float STAT_GET_CURRENT_SPEED() { return invoke<float>(0xED21A0); } // 0xC5EF85C408571EAF
static float STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE() { return invoke<float>(0xED21C0); } // 0xEAE605592B9C789F
static float STAT_GET_CURRENT_SKYDIVING_DISTANCE() { return invoke<float>(0xED21E0); } // 0xA318B59A6358E821
static float STAT_GET_CHALLENGE_FLYING_DIST() { return invoke<float>(0xED2200); } // 0x3D70C45F9F077E0A
static BOOL STAT_GET_FLYING_ALTITUDE(float* outValue) { return invoke<BOOL>(0xED2220, outValue); } // 0x2B2ABCEBD9B1F36F
static BOOL STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN() { return invoke<BOOL>(0xED2250); } // 0xF03AFB81ECD7494E
static float STAT_GET_VEHICLE_BAIL_DISTANCE() { return invoke<float>(0xED2270); } // 0x282230B7F0E52D56
static BOOL STAT_ROLLBACK_SAVE_MIGRATION() { return invoke<BOOL>(0xED2290); } // 0xD5F980C0F4DE6597
static void SET_HAS_SPECIALEDITION_CONTENT(int value) { invoke<Void>(0xED22A0, value); } // 0xED11291F7127888E
static void SET_SAVE_MIGRATION_TRANSACTION_ID_WARNING(int transactionId) { invoke<Void>(0xED22E0, transactionId); } // 0x100D89BF365E1356
static void GET_BOSS_GOON_UUID(int characterSlot, Any p1, Any p2) { invoke<Void>(0xED2320, characterSlot, p1, p2); } // 0xB91B042AE29D1DC0
static void PLAYSTATS_BW_BOSSONBOSSDEATHMATCH(Any p0) { invoke<Void>(0xED2390, p0); } // 0x80D4C93EC30B0786
static void PLAYSTATS_BW_YATCHATTACK(Any p0) { invoke<Void>(0xED23A0, p0); } // 0x9CEB2AC24E291FE5
static void PLAYSTATS_BW_HUNT_THE_BOSS(Any p0) { invoke<Void>(0xED23B0, p0); } // 0x70FD47FAC8200A49
static void PLAYSTATS_BW_SIGHTSEER(Any p0) { invoke<Void>(0xED23C0, p0); } // 0x6FA1E0B637DED988
static void PLAYSTATS_BW_ASSAULT(Any p0) { invoke<Void>(0xED23D0, p0); } // 0x9ADE63CF2AA5FA61
static void PLAYSTATS_BW_BELLY_OF_THE_BEAST(Any p0) { invoke<Void>(0xED23E0, p0); } // 0x14C70C346E2865FB
static void PLAYSTATS_BW_HEAD_HUNTER(Any p0) { invoke<Void>(0xED23F0, p0); } // 0xC1538E7E522A1807
static void PLAYSTATS_BW_FRAGILE_GOODS(Any p0) { invoke<Void>(0xED2400, p0); } // 0xEA483A47960FF65E
static void PLAYSTATS_BW_AIR_FREIGHT(Any p0) { invoke<Void>(0xED2410, p0); } // 0xF3621FB07D69B631
static void PLAYSTATS_BC_CAR_JACKING(Any p0) { invoke<Void>(0xED2420, p0); } // 0xAC598BA78ED25971
static void PLAYSTATS_BC_SMASH_AND_GRAB(Any p0) { invoke<Void>(0xED2430, p0); } // 0xE71905B28E3F819A
static void PLAYSTATS_BC_PROTECTION_RACKET(Any p0) { invoke<Void>(0xED2440, p0); } // 0xA2FA391998A5CA4F
static void PLAYSTATS_BC_MOST_WANTED(Any p0) { invoke<Void>(0xED2450, p0); } // 0x3FCF9BCA6FB938F2
static void PLAYSTATS_BC_FINDERS_KEEPERS(Any p0) { invoke<Void>(0xED2460, p0); } // 0x719970758F252DBF
static void PLAYSTATS_BC_POINT_TO_POINT(Any p0) { invoke<Void>(0xED2470, p0); } // 0x508F3011A3378766
static void PLAYSTATS_BC_CASHING(Any p0) { invoke<Void>(0xED2480, p0); } // 0x350AD43F9C3F2454
static void PLAYSTATS_BC_SALVAGE(Any p0) { invoke<Void>(0xED2490, p0); } // 0x760C934FF448A9F0
static void PLAYSTATS_SPENT_PI_CUSTOM_LOADOUT(int amount) { invoke<Void>(0xED24A0, amount); } // 0x90D02DA0EBE3D2A2
static void PLAYSTATS_BUY_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED2570, data); } // 0x630EFF47222F5E1D
static void PLAYSTATS_SELL_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED2580, data); } // 0xEB54AA925E801335
static void PLAYSTATS_DEFEND_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED2590, data); } // 0x72940F2C0631BBEB
static void PLAYSTATS_RECOVER_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED25A0, data); } // 0xC769CAC3FD631439
static void PLAYSTATS_HIT_CONTRABAND_DESTROY_LIMIT(Any p0) { invoke<Void>(0xED25B0, p0); } // 0xAE494703C93629A7
static void START_BEING_BOSS(Any p0) { invoke<Void>(0xED2640, p0); } // 0xE6523AD46828A3F6
static void START_BEING_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0xED2660, p0, p1, p2); } // 0x221F00BDB6FE967E
static void END_BEING_BOSS(Any p0, Any p1) { invoke<Void>(0xED26F0, p0, p1); } // 0xD9ADAE64ED7472C8
static void END_BEING_GOON(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2710, p0, p1, p2, p3, p4); } // 0x548C5E01E1FF757E
static void HIRED_LIMO(Any p0, Any p1) { invoke<Void>(0xED2730, p0, p1); } // 0x67269D2788D6D1B2
static void ORDER_BOSS_VEHICLE(Any p0, Any p1, Hash vehicleHash) { invoke<Void>(0xED27B0, p0, p1, vehicleHash); } // 0x0F285480DF661C3D
static void CHANGE_UNIFORM(Any p0, Any p1, Any p2) { invoke<Void>(0xED2860, p0, p1, p2); } // 0xEDE8FBBC2E485227
static void CHANGE_GOON_LOOKING_FOR_WORK(Any p0) { invoke<Void>(0xED28F0, p0); } // 0x941DD7AC53C9EC22
static void SEND_METRIC_GHOSTING_TO_PLAYER(Any p0) { invoke<Void>(0xED2910, p0); } // 0x1B045571F6FA298C
static void SEND_METRIC_VIP_POACH(Any p0, Any p1, Any p2) { invoke<Void>(0xED2920, p0, p1, p2); } // 0x329713E68B100498
static void SEND_METRIC_PUNISH_BODYGUARD(Any p0) { invoke<Void>(0xED29F0, p0); } // 0x88D5C9BF47388E35
static void PLAYSTATS_START_TRACKING_STUNTS() { invoke<Void>(0xED2AA0); } // 0x4C7D89621410F77E
static void PLAYSTATS_STOP_TRACKING_STUNTS() { invoke<Void>(0xED2AB0); } // 0x50BF6070C8D9F49F
static void PLAYSTATS_MISSION_ENDED(Any p0) { invoke<Void>(0xED2AC0, p0); } // 0x1CF82FBB85DD6ABB
static void PLAYSTATS_IMPEXP_MISSION_ENDED(Any p0) { invoke<Void>(0xED2AD0, p0); } // 0xA186CBB04F0BBCFE
static void PLAYSTATS_CHANGE_MC_ROLE(Any p0, Any p1, Any p2, Any p3, int role, int p5, Any p6) { invoke<Void>(0xED2AE0, p0, p1, p2, p3, role, p5, p6); } // 0xCA4490F4B172921A
static void PLAYSTATS_CHANGE_MC_OUTFIT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B10, p0, p1, p2, p3, p4); } // 0x4A3EF58902440342
static void PLAYSTATS_SWITCH_MC_EMBLEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B30, p0, p1, p2, p3, p4); } // 0x659F4E947AD2B02A
static void PLAYSTATS_MC_REQUEST_BIKE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B50, p0, p1, p2, p3, p4); } // 0x50F77CF468D67786
static void PLAYSTATS_MC_KILLED_RIVAL_MC_MEMBER(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B70, p0, p1, p2, p3, p4); } // 0x9FA5724BA444B78F
static void PLAYSTATS_ABANDONED_MC(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B90, p0, p1, p2, p3, p4); } // 0x386D5FB82562D9A7
static void PLAYSTATS_EARNED_MC_POINTS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xED2BB0, p0, p1, p2, p3, p4, p5); } // 0x038FC0304403CC66
static void PLAYSTATS_MC_FORMATION_ENDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xED2BD0, p0, p1, p2, p3, p4, p5, p6); } // 0xAAEAC50F94519B77
static void PLAYSTATS_MC_CLUBHOUSE_ACTIVITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xED2C00, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9C9F041189C7B5E6
static void PLAYSTATS_RIVAL_BEHAVIOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xED2C40, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x0FAB208D4EE01DCE
static void PLAYSTATS_COPY_RANK_INTO_NEW_SLOT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xED2D70, p0, p1, p2, p3, p4, p5, p6); } // 0x51223729D9AEA4FF
static void PLAYSTATS_DUPE_DETECTED(Any* data) { invoke<Void>(0xED2E30, data); } // 0x1A863223E987A73F
static void PLAYSTATS_BAN_ALERT(int p0) { invoke<Void>(0xED2EF0, p0); } // 0x89CB07C992FD7482
static void PLAYSTATS_GUNRUNNING_MISSION_ENDED(Any* data) { invoke<Void>(0xED2F60, data); } // 0xCF78529B9B88C73E
static void PLAYSTATS_GUNRUNNING_RND(Any p0) { invoke<Void>(0xED2F70, p0); } // 0xDBDCE53A650E5E77
static void PLAYSTATS_BUSINESS_BATTLE_ENDED(Any p0) { invoke<Void>(0xED3040, p0); } // 0x9F37D3068C21188B
static void PLAYSTATS_WAREHOUSE_MISSION_ENDED(Any p0) { invoke<Void>(0xED3050, p0); } // 0x3CC95BC25EF390A3
static void PLAYSTATS_NIGHTCLUB_MISSION_ENDED(Any p0) { invoke<Void>(0xED3060, p0); } // 0xA96F57BEEBDCD7FD
static void PLAYSTATS_DJ_USAGE(Any p0, Any p1) { invoke<Void>(0xED3070, p0, p1); } // 0x7FCBCE6EE93B0340
static void PLAYSTATS_MINIGAME_USAGE(Any p0, Any p1, Any p2) { invoke<Void>(0xED3100, p0, p1, p2); } // 0xF8C98B298DDC5D32
static void PLAYSTATS_STONE_HATCHET_ENDED(Any* data) { invoke<Void>(0xED31A0, data); } // 0xF0B9CB44987DE499
static void PLAYSTATS_SMUGGLER_MISSION_ENDED(Any* data) { invoke<Void>(0xED31B0, data); } // 0x1325E9C90489B378
static void PLAYSTATS_FM_HEIST_PREP_ENDED(Any* data) { invoke<Void>(0xED31C0, data); } // 0x99328D758CDC23F7
static void PLAYSTATS_INSTANCED_HEIST_ENDED(Any* data, Any p1, Any p2, Any p3) { invoke<Void>(0xED31D0, data, p1, p2, p3); } // 0x371A8C274440C46A
static void PLAYSTATS_DAR_CHECKPOINT(Any* data) { invoke<Void>(0xED31F0, data); } // 0xB47B9148D14503E5
static void PLAYSTATS_ENTER_SESSION_PACK(Any* data) { invoke<Void>(0xED3200, data); } // 0x684BD5689373BE09
static void PLAYSTATS_DRONE_USAGE(int p0, int p1, int p2) { invoke<Void>(0xED3210, p0, p1, p2); } // 0x4836A505A59A567B
static void PLAYSTATS_SPIN_WHEEL(int p0, int p1, int p2, int p3) { invoke<Void>(0xED32B0, p0, p1, p2, p3); } // 0xEFB96B0F8AFC55E7
static void PLAYSTATS_ARENA_WARS_SPECTATOR(int p0, int p1, int p2, int p3, int p4) { invoke<Void>(0xED3370, p0, p1, p2, p3, p4); } // 0x2630B46C64BCAAE2
static void PLAYSTATS_ARENA_WARS_ENDED(Any* data) { invoke<Void>(0xED3430, data); } // 0xF215BF4F28EC3017
static void PLAYSTATS_SWITCH_PASSIVE_MODE(BOOL p0, int p1, int p2, int p3) { invoke<Void>(0xED3440, p0, p1, p2, p3); } // 0xD3ABBB1A96756065
static void PLAYSTATS_COLLECTIBLE_PICKED_UP(int p0, Hash objectHash, Any p2, Any p3, int moneyAmount, int rpAmount, int chipsAmount, Any p7, int p8, Any p9, Any p10) { invoke<Void>(0xED34E0, p0, objectHash, p2, p3, moneyAmount, rpAmount, chipsAmount, p7, p8, p9, p10); } // 0xF68338683C568951
static void PLAYSTATS_CASINO_STORY_MISSION_ENDED(Any p0, Any p1) { invoke<Void>(0xED3600, p0, p1); } // 0x46A8E0CD89EA583B
static void PLAYSTATS_CASINO_CHIP(Any p0) { invoke<Void>(0xED3670, p0); } // 0x3537BA3FCD2A039A
static void PLAYSTATS_CASINO_ROULETTE(Any p0) { invoke<Void>(0xED3730, p0); } // 0xED43EEB7E19CF2E3
static void PLAYSTATS_CASINO_BLACKJACK(Any p0) { invoke<Void>(0xED3740, p0); } // 0xD2C8AF03369DD71B
static void PLAYSTATS_CASINO_THREE_CARD_POKER(Any p0) { invoke<Void>(0xED3750, p0); } // 0x5B04C6D6A21F6BDE
static void PLAYSTATS_CASINO_SLOT_MACHINE(Any p0) { invoke<Void>(0xED38A0, p0); } // 0x4625293E9A8A8039
static void PLAYSTATS_CASINO_INSIDE_TRACK(Any p0) { invoke<Void>(0xED39E0, p0); } // 0x4BD15CBD0A9222DD
static void PLAYSTATS_CASINO_LUCKY_SEVEN(Any p0) { invoke<Void>(0xED3B20, p0); } // 0xCDD1396DEA43BDA8
static void PLAYSTATS_CASINO_ROULETTE_LIGHT(Any p0) { invoke<Void>(0xED3C70, p0); } // 0x7B03AA631D3DC516
static void PLAYSTATS_CASINO_BLACKJACK_LIGHT(Any p0) { invoke<Void>(0xED3D50, p0); } // 0xD905BB02623EB466
static void PLAYSTATS_CASINO_THREE_CARD_POKER_LIGHT(Any p0) { invoke<Void>(0xED3E70, p0); } // 0x9908830BDC036C61
static void PLAYSTATS_CASINO_SLOT_MACHINE_LIGHT(Any p0) { invoke<Void>(0xED3F50, p0); } // 0x6D9B2D5FF44B7412
static void PLAYSTATS_CASINO_INSIDE_TRACK_LIGHT(Any p0) { invoke<Void>(0xED4040, p0); } // 0x7B2248C7C15BE57A
static void PLAYSTATS_ARCADE_GAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xED4130, p0, p1, p2, p3, p4, p5, p6); } // 0x7F9682CABF083921
static void PLAYSTATS_ARCADE_LOVE_MATCH(Any p0, Any p1) { invoke<Void>(0xED41F0, p0, p1); } // 0x82BF0C9FB824099C
static void PLAYSTATS_FREEMODE_CASINO_MISSION_ENDED(Any* data) { invoke<Void>(0xED4290, data); } // 0x4D301F952E820ABF
static void PLAYSTATS_HEIST3_DRONE(Any p0) { invoke<Void>(0xED42A0, p0); } // 0xF13CC26EA89AA7F8
static void PLAYSTATS_HEIST3_HACK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xED4340, p0, p1, p2, p3, p4, p5); } // 0x675E746FC2A4FB77
static void PLAYSTATS_NPC_PHONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0xED43F0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x7114D68882DD5DFB
static void PLAYSTATS_ARCADE_CABINET(Any p0) { invoke<Void>(0xED4400, p0); } // 0x2970B68950960A6C
static void PLAYSTATS_HEIST3_FINALE(Any p0) { invoke<Void>(0xED44B0, p0); } // 0xB48B26002E1AA60A
static void PLAYSTATS_HEIST3_PREP(Any p0) { invoke<Void>(0xED4510, p0); } // 0x40072633F87B9108
static void PLAYSTATS_MASTER_CONTROL(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED4570, p0, p1, p2, p3); } // 0xA95EC1B907F29ED9
static void PLAYSTATS_QUIT_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED4610, p0, p1, p2, p3, p4); } // 0x41D32B3516729590
static void PLAYSTATS_MISSION_VOTE(Any p0) { invoke<Void>(0xED4700, p0); } // 0x81A3B28FEE8BC3E2
static void PLAYSTATS_NJVS_VOTE(Any p0) { invoke<Void>(0xED4710, p0); } // 0x339EF7B9AE008FA8
static void PLAYSTATS_FM_MISSION_END(Any p0, Any p1, Any p2) { invoke<Void>(0xED4830, p0, p1, p2); } // 0xA40024641239312A
static void PLAYSTATS_HEIST4_PREP(Any p0) { invoke<Void>(0xED4850, p0); } // 0xB0BAD388315F2608
static void PLAYSTATS_HEIST4_FINALE(Any p0) { invoke<Void>(0xED48B0, p0); } // 0xBA1BC83D99F914EB
static void PLAYSTATS_HEIST4_HACK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED4910, p0, p1, p2, p3, p4); } // 0xCAA6345ABFF6EA75
static void PLAYSTATS_SUB_WEAP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED49C0, p0, p1, p2, p3); } // 0xC155FF33EAAF8C90
static void PLAYSTATS_FAST_TRVL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0xED4A60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x0EA2F05FA7C5B9D4
static void PLAYSTATS_HUB_ENTRY(Any p0) { invoke<Void>(0xED4BA0, p0); } // 0xD7F11E9496A00370
static void PLAYSTATS_DJ_MISSION_ENDED(Any p0) { invoke<Void>(0xED4C70, p0); } // 0x7C1CE15F51FA4860
static void PLAYSTATS_ROBBERY_PREP(Any p0) { invoke<Void>(0xED4C80, p0); } // 0xBD30FDBCFA1FA6FE
static void PLAYSTATS_ROBBERY_FINALE(Any p0) { invoke<Void>(0xED4CE0, p0); } // 0xD3DAE430946FA2C0
static void PLAYSTATS_EXTRA_EVENT(Any p0) { invoke<Void>(0xED4D40, p0); } // 0xF629F308639591F4
static void PLAYSTATS_CARCLUB_POINTS(Any p0) { invoke<Void>(0xED4DE0, p0); } // 0x1F6CBC74AC659452
static void PLAYSTATS_CARCLUB_CHALLENGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED4ED0, p0, p1, p2, p3); } // 0xCC5FFCD1D8510D21
static void PLAYSTATS_CARCLUB_PRIZE(int p0, Hash vehicleModel) { invoke<Void>(0xED4F70, p0, vehicleModel); } // 0x492808CC0E1DB266
static void PLAYSTATS_AWARD_NAV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED4FF0, p0, p1, p2, p3); } // 0xA6B31A9A2BC308B5
static void PLAYSTATS_INST_MISSION_END(Any p0) { invoke<Void>(0xED5120, p0); } // 0xC11595E99C048D43
static void PLAYSTATS_HUB_EXIT(Any p0) { invoke<Void>(0xED5180, p0); } // 0x02F3C05A368B66B3
static void PLAYSTATS_INVENTORY(Any p0) { invoke<Void>(0xED5320, p0); } // 0x68F94159C38F25F8
static void _PLAYSTATS_ACID_MISSION_END(Any p0) { invoke<Void>(0xED53D0, p0); } // 0x11FD0D892567AF52
static void _PLAYSTATS_ACID_RND(Any p0) { invoke<Void>(0xED5430, p0); } // 0xCE650C981E786BEB
static void _PLAYSTATS_IDLE(Any p0, Any p1, Any p2) { invoke<Void>(0xED5500, p0, p1, p2); } // 0x410BD6C72A6CE17A
static void _PLAYSTATS_PLAYER_STYLE(Any p0) { invoke<Void>(0xED55D0, p0); } // 0x09E495BCF3E7FA74
static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0xED9170); } // 0x12C01FC00B0CBB6B
static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0xED9190, x, y, z); } // 0x6C39BDF5EA5D38FC
static BOOL NETWORK_UPDATE_LOAD_SCENE() { return invoke<BOOL>(0xED9210); } // 0xD87B2B089732DAFC
static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0xED9240); } // 0x9C71253F91C37F27
static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0xED9260, interiorID, toggle); } // 0xE3D86F90541BD5EF
static void REQUEST_MODEL(Hash model) { invoke<Void>(0xED9290, model); } // 0xEC9DAA34BBB4658C
static void REQUEST_MENU_PED_MODEL(Hash model) { invoke<Void>(0xED92A0, model); } // 0x99EE60555ADD76D0
static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xED92C0, model); } // 0x6252BC0DD8A320DB
static void REQUEST_MODELS_IN_ROOM(Interior interior, const char* roomName) { invoke<Void>(0xED9380, interior, roomName); } // 0x65694862DDC9E5D0
static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0xED9400, model); } // 0x55098D9E9AD58806
static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0xED9480, model); } // 0xE7D342E0F16AAA8F
static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0xED94F0, model); } // 0x441B9C85D0FFA9ED
static BOOL IS_MODEL_A_PED(Hash model) { return invoke<BOOL>(0xED9560, model); } // 0xBA4223DE7F0708BA
static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0xED95D0, model); } // 0xAD1840C2E6AF7D5E
static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xED9640, x, y, z); } // 0xEA2D52183C7EA9CF
static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0xED9680, model); } // 0x91AA33D82EA60124
static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xED9690, model); } // 0xB1625FCB7B6A7982
static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xED9730, x, y, z); } // 0xCAB6FA8C9D44F90A
static BOOL DOES_ANIM_DICT_EXIST(const char* animDict) { return invoke<BOOL>(0xED9770, animDict); } // 0xBBE75ED2B58BB1F7
static void REQUEST_ANIM_DICT(const char* animDict) { invoke<Void>(0xED97D0, animDict); } // 0x80813AC549A1E8AE
static BOOL HAS_ANIM_DICT_LOADED(const char* animDict) { return invoke<BOOL>(0xED97E0, animDict); } // 0xE100DD4F82A51BDE
static void REMOVE_ANIM_DICT(const char* animDict) { invoke<Void>(0xED9860, animDict); } // 0x268BE77F77533D03
static void REQUEST_ANIM_SET(const char* animSet) { invoke<Void>(0xED98E0, animSet); } // 0xA336AFF285251641
static BOOL HAS_ANIM_SET_LOADED(const char* animSet) { return invoke<BOOL>(0xED98F0, animSet); } // 0x60C643DC13B0C72B
static void REMOVE_ANIM_SET(const char* animSet) { invoke<Void>(0xED9980, animSet); } // 0x13F0C01028B5EE7C
static void REQUEST_CLIP_SET(const char* clipSet) { invoke<Void>(0xED9A10, clipSet); } // 0x73DEEAB0747FB17C
static BOOL HAS_CLIP_SET_LOADED(const char* clipSet) { return invoke<BOOL>(0xED9A20, clipSet); } // 0x8175BC6D49412468
static void REMOVE_CLIP_SET(const char* clipSet) { invoke<Void>(0xED9AB0, clipSet); } // 0x9B64A44D0B8D7CF6
static void REQUEST_IPL(const char* iplName) { invoke<Void>(0xED9B40, iplName); } // 0xECFC57F5F11BCD83
static void REMOVE_IPL(const char* iplName) { invoke<Void>(0xED9BC0, iplName); } // 0x5373E9377066509E
static BOOL IS_IPL_ACTIVE(const char* iplName) { return invoke<BOOL>(0xED9BD0, iplName); } // 0x5AEB336317DC4151
static void SET_STREAMING(BOOL toggle) { invoke<Void>(0xED9C20, toggle); } // 0x461E44FC144D65C1
static void LOAD_GLOBAL_WATER_FILE(int waterType) { invoke<Void>(0xED9C40, waterType); } // 0x548BCB9EBC09A967
static int GET_GLOBAL_WATER_FILE() { return invoke<int>(0xED9C50); } // 0x5A9ACBB54EEA813F
static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0xED9C70, toggle); } // 0xD82473EFEF7FC622
static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xED9C90, toggle); } // 0x9E635675ADA39E95
static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xED9CB0, toggle); } // 0xD81FEE0302584F60
static void SET_DITCH_POLICE_MODELS(BOOL toggle) { invoke<Void>(0xED9CD0, toggle); } // 0x3A03D0433769C629
static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0xED9CE0); } // 0x684D65D3F0BFF960
static void REQUEST_PTFX_ASSET() { invoke<Void>(0xED9D00); } // 0x8003D3C0115A1035
static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xED9D10); } // 0x6F13318788EDDAD8
static void REMOVE_PTFX_ASSET() { invoke<Void>(0xED9D30); } // 0xAE427DA16687F323
static void REQUEST_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0xED9D40, fxName); } // 0xEBEE7DC21AB44EC9
static BOOL HAS_NAMED_PTFX_ASSET_LOADED(const char* fxName) { return invoke<BOOL>(0xED9D50, fxName); } // 0x939D49C9FAA8139A
static void REMOVE_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0xED9D80, fxName); } // 0x90D778E278B533C0
static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0xED9D90, p0); } // 0x283C0970282AA5F3
static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0xED9DB0, p0); } // 0xAD9B1C8FED6B4D96
static void CLEAR_FOCUS() { invoke<Void>(0xED9DD0); } // 0xE3F88173F42C071B
static void SET_FOCUS_POS_AND_VEL(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0xED9DE0, x, y, z, offsetX, offsetY, offsetZ); } // 0x2D8D239B3F1D13F9
static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0xED9E50, entity); } // 0xD410E6FC0A0C97D2
static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0xED9ED0, entity); } // 0x4C052E5245B17920
static void SET_RESTORE_FOCUS_ENTITY(Entity p0) { invoke<Void>(0xED9F30, p0); } // 0x9E3DFB4BEB42BEDF
static void SET_MAPDATACULLBOX_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0xED9FB0, name, toggle); } // 0x8BAB92052AD69AC5
static void SET_ALL_MAPDATA_CULLED(Any p0) { invoke<Void>(0xED9FD0, p0); } // 0x8F8802BEE0727FD5
static int STREAMVOL_CREATE_SPHERE(float x, float y, float z, float rad, Any p4, Any p5) { return invoke<int>(0xED9FE0, x, y, z, rad, p4, p5); } // 0xE9D3D741E2195673
static int STREAMVOL_CREATE_FRUSTUM(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<int>(0xEDA0E0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x4F6F8824BE43F1F7
static int STREAMVOL_CREATE_LINE(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<int>(0xEDA1C0, p0, p1, p2, p3, p4, p5, p6); } // 0xDA771B84868AEA60
static void STREAMVOL_DELETE(Any unused) { invoke<Void>(0xEDA270, unused); } // 0x6C730FCE8A68AF6F
static BOOL STREAMVOL_HAS_LOADED(Any unused) { return invoke<BOOL>(0xEDA290, unused); } // 0xE945B67B28139DA2
static BOOL STREAMVOL_IS_VALID(Any unused) { return invoke<BOOL>(0xEDA2C0, unused); } // 0x5561E31B168FA823
static BOOL IS_STREAMVOL_ACTIVE() { return invoke<BOOL>(0xEDA2D0); } // 0x8240737C161141A9
static BOOL NEW_LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7) { return invoke<BOOL>(0xEDA2E0, posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7); } // 0xAC48F8E2BF2BEBF7
static BOOL NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0xEDA390, x, y, z, radius, p4); } // 0x4A3280817398D754
static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0xEDA420); } // 0x6981C3213B841071
static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0xEDA430); } // 0x787F8EE1F6FBDC6D
static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0xEDA450); } // 0x9E2D35FA908F57B4
static BOOL IS_SAFE_TO_START_PLAYER_SWITCH() { return invoke<BOOL>(0xEDA480); } // 0xB032847A7F7F0BFE
static void START_PLAYER_SWITCH(Ped from, Ped to, int flags, int switchType) { invoke<Void>(0xEDA4D0, from, to, flags, switchType); } // 0x8DD44A3F0D8EBD63
static void STOP_PLAYER_SWITCH() { invoke<Void>(0xEDA590); } // 0xF4DB2666A609235A
static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0xEDA5C0); } // 0x3555462DB47B7AB1
static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0xEDA5F0); } // 0x1403FEB4554982F8
static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xEDA600, x1, y1, z1, x2, y2, z2); } // 0xE4B27F02458924A3
static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0xEDA660); } // 0x6D231A0D52134FC1
static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0xEDA680); } // 0x1F32174C38BEB883
static void SET_PLAYER_SHORT_SWITCH_STYLE(int p0) { invoke<Void>(0xEDA6A0, p0); } // 0xEDACB682D42B6786
static int GET_PLAYER_SWITCH_JUMP_CUT_INDEX() { return invoke<int>(0xEDA6C0); } // 0x2291B8E26538A740
static void SET_PLAYER_SWITCH_OUTRO(float cameraCoordX, float cameraCoordY, float cameraCoordZ, float camRotationX, float camRotationY, float camRotationZ, float camFov, float camFarClip, int rotationOrder) { invoke<Void>(0xEDA6E0, cameraCoordX, cameraCoordY, cameraCoordZ, camRotationX, camRotationY, camRotationZ, camFov, camFarClip, rotationOrder); } // 0x6A668C52322FABB2
static void SET_PLAYER_SWITCH_ESTABLISHING_SHOT(const char* name) { invoke<Void>(0xEDA7D0, name); } // 0xC1DDC33C72C3B5A9
static void ALLOW_PLAYER_SWITCH_PAN() { invoke<Void>(0xEDA830); } // 0x546ACDD38D665C85
static void ALLOW_PLAYER_SWITCH_OUTRO() { invoke<Void>(0xEDA870); } // 0x50821CA6BB13D3E4
static void ALLOW_PLAYER_SWITCH_ASCENT() { invoke<Void>(0xEDA8B0); } // 0xBB3CF86DAAC9BAEB
static void ALLOW_PLAYER_SWITCH_DESCENT() { invoke<Void>(0xEDA8F0); } // 0x43FFAC3C360D589D
static BOOL IS_SWITCH_READY_FOR_DESCENT() { return invoke<BOOL>(0xEDA930); } // 0xB286852BCC387913
static void ENABLE_SWITCH_PAUSE_BEFORE_DESCENT() { invoke<Void>(0xEDA970); } // 0x042CE839FFCC10E9
static void DISABLE_SWITCH_OUTRO_FX() { invoke<Void>(0xEDA9B0); } // 0xE48295FCA7404802
static void SWITCH_TO_MULTI_FIRSTPART(Ped ped, int flags, int switchType) { invoke<Void>(0xEDAA00, ped, flags, switchType); } // 0x6DECE5EA21E009F8
static void SWITCH_TO_MULTI_SECONDPART(Ped ped) { invoke<Void>(0xEDAA80, ped); } // 0xB4EDA6C252467FB1
static BOOL IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED() { return invoke<BOOL>(0xEDAAE0); } // 0x846BCB82A586E3AA
static int GET_PLAYER_SWITCH_INTERP_OUT_DURATION() { return invoke<int>(0xEDAB00); } // 0x3F331BE6EB7BAC07
static int GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() { return invoke<int>(0xEDAB20); } // 0xED93D3690FF8AF5F
static BOOL IS_SWITCH_SKIPPING_DESCENT() { return invoke<BOOL>(0xEDAB60); } // 0xE386B6872B2E38EF
static void SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME() { invoke<Void>(0xEDABA0); } // 0x3E09769A87E0D881
static float GET_LODSCALE() { return invoke<float>(0xEDABB0); } // 0xD173C7695174C519
static void OVERRIDE_LODSCALE_THIS_FRAME(float scaling) { invoke<Void>(0xEDABD0, scaling); } // 0xF8A2800C0B863DB1
static void REMAP_LODSCALE_RANGE_THIS_FRAME(float p0, float p1, float p2, float p3) { invoke<Void>(0xEDABF0, p0, p1, p2, p3); } // 0x9091BFD6A05E20ED
static void SUPPRESS_HD_MAP_STREAMING_THIS_FRAME() { invoke<Void>(0xEDAC20); } // 0xCA2E379E3CAB622F
static void SET_RENDER_HD_ONLY(BOOL toggle) { invoke<Void>(0xEDAC30, toggle); } // 0x030379A8083CE8F9
static void FORCE_ALLOW_TIME_BASED_FADING_THIS_FRAME() { invoke<Void>(0xEDAC70); } // 0xC31FD6E2FE1930B9
static void IPL_GROUP_SWAP_START(const char* iplName1, const char* iplName2) { invoke<Void>(0xEDAC80, iplName1, iplName2); } // 0x9D8913BC7BA1265D
static void IPL_GROUP_SWAP_CANCEL() { invoke<Void>(0xEDAC90); } // 0xF9B380FD07A8B67E
static BOOL IPL_GROUP_SWAP_IS_READY() { return invoke<BOOL>(0xEDACB0); } // 0xE2B94989E87636A6
static void IPL_GROUP_SWAP_FINISH() { invoke<Void>(0xEDACE0); } // 0x32BBBA949DBE76E8
static BOOL IPL_GROUP_SWAP_IS_ACTIVE() { return invoke<BOOL>(0xEDAD00); } // 0x808A7B80951975C3
static void PREFETCH_SRL(const char* srl) { invoke<Void>(0xEDAD20, srl); } // 0xADF8AA2F22A19163
static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xEDAD40); } // 0xEBCB9138B2CABF20
static void BEGIN_SRL() { invoke<Void>(0xEDAD70); } // 0x89EAF23AE72CD8A8
static void END_SRL() { invoke<Void>(0xEDAD80); } // 0xE9DE8F39ED85311E
static void SET_SRL_TIME(float p0) { invoke<Void>(0xEDAD90, p0); } // 0x4B1F30FB3C9A4B7F
static void SET_SRL_POST_CUTSCENE_CAMERA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEDADB0, p0, p1, p2, p3, p4, p5); } // 0xEB6D4B648B4DD588
static void SET_SRL_READAHEAD_TIMES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xEDAE00, p0, p1, p2, p3); } // 0x216049890A2D1EC6
static void SET_SRL_LONG_JUMP_MODE(BOOL p0) { invoke<Void>(0xEDAE20, p0); } // 0x6BD0E2C3AF4FF666
static void SET_SRL_FORCE_PRESTREAM(Any p0) { invoke<Void>(0xEDAE40, p0); } // 0x78081733656ABA54
static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<Void>(0xEDAE60, x, y, z, radius); } // 0x34ABC7A6F0629903
static void CLEAR_HD_AREA() { invoke<Void>(0xEDAEB0); } // 0x6C086599D0704F9E
static void INIT_CREATOR_BUDGET() { invoke<Void>(0xEDAEC0); } // 0x9FF2DDC6AA093A2E
static void SHUTDOWN_CREATOR_BUDGET() { invoke<Void>(0xEDAED0); } // 0xA0511280CE71369E
static BOOL ADD_MODEL_TO_CREATOR_BUDGET(Hash modelHash) { return invoke<BOOL>(0xEDAEE0, modelHash); } // 0xFF795413579DFDC5
static void REMOVE_MODEL_FROM_CREATOR_BUDGET(Hash modelHash) { invoke<Void>(0xEDAF90, modelHash); } // 0x030B10A00315BA0C
static float GET_USED_CREATOR_BUDGET() { return invoke<float>(0xEDB030); } // 0x77B41E941C2D2D17
static void SET_ISLAND_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0xEDB100, name, toggle); } // 0x105F8712C3E145BF
static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0xEF1EE0, ped, ms); } // 0x5524CAF18378DF39
static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0xEF1F50, ped, time); } // 0x0FD8B5F4BB15CD71
static void TASK_JUMP(Ped ped, BOOL usePlayerLaunchForce, BOOL doSuperJump, BOOL useFullSuperJumpForce) { invoke<Void>(0xEF1FE0, ped, usePlayerLaunchForce, doSuperJump, useFullSuperJumpForce); } // 0xC3EBEA7530D64F53
static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0xEF2060, ped, duration); } // 0xAFC7A89C990C4339
static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int timeToFacePed, int flags) { invoke<Void>(0xEF20E0, ped, duration, facingPed, timeToFacePed, flags); } // 0x0B1A40D00F279307
static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0xEF21B0, ped, duration); } // 0xAD548E64669C4255
static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int seat, float speed) { invoke<Void>(0xEF2210, ped, vehicle, timeOut, seat, speed); } // 0xFECF11FFA163942B
static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, const char* overrideEntryClipsetName) { invoke<Void>(0xEF2230, ped, vehicle, timeout, seat, speed, flag, overrideEntryClipsetName); } // 0xEBA229B2E0BB05E0
static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0xEF2260, ped, vehicle, flags); } // 0x23EB5FC236231892
static void TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { invoke<Void>(0xEF2280, ped, boat); } // 0x693BCB64E0E60254
static void TASK_SKY_DIVE(Ped ped, BOOL instant) { invoke<Void>(0xEF2300, ped, instant); } // 0xF9185EBA84883764
static void TASK_PARACHUTE(Ped ped, BOOL giveParachuteItem, BOOL instant) { invoke<Void>(0xEF2320, ped, giveParachuteItem, instant); } // 0x2A82E9CBC48CF2F8
static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xEF23A0, ped, x, y, z); } // 0xD62DC69EB22834CE
static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xEF2430, ped, x, y, z); } // 0x83834BBDF7CA6EC7
static void SET_PARACHUTE_TASK_THRUST(Ped ped, float thrust) { invoke<Void>(0xEF24B0, ped, thrust); } // 0xA81F12900F3749B3
static void TASK_RAPPEL_FROM_HELI(Ped ped, float minHeightAboveGround) { invoke<Void>(0xEF2520, ped, minHeightAboveGround); } // 0xC52B4FFE6114ED5E
static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float straightLineDistance) { invoke<Void>(0xEF25A0, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, straightLineDistance); } // 0xCF6CC9EA0D2EFE23
static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0xEF2620, ped, vehicle, x, y, z, speed, driveMode, stopRange); } // 0x6C33493626F3C0D1
static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0xEF2640, ped, vehicle, speed, drivingStyle); } // 0x7C8E9DE09D4AD3FF
static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { invoke<Void>(0xEF2710, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); } // 0x329B82704ED2A3E3
static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0xEF2740, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); } // 0x63C8DCBEC1CF8225
static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped ped, Entity entity, float x, float y, float z, float moveBlendRatio, int time) { invoke<Void>(0xEF2770, ped, entity, x, y, z, moveBlendRatio, time); } // 0x3713EFBC9B9F5150
static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0xEF2790, ped, heading, timeout); } // 0x2280392018BC0DD3
static void TASK_FLUSH_ROUTE() { invoke<Void>(0xEF27B0); } // 0x076FB64D39D380B3
static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0xEF27C0, x, y, z); } // 0x8B59380D9D15EBCD
static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int mode) { invoke<Void>(0xEF2800, ped, speed, mode); } // 0xCEF5F1212D833FEF
static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float moveBlendRatio, float slowDownDistance, int flags) { invoke<Void>(0xEF2820, entity, target, duration, distance, moveBlendRatio, slowDownDistance, flags); } // 0xAB3658A740EED98E
static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL preferPavements, BOOL quitIfOutOfRange) { invoke<Void>(0xEF2850, ped, x, y, z, distance, time, preferPavements, quitIfOutOfRange); } // 0xFD251F92B546F389
static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float safeDistance, int fleeTime, BOOL preferPavements, BOOL updateToNearestHatedPed) { invoke<Void>(0xEF2880, ped, fleeTarget, safeDistance, fleeTime, preferPavements, updateToNearestHatedPed); } // 0xD844F5E50DAB6FF7
static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0xEF28B0, ped, fleeTarget); } // 0x3EE6720350A31CAB
static void TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle) { invoke<Void>(0xEF28C0, ped, eventHandle); } // 0xDBFFE049CC0EA5E0
static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { invoke<Void>(0xEF28D0, ped, x, y, z, radius, minimalLength, timeBetweenWalks); } // 0xE092C8C5A5EA5F57
static void TASK_WANDER_STANDARD(Ped ped, float heading, int flags) { invoke<Void>(0xEF29E0, ped, heading, flags); } // 0x761F56E633460973
static void TASK_WANDER_SPECIFIC(Ped ped, const char* conditionalAnimGroupStr, const char* conditionalAnimStr, float heading) { invoke<Void>(0xEF2A00, ped, conditionalAnimGroupStr, conditionalAnimStr, heading); } // 0xFDBB3471DA96A6F4
static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0xEF2A20, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); } // 0x2D864CC37DDFA963
static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash stealthKillActionResultHash, float desiredMoveBlendRatio, int stealthFlags) { invoke<Void>(0xEF2A50, killer, target, stealthKillActionResultHash, desiredMoveBlendRatio, stealthFlags); } // 0x29EE4DD912B2F524
static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0xEF2A70, ped, x, y, z, heading); } // 0x0A15E9E221AF6CC4
static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float targetHeading) { invoke<Void>(0xEF2AB0, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, targetHeading); } // 0xA966E518B752B92A
static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float slideToCoordHeading, float maxSlopeNavigable, float clampMaxSearchDistance, float targetHeading) { invoke<Void>(0xEDE430, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, slideToCoordHeading, maxSlopeNavigable, clampMaxSearchDistance, targetHeading); } // 0x505D1BE21E9DF7E0
static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0xEF2AE0, ped, Toggle); } // 0x176A19E4589CC2C6
static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0xEF2B40, ped, Toggle); } // 0xDAB3EED1D80C2712
static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0xEF2BA0, ped, Toggle); } // 0x828D385CED572E95
static void SET_PED_PATH_CLIMB_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0xEF2C00, ped, modifier); } // 0x1DEB47A41CF1C17E
static void SET_PED_PATH_MAY_ENTER_WATER(Ped ped, BOOL mayEnterWater) { invoke<Void>(0xEF2C70, ped, mayEnterWater); } // 0x753DE44F9049D173
static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) { invoke<Void>(0xEF2CD0, ped, avoidWater); } // 0xF24ADF73381B85C1
static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { invoke<Void>(0xEF2D30, ped, avoidFire); } // 0x5514EB508DD5A132
static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0xEF2D90, height); } // 0x78081A114400EA30
static int GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, float* distanceRemaining, BOOL* isPathReady) { return invoke<int>(0xEF2DC0, ped, distanceRemaining, isPathReady); } // 0x32ABB6392C917150
static int GET_NAVMESH_ROUTE_RESULT(Ped ped) { return invoke<int>(0xEF2EA0, ped); } // 0x604F9A1C471B5137
static BOOL IS_CONTROLLED_VEHICLE_UNABLE_TO_GET_TO_ROAD(Ped ped) { return invoke<BOOL>(0xEF2EC0, ped); } // 0x19B15B2D6C049166
static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets) { invoke<Void>(0xEF2F40, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets); } // 0x30FAA55EAF29F9BE
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float warpTimerMS) { invoke<Void>(0xEF2F70, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, warpTimerMS); } // 0xE4250AD3565B478E
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float cruiseSpeed, float targetArriveDist) { invoke<Void>(0xEF2FB0, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, cruiseSpeed, targetArriveDist); } // 0x8B561CAF821BBFCE
static void TASK_PLAY_ANIM(Ped ped, const char* animDictionary, const char* animationName, float blendInSpeed, float blendOutSpeed, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0xEF3000, ped, animDictionary, animationName, blendInSpeed, blendOutSpeed, duration, flag, playbackRate, lockX, lockY, lockZ); } // 0x10425721983AE158
static void TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float animEnterSpeed, float animExitSpeed, int duration, Any flag, float animTime, int rotOrder, int ikFlags) { invoke<Void>(0xEF3090, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, animEnterSpeed, animExitSpeed, duration, flag, animTime, rotOrder, ikFlags); } // 0x9F5225AA1E102B7A
static void STOP_ANIM_TASK(Entity entity, const char* animDictionary, const char* animationName, float blendDelta) { invoke<Void>(0xEF3180, entity, animDictionary, animationName, blendDelta); } // 0x08D8528BA8E43641
static void TASK_SCRIPTED_ANIMATION(Ped ped, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0xEF31A0, ped, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); } // 0x70BCE9B2354D8E3D
static void PLAY_ENTITY_SCRIPTED_ANIM(Entity entity, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0xEF31D0, entity, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); } // 0x24E88846ADF60E68
static void STOP_ANIM_PLAYBACK(Entity entity, int priority, BOOL secondary) { invoke<Void>(0xEF3200, entity, priority, secondary); } // 0xE1C7B23ECC5080B5
static void SET_ANIM_WEIGHT(Entity entity, float weight, int priority, int index, BOOL secondary) { invoke<Void>(0xEF32A0, entity, weight, priority, index, secondary); } // 0xD395C44C3F7C3BB4
static void SET_ANIM_PHASE(Entity entity, float phase, int priority, BOOL secondary) { invoke<Void>(0xEF32C0, entity, phase, priority, secondary); } // 0x8EF3D1BEA34BCB15
static void SET_ANIM_RATE(Entity entity, float rate, int priority, BOOL secondary) { invoke<Void>(0xEF3370, entity, rate, priority, secondary); } // 0x5D15315EA989E69A
static void SET_ANIM_LOOPED(Entity entity, BOOL looped, int priority, BOOL secondary) { invoke<Void>(0xEF3420, entity, looped, priority, secondary); } // 0x5EFA80915529F5C1
static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped ped, const char* animDict, const char* animation, const char* boneMaskType, float blendInDuration, float blendOutDuration, BOOL isLooping, BOOL holdLastFrame) { invoke<Void>(0xEF3450, ped, animDict, animation, boneMaskType, blendInDuration, blendOutDuration, isLooping, holdLastFrame); } // 0xF6ED7D9DE21CF122
static void TASK_STOP_PHONE_GESTURE_ANIMATION(Ped ped, float blendOutOverride) { invoke<Void>(0xEF3490, ped, blendOutOverride); } // 0x0A284376577BBECE
static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0xEF3510, ped); } // 0x5BBE12D14B71C12A
static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Ped ped) { return invoke<float>(0xEF35A0, ped); } // 0x51495BC78F70B066
static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Ped ped) { return invoke<float>(0xEF3640, ped); } // 0x7B426C13A6E40397
static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, const char* animationSet, const char* animationName) { invoke<Void>(0xEF36E0, vehicle, animationSet, animationName); } // 0x3D98759970C5FCC9
static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, int duration, int flags, int priority) { invoke<Void>(0xEF3700, entity, x, y, z, duration, flags, priority); } // 0xE237FA90A8AFEE59
static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int flags, int priority) { invoke<Void>(0xEF3720, ped, lookAt, duration, flags, priority); } // 0xE67051907958B5EB
static void TASK_CLEAR_LOOK_AT(Ped ped) { invoke<Void>(0xEF3740, ped); } // 0x84B06A81C98DA4B8
static void OPEN_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xEF3750, taskSequenceId); } // 0xB5396F1FB088FE38
static void CLOSE_SEQUENCE_TASK(int taskSequenceId) { invoke<Void>(0xEF37C0, taskSequenceId); } // 0x93C0674FC00824D0
static void TASK_PERFORM_SEQUENCE(Ped ped, int taskSequenceId) { invoke<Void>(0xEF3810, ped, taskSequenceId); } // 0x4BD42B0527065BB6
static void TASK_PERFORM_SEQUENCE_LOCALLY(Ped ped, int taskSequenceId) { invoke<Void>(0xEF3820, ped, taskSequenceId); } // 0x9C4B07B40A05D45D
static void CLEAR_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xEF3830, taskSequenceId); } // 0xD0557B139A542F12
static void SET_SEQUENCE_TO_REPEAT(int taskSequenceId, BOOL repeat) { invoke<Void>(0xEF3870, taskSequenceId, repeat); } // 0xC58DD79B4CA8487F
static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0xEF3940, ped); } // 0x89EC60A4485FD199
static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskIndex) { return invoke<BOOL>(0xEF3960, ped, taskIndex); } // 0x12623527E5B8AB7C
static int GET_SCRIPT_TASK_STATUS(Ped ped, Hash taskHash) { return invoke<int>(0xEF3A00, ped, taskHash); } // 0x9B5C1660CCDF7189
static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehicle) { return invoke<int>(0xEF3A70, vehicle); } // 0x927395DFE42BE071
static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int delayTime, int flags) { invoke<Void>(0xEF3A90, ped, delayTime, flags); } // 0x092B9247AF00F5CF
static void TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL disableBlockingClip, BOOL instantBlendToAim) { invoke<Void>(0xEF3AB0, ped, scriptTask, disableBlockingClip, instantBlendToAim); } // 0x67F37AE193B6C0E0
static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Ped ped, Ped target, float x, float y, float z, int gunTaskType, BOOL disableBlockingClip, BOOL forceAim) { invoke<Void>(0xEF3AE0, ped, target, x, y, z, gunTaskType, disableBlockingClip, forceAim); } // 0x948C59076639BD77
static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped ped, Ped target, float x, float y, float z, BOOL disableBlockingClip) { invoke<Void>(0xEF3B10, ped, target, x, y, z, disableBlockingClip); } // 0x287D43AF8CDBA667
static const char* GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int gunTaskType) { return invoke<const char*>(0xEF3B30, gunTaskType); } // 0x71929CB75E82CF02
static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL instantBlendToAim) { invoke<Void>(0xEF3B70, ped, entity, duration, instantBlendToAim); } // 0x646DE293036A3499
static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0xEF3B90, ped, entity, duration); } // 0x0E95B96CFEFE7B61
static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL instantBlendToAim, BOOL playAnimIntro) { invoke<Void>(0xEF3BB0, ped, x, y, z, time, instantBlendToAim, playAnimIntro); } // 0xC86A930D894F8CE2
static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0xEF3BE0, ped, x, y, z, duration, firingPattern); } // 0x6C4E9ADFB1521AAC
static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle, BOOL useAlternateShuffle) { invoke<Void>(0xEF3C00, ped, vehicle, useAlternateShuffle); } // 0x7A55A25242FBE562
static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0xEF3C20, ped); } // 0x974022927CB47E68
static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xEF3CA0, ped); } // 0xBEB96F1A510EE9AA
static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { invoke<Void>(0xEF3D30, vehicle); } // 0xD5094C4B174E9016
static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Entity entity, int time, float seekRadius, float seekAngleDeg, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0xEF3D40, ped, entity, time, seekRadius, seekAngleDeg, moveBlendRatio, gotoEntityOffsetFlags); } // 0xF3812FC874B9C273
static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float targetRadius, float offsetX, float offsetY, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0xEF3D70, ped, entity, duration, targetRadius, offsetX, offsetY, moveBlendRatio, gotoEntityOffsetFlags); } // 0x35CBF41D628A3871
static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0xEF3DA0, ped, x, y, z, duration); } // 0xCD76801E1106CABE
static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0xEF3E90, driver, vehicle, action, time); } // 0xFCCE667AD0E974AD
static void TASK_VEHICLE_MISSION(Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xEF3EB0, driver, vehicle, vehicleTarget, missionType, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); } // 0xB3DA477F44309390
static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int missionType, float maxSpeed, int drivingStyle, float minDistance, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xEF3F00, ped, vehicle, pedTarget, missionType, maxSpeed, drivingStyle, minDistance, straightLineDistance, DriveAgainstTraffic); } // 0x13DE13EA38996410
static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int mission, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xEF3F40, ped, vehicle, x, y, z, mission, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); } // 0x30CCF17FEE4BDA53
static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int minHeightAboveTerrain, float noRoadsDistance) { invoke<Void>(0xEF3FD0, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, minHeightAboveTerrain, noRoadsDistance); } // 0x6AA87C4ADF4A6BFF
static void TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, float speed, int drivingStyle, int minDistance) { invoke<Void>(0xEF4000, driver, vehicle, targetEntity, speed, drivingStyle, minDistance); } // 0x1114FB0D0DF739D0
static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0xEF4020, driver, targetEnt); } // 0xBCDC8EFDC767C85B
static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int drivingFlags, float radius, int altitude, int heliFlags) { invoke<Void>(0xEF4030, pilot, vehicle, entityToFollow, targetSpeed, drivingFlags, radius, altitude, heliFlags); } // 0xE4B10D5B4C7A3BEB
static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0xEF4060, ped, flag, set); } // 0x5D374B426098D36A
static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) { invoke<Void>(0xEF40F0, ped, distance); } // 0x7F9BCC1F05831CC1
static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xEF4160, pilot, entityToFollow, x, y, z); } // 0xBAA88971DB28023A
static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xEF4180, pilot, entityToFollow, x, y, z); } // 0x6793968E12D821E5
static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0xEF41A0, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); } // 0x6F09ACD24CD7E2D1
static void CLEAR_DEFAULT_PRIMARY_TASK(Ped ped) { invoke<Void>(0xEF41C0, ped); } // 0xDF671228EB81F6F6
static void CLEAR_PRIMARY_VEHICLE_TASK(Vehicle vehicle) { invoke<Void>(0xEF4240, vehicle); } // 0xBCF5323C85E59066
static void CLEAR_VEHICLE_CRASH_TASK(Vehicle vehicle) { invoke<Void>(0xEF42A0, vehicle); } // 0xE61DA9B9D8DB2035
static void TASK_PLANE_GOTO_PRECISE_VTOL(Ped ped, Vehicle vehicle, float x, float y, float z, int flightHeight, int minHeightAboveTerrain, BOOL useDesiredOrientation, float desiredOrientation, BOOL autopilot) { invoke<Void>(0xEF4300, ped, vehicle, x, y, z, flightHeight, minHeightAboveTerrain, useDesiredOrientation, desiredOrientation, autopilot); } // 0xF9B70B973193533C
static void TASK_SUBMARINE_GOTO_AND_STOP(Ped ped, Vehicle submarine, float x, float y, float z, BOOL autopilot) { invoke<Void>(0xEF4350, ped, submarine, x, y, z, autopilot); } // 0x790442D9A27FBFC1
static void TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float radius, float targetHeading, int maxHeight, int minHeight, float slowDownDistance, int behaviorFlags) { invoke<Void>(0xEF4370, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, radius, targetHeading, maxHeight, minHeight, slowDownDistance, behaviorFlags); } // 0xDAC27BA46D21818F
static void TASK_HELI_ESCORT_HELI(Ped pilot, Vehicle heli1, Vehicle heli2, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0xEF43D0, pilot, heli1, heli2, offsetX, offsetY, offsetZ); } // 0xDEA77F41BAFD4054
static void TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float targetReached, float targetHeading, float maxZ, float minZ, BOOL precise) { invoke<Void>(0xEF43F0, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, angularDrag, targetReached, targetHeading, maxZ, minZ, precise); } // 0x8737E7B1F3150A9F
static void TASK_PLANE_TAXI(Ped pilot, Vehicle aircraft, float x, float y, float z, float cruiseSpeed, float targetReached) { invoke<Void>(0xEF4450, pilot, aircraft, x, y, z, cruiseSpeed, targetReached); } // 0xD3EF88657552E38E
static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle vehicle, Vehicle targetVehicle, Ped targetPed, float x, float y, float z, int mission, float maxSpeed, int drivingStyle, float targetReached, Any boatFlags) { invoke<Void>(0xEF4470, pedDriver, vehicle, targetVehicle, targetPed, x, y, z, mission, maxSpeed, drivingStyle, targetReached, boatFlags); } // 0xDD216642D7E1AD6B
static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL pushUnderneathDrivingTaskIfDriving, Hash firingPattern) { invoke<Void>(0xEF44C0, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, pushUnderneathDrivingTaskIfDriving, firingPattern); } // 0xD83588CA24829967
static void SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0xEF4500, shootingPed, targetPed, targetVehicle, x, y, z); } // 0xF38F1E299109383A
static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0xEF4520, ped); } // 0x827783BAD5CBE95D
static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xEF45B0, ped); } // 0x10BAD2FED582B598
static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0xEF4640, ped); } // 0x54E6D48F5FEEC68E
static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z, int taskMode, BOOL ignoreTargetVehDeadCheck) { invoke<Void>(0xEF46E0, shootingPed, targetPed, targetVehicle, x, y, z, taskMode, ignoreTargetVehDeadCheck); } // 0x26CC8B808F859C87
static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xEF4710, ped); } // 0x5652C0D8FC728983
static void TASK_USE_MOBILE_PHONE(Ped ped, BOOL usePhone, int desiredPhoneMode) { invoke<Void>(0xEF4780, ped, usePhone, desiredPhoneMode); } // 0x0974B2530CABDF56
static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0xEF47A0, ped, duration); } // 0xE69B8FE2F4FD0178
static void TASK_CHAT_TO_PED(Ped ped, Ped target, int flags, float goToLocationX, float goToLocationY, float goToLocationZ, float headingDegs, float idleTime) { invoke<Void>(0xEF47B0, ped, target, flags, goToLocationX, goToLocationY, goToLocationZ, headingDegs, idleTime); } // 0x4663BE37E4E93BC6
static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0xEF47D0, ped, vehicle, seat); } // 0x6CB88242CC3DA778
static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0xEF47F0, entity, target, duration, firingPattern); } // 0xE84EF4129A44CCA3
static void TASK_CLIMB(Ped ped, BOOL usePlayerLaunchForce) { invoke<Void>(0xEF4810, ped, usePlayerLaunchForce); } // 0x345C12E1D643634F
static void TASK_CLIMB_LADDER(Ped ped, BOOL fast) { invoke<Void>(0xEF4870, ped, fast); } // 0x52210330D36ACD48
static void TASK_RAPPEL_DOWN_WALL_USING_CLIPSET_OVERRIDE(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, float minZ, int ropeHandle, const char* clipSet, Any p10) { invoke<Void>(0xEF48E0, ped, x1, y1, z1, x2, y2, z2, minZ, ropeHandle, clipSet, p10); } // 0x82F4A39274853E9D
static int GET_TASK_RAPPEL_DOWN_WALL_STATE(Ped ped) { return invoke<int>(0xEF4910, ped); } // 0x29643B8A675F8422
static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0xEF49D0, ped); } // 0x19626F992DC71FB9
static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, int taskIndex, int progress1, int progress2) { invoke<Void>(0xEF49E0, ped, taskIndex, progress1, progress2); } // 0xDB27D5D6C78A71BD
static void SET_NEXT_DESIRED_MOVE_STATE(float nextMoveState) { invoke<Void>(0xEF4A00, nextMoveState); } // 0x3CB52882A241CEA1
static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float newMoveBlendRatio) { invoke<Void>(0xEF4A10, ped, newMoveBlendRatio); } // 0xA6897CC743103C98
static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0xEF4A20, ped); } // 0x864E9BBAA7BFA064
static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0xEF4A70, ped, target, distanceToStopAt, StartAimingDist); } // 0xA1EF3D61667DA3F4
static void TASK_SET_DECISION_MAKER(Ped ped, Hash decisionMakerId) { invoke<Void>(0xEF4B20, ped, decisionMakerId); } // 0x4A01AD13AAA82768
static void TASK_SET_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius) { invoke<Void>(0xEF4B30, ped, x, y, z, radius); } // 0xD5A6D66C06D8ADB4
static void TASK_CLEAR_DEFENSIVE_AREA(Ped ped) { invoke<Void>(0xEF4B50, ped); } // 0x16C7AB5DAFB71459
static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float speed) { invoke<Void>(0xEF4B60, ped, x, y, z, heading, speed); } // 0x807D24321098A1C7
static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float speed, float headingChangeRate) { invoke<Void>(0xEF4B80, ped, x, y, z, heading, speed, headingChangeRate); } // 0xDC90C3410FA6A9F1
static ScrHandle ADD_COVER_POINT(float x, float y, float z, float direction, int usage, int height, int arc, BOOL isPriority) { return invoke<ScrHandle>(0xEF4BA0, x, y, z, direction, usage, height, arc, isPriority); } // 0xBE006B266746B58A
static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0xEF4C50, coverpoint); } // 0x2115305B42B198D2
static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0xEF4C90, x, y, z); } // 0xB4AC30A54094D002
static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0xEF4D20, coverpoint); } // 0x8E8BD1A76D6D9230
static void ADD_SCRIPTED_COVER_AREA(float x, float y, float z, float radius) { invoke<Void>(0xEF4DF0, x, y, z, radius); } // 0x4CF9046448DA511B
static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int combatFlags, int threatResponseFlags) { invoke<Void>(0xEF4EB0, ped, targetPed, combatFlags, threatResponseFlags); } // 0x62A5310368A20EFA
static void TASK_COMBAT_PED_TIMED(Ped ped, Ped target, int time, int flags) { invoke<Void>(0xEF4ED0, ped, target, time, flags); } // 0xC22FB64C71A7CD89
static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0xEF4EF0, ped, x, y, z, duration, allowPeekingAndFiring); } // 0xE31B7CB52E42E2B6
static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0xEF4F10, ped, target, duration, allowPeekingAndFiring); } // 0x3D948B91131AF671
static void TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, ScrHandle coverpoint, float x, float y, float z, int time, BOOL allowPeekingAndFiring) { invoke<Void>(0xEF4F30, ped, coverpoint, x, y, z, time, allowPeekingAndFiring); } // 0xEC4B308C708928CD
static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int timeout, BOOL shortRoute) { invoke<Void>(0xEF4F50, ped, x1, y1, z1, x2, y2, z2, timeout, shortRoute); } // 0xF8936AB29F37B33B
static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, int time, BOOL allowPeekingAndFiring, float blendInDuration, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier, BOOL doEntry) { invoke<Void>(0xEF4F80, ped, x, y, z, time, allowPeekingAndFiring, blendInDuration, forceInitialFacingDirection, forceFaceLeft, identifier, doEntry); } // 0x994B4C04761C0AA0
static void TASK_WARP_PED_DIRECTLY_INTO_COVER(Ped ped, int time, BOOL allowPeekingAndFiring, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier) { invoke<Void>(0xEF5090, ped, time, allowPeekingAndFiring, forceInitialFacingDirection, forceFaceLeft, identifier); } // 0x0049FC50A5D65452
static void TASK_EXIT_COVER(Ped ped, int exitType, float x, float y, float z) { invoke<Void>(0xEF50D0, ped, exitType, x, y, z); } // 0x03BD287EC78FB55F
static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float blendInDuration, float timeInMelee, float strafePhaseSync, int aiCombatFlags) { invoke<Void>(0xEF50F0, ped, meleeTarget, blendInDuration, timeInMelee, strafePhaseSync, aiCombatFlags); } // 0x849ABF0CBD8EE0D6
static void TASK_TOGGLE_DUCK(Ped ped, int toggleType) { invoke<Void>(0xEF5110, ped, toggleType); } // 0x613C57A8216F81FC
static void TASK_GUARD_CURRENT_POSITION(Ped ped, float maxPatrolProximity, float defensiveAreaRadius, BOOL setDefensiveArea) { invoke<Void>(0xEF51A0, ped, maxPatrolProximity, defensiveAreaRadius, setDefensiveArea); } // 0xAEFEF83576CF9532
static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float heading, float maxPatrolProximity, int timer) { invoke<Void>(0xEF51C0, ped, x, y, z, heading, maxPatrolProximity, timer); } // 0x2CFEEE8E3E154877
static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped ped, float defendPositionX, float defendPositionY, float defendPositionZ, float heading, float maxPatrolProximity, int time, float x, float y, float z, float defensiveAreaRadius) { invoke<Void>(0xEF51E0, ped, defendPositionX, defendPositionY, defendPositionZ, heading, maxPatrolProximity, time, x, y, z, defensiveAreaRadius); } // 0x9B1FD51B92E0C07E
static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, const char* scenarioName) { invoke<Void>(0xEF5210, ped, x, y, z, heading, scenarioName); } // 0xDEA4D02E8F52CE87
static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0xEF5230, driver, cruiseSpeed); } // 0x553B31859911EC59
static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped ped, float speed) { invoke<Void>(0xEF5240, ped, speed); } // 0x24B82F8CB7F8A3E5
static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0xEF5260, ped, drivingStyle); } // 0x413BDD7A1192FC87
static void ADD_COVER_BLOCKING_AREA(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0xEF52F0, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); } // 0xCA32E959324DBA6C
static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0xEF53A0); } // 0xB1EEA6106C0A95F5
static void REMOVE_COVER_BLOCKING_AREAS_AT_POSITION(float x, float y, float z) { invoke<Void>(0xEF53C0, x, y, z); } // 0x71CFAA5488AD3649
static void REMOVE_SPECIFIC_COVER_BLOCKING_AREAS(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0xEF5420, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); } // 0x1323CB5E215AACEC
static void TASK_START_SCENARIO_IN_PLACE(Ped ped, const char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0xEF54D0, ped, scenarioName, unkDelay, playEnterAnim); } // 0x21B9EFA4B4AA3A5B
static void TASK_START_SCENARIO_AT_POSITION(Ped ped, const char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) { invoke<Void>(0xEF54F0, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); } // 0x634E47EF112F3802
static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) { invoke<Void>(0xEF5530, ped, x, y, z, distance, duration); } // 0xFC8E18D52935E5EB
static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0xEF55E0, ped, x, y, z, radius, timeToLeave); } // 0xCDA51E8BE6E5790A
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped ped, float x, float y, float z, float maxRange, int timeToLeave) { invoke<Void>(0xEF5690, ped, x, y, z, maxRange, timeToLeave); } // 0xB50A89E4C8C2A37C
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0xEF56B0, ped, x, y, z, radius, timeToLeave); } // 0x449C7EE823FE407B
static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL mustBeFree) { return invoke<BOOL>(0xEF56D0, x, y, z, radius, mustBeFree); } // 0x81E5E9AE1379B068
static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float x, float y, float z, const char* scenarioName, float radius, BOOL mustBeFree) { return invoke<BOOL>(0xEF5770, x, y, z, scenarioName, radius, mustBeFree); } // 0x813D79A654EE13DA
static BOOL IS_SCENARIO_OCCUPIED(float x, float y, float z, float maxRange, BOOL onlyUsersActuallyAtScenario) { return invoke<BOOL>(0xEF5830, x, y, z, maxRange, onlyUsersActuallyAtScenario); } // 0x9C8348AB222FEBA3
static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0xEF5860, ped); } // 0x1FF4AE189014B73E
static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, const char* animDict, const char* animName) { invoke<Void>(0xEF58C0, ped, animDict, animName); } // 0x3BD18E9EF59645CF
static BOOL DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) { return invoke<BOOL>(0xEF58E0, scenarioGroup); } // 0xA2FEC91FCC08673E
static BOOL IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) { return invoke<BOOL>(0xEF5960, scenarioGroup); } // 0x03F4074C23C3682E
static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL enabled) { invoke<Void>(0xEF5A00, scenarioGroup, enabled); } // 0x7DA9B8DF3A97D040
static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xEF5A90); } // 0xDFBE573FB949C828
static void SET_EXCLUSIVE_SCENARIO_GROUP(const char* scenarioGroup) { invoke<Void>(0xEF5AA0, scenarioGroup); } // 0xDD0315A8F8B31039
static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0xEF5B20); } // 0x3966463F3674C7D5
static BOOL IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) { return invoke<BOOL>(0xEF5B40, scenarioType); } // 0x6964489BB575FE9D
static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) { invoke<Void>(0xEF5BD0, scenarioType, toggle); } // 0x470041F66BF345BA
static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0xEF5C60); } // 0xED8A3DF1DC96764E
static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xEF5C70, ped); } // 0x55057693AB7FCFF9
static BOOL IS_PED_PLAYING_BASE_CLIP_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xEF5CF0, ped); } // 0x79D8334A10A1DB2E
static void SET_PED_CAN_PLAY_AMBIENT_IDLES(Ped ped, BOOL blockIdleClips, BOOL removeIdleClipIfPlaying) { invoke<Void>(0xEF5D20, ped, blockIdleClips, removeIdleClipIfPlaying); } // 0x2A89ED7D4265A941
static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, int combatFlags) { invoke<Void>(0xEF5DA0, ped, x, y, z, radius, combatFlags); } // 0x6D81908BD7709ABC
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int combatFlags) { invoke<Void>(0xEF5EA0, ped, radius, combatFlags); } // 0xF6CC23160DD0AAED
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, int time, int combatFlags) { invoke<Void>(0xEF5F90, ped, radius, time, combatFlags); } // 0x1D006DA9CB2B79B2
static void TASK_THROW_PROJECTILE(Ped ped, float x, float y, float z, int ignoreCollisionEntityIndex, BOOL createInvincibleProjectile) { invoke<Void>(0xEF6090, ped, x, y, z, ignoreCollisionEntityIndex, createInvincibleProjectile); } // 0x1BFCFCC8F6D798A6
static void TASK_SWAP_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0xEF60B0, ped, drawWeapon); } // 0x71A3A3C67C692798
static void TASK_RELOAD_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0xEF6130, ped, drawWeapon); } // 0x550B03C7904C63CD
static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0xEF6150, ped); } // 0x0B3FC0E7676E79BF
static void TASK_WRITHE(Ped ped, Ped target, int minFireLoops, int startState, BOOL forceShootOnGround, int shootFromGroundTimer) { invoke<Void>(0xEF61B0, ped, target, minFireLoops, startState, forceShootOnGround, shootFromGroundTimer); } // 0xB8943DE03F115DCF
static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xEF61E0, ped); } // 0xCE6BB45648900227
static void OPEN_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0xEF6240, patrolRoute); } // 0xFA0AB32CDCA06D33
static void CLOSE_PATROL_ROUTE() { invoke<Void>(0xEF6260); } // 0xD769493B5A72D117
static void ADD_PATROL_ROUTE_NODE(int nodeId, const char* nodeType, float posX, float posY, float posZ, float headingX, float headingY, float headingZ, int duration) { invoke<Void>(0xEF6270, nodeId, nodeType, posX, posY, posZ, headingX, headingY, headingZ, duration); } // 0x595076DE836264C0
static void ADD_PATROL_ROUTE_LINK(int nodeId1, int nodeId2) { invoke<Void>(0xEF6300, nodeId1, nodeId2); } // 0x62DDD8B4533C8E19
static void CREATE_PATROL_ROUTE() { invoke<Void>(0xEF6320); } // 0xF41DCE3B39E05E82
static void DELETE_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0xEF6330, patrolRoute); } // 0x2225C9F62E93B943
static BOOL GET_PATROL_TASK_INFO(Ped ped, int* timeLeftAtNode, int* nodeId) { return invoke<BOOL>(0xEF6370, ped, timeLeftAtNode, nodeId); } // 0x4CC29C988AA182D9
static void TASK_PATROL(Ped ped, const char* patrolRouteName, int alertState, BOOL canChatToPeds, BOOL useHeadLookAt) { invoke<Void>(0xEF6410, ped, patrolRouteName, alertState, canChatToPeds, useHeadLookAt); } // 0x0253650DCBDD84B3
static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0xEF64B0, ped); } // 0x115CA3B4F950226D
static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xEF6510, ped, x, y, z); } // 0xAB57201DCBB14A07
static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped target) { invoke<Void>(0xEF6520, ped, target); } // 0xF63C3F5B1BFD9CE4
static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float fireTolerance) { invoke<Void>(0xEF6530, ped, target, fireTolerance); } // 0x0ADB09C3437C4CCD
static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0xEF6550, ped, target); } // 0xE021F54CBB4F4FD1
static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float fireTolerance) { invoke<Void>(0xEF6560, ped, x, y, z, fireTolerance); } // 0x777E107FA017C2BE
static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xEF6580, ped, x, y, z); } // 0xE61AF8D27706A774
static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0xEF6590, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); } // 0x3114F582B6F4FD2C
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xEF65B0, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern); } // 0xB8551FB832F73124
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped ped, float x, float y, float z, Entity aimAtID, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern, int time) { invoke<Void>(0xEF6610, ped, x, y, z, aimAtID, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern, time); } // 0xA68F93198FAC44EC
static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL useNavMesh, int navFlags, int taskFlags, Hash firingPattern) { invoke<Void>(0xEF6680, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, useNavMesh, navFlags, taskFlags, firingPattern); } // 0x81C4993E5E1CEB9B
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Ped ped, Entity entity, float aimX, float aimY, float aimZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xEF66E0, ped, entity, aimX, aimY, aimZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); } // 0x2868A36BD27FD939
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xEF6740, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); } // 0x2433FB137DF847D2
static void SET_HIGH_FALL_TASK(Ped ped, int minTime, int maxTime, int entryType) { invoke<Void>(0xEF67A0, ped, minTime, maxTime, entryType); } // 0x8A43FAF3B2368B62
static void REQUEST_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0xEF67C0, name); } // 0xD04A772C411165F2
static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(const char* name) { return invoke<BOOL>(0xEF6800, name); } // 0xA08EEC7306CF6198
static void REMOVE_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0xEF6840, name); } // 0x8943BF9E0F15EDA0
static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(const char* name, int* points) { return invoke<BOOL>(0xEF6880, name, points); } // 0xD352CFACACA313A1
static BOOL WAYPOINT_RECORDING_GET_COORD(const char* name, int point, Vector3* coord) { return invoke<BOOL>(0xEF68E0, name, point, coord); } // 0x653B8254D6830E88
static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* name, int point) { return invoke<float>(0xEF6950, name, point); } // 0x2A0C849D5991C7F4
static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* name, float x, float y, float z, int* point) { return invoke<BOOL>(0xEF69F0, name, x, y, z, point); } // 0xC283DA397F6D065D
static void TASK_FOLLOW_WAYPOINT_RECORDING(Ped ped, const char* name, int p2, int p3, int p4) { invoke<Void>(0xEF6AA0, ped, name, p2, p3, p4); } // 0x7FD62C74ABB26599
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped ped) { return invoke<BOOL>(0xEF6B60, ped); } // 0xBD08B11F7404F5CD
static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0xEF6BE0, ped); } // 0x9558BBC6B5B65853
static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0xEF6CE0, p0); } // 0xD4AB5C0D7A1B6058
static BOOL SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float x, float y, float z) { return invoke<BOOL>(0xEF6D70, ped, x, y, z); } // 0x1549A6163A4CED2D
static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* name, int point) { return invoke<float>(0xEF6E20, name, point); } // 0x2157DED369B9B03F
static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xEF6E80, p0); } // 0xD6C64BE35FD4ED11
static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xEF6F10, p0, p1, p2); } // 0x27EC70BAD907B76B
static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xEF6FB0, p0, p1, p2, p3); } // 0xFFD8D929BFEA2C66
static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0xEF7050, p0, p1, p2); } // 0x3A4A0A988D382998
static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0xEF7110, p0); } // 0xF2BE617CD4ED96CD
static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(const char* name, BOOL p1, float p2, float p3) { invoke<Void>(0xEF7180, name, p1, p2, p3); } // 0x94302E8F619FAF3E
static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Ped ped, Ped target, BOOL p2) { invoke<Void>(0xEF71A0, ped, target, p2); } // 0x5316592ADD122C13
static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4) { invoke<Void>(0xEF7260, ped, x, y, z, p4); } // 0xA9260F368C3AE393
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Ped ped, Ped ped2, BOOL p2, BOOL p3) { invoke<Void>(0xEF7330, ped, ped2, p2, p3); } // 0x379242666BA2ED8B
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4, Hash firingPattern) { invoke<Void>(0xEF7350, ped, x, y, z, p4, firingPattern); } // 0x8CE357AE01230A0B
static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Ped ped) { invoke<Void>(0xEF7370, ped); } // 0x1B24CB0A1764E540
static void ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) { invoke<Void>(0xEF73E0, route); } // 0xF73325FB8144737E
static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) { invoke<Void>(0xEF73F0, route); } // 0xA332714024BC3F0C
static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) { return invoke<BOOL>(0xEF7430, route); } // 0x6C9A2A441E73E5E6
static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) { invoke<Void>(0xEF74B0, route, props); } // 0xD60BA488D361DF8C
static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0xEF74C0, dist); } // 0x118744F545022B3E
static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) { invoke<Void>(0xEF74E0, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); } // 0x43E9B2BD3668B432
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xEF7530, vehicle); } // 0x8DC9348C726B1575
static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0xEF75B0, vehicle); } // 0xD25BEA95F6673491
static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle vehicle) { return invoke<int>(0xEF7630, vehicle); } // 0x78BCB869DD6BFD3C
static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle vehicle) { invoke<Void>(0xEF76C0, vehicle); } // 0x1A33666733F63EE2
static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle vehicle) { invoke<Void>(0xEF77C0, vehicle); } // 0x5FC3A3680DA3531A
static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle vehicle) { invoke<Void>(0xEF7830, vehicle); } // 0x6956712D887FB12E
static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xEF78A0, vehicle, speed); } // 0x2A62B5809D44FA48
static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xEF7920, ped, toggle); } // 0x96F4A599D1C6F95A
static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL forceRestart) { invoke<Void>(0xEF79A0, ped, state, forceRestart); } // 0x218240D21FF14E21
static void TASK_MOVE_NETWORK_BY_NAME(Ped ped, const char* task, float multiplier, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xEF79C0, ped, task, multiplier, allowOverrideCloneUpdate, animDict, flags); } // 0xBED82BCB158AC570
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Ped ped, const char* network, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xEF79F0, ped, network, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, animDict, flags); } // 0xE8F1DEE1AE8DBF3E
static void TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xEF7A40, ped, network, initialParameters, blendDuration, allowOverrideCloneUpdate, animDict, flags); } // 0x9874D5FB1E8B02CB
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* dictionary, int flags) { invoke<Void>(0xEF7A70, ped, network, initialParameters, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, dictionary, flags); } // 0xF73EE77793731309
static BOOL IS_TASK_MOVE_NETWORK_ACTIVE(Ped ped) { return invoke<BOOL>(0xEF7AD0, ped); } // 0xB2E8986FED6B1539
static BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped ped) { return invoke<BOOL>(0xEF7B60, ped); } // 0x998B35A7F4D0F0C7
static BOOL REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped ped, const char* name) { return invoke<BOOL>(0xEF7C10, ped, name); } // 0x442A7753A4EB7411
static BOOL SET_EXPECTED_CLONE_NEXT_TASK_MOVE_NETWORK_STATE(Ped ped, const char* state) { return invoke<BOOL>(0xEF7C20, ped, state); } // 0xA6C2BBE598A91988
static const char* GET_TASK_MOVE_NETWORK_STATE(Ped ped) { return invoke<const char*>(0xEF7C30, ped); } // 0x9DC8697AB3A155E7
static void SET_TASK_MOVE_NETWORK_ANIM_SET(Ped ped, Hash clipSet, Hash variableClipSet) { invoke<Void>(0xEF7CE0, ped, clipSet, variableClipSet); } // 0x92DF696E2104166F
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0xEF7D00, ped, signalName, value); } // 0xDB1DAB5E0E775E2D
static void SET_TASK_MOVE_NETWORK_SIGNAL_LOCAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0xEF7D20, ped, signalName, value); } // 0xE523F21FAB5438DA
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_LERP_RATE(Ped ped, const char* signalName, float value) { invoke<Void>(0xEF7DD0, ped, signalName, value); } // 0x515111A614F76DC4
static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName, BOOL value) { invoke<Void>(0xEF7E80, ped, signalName, value); } // 0xBF87221921DE71CA
static float GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName) { return invoke<float>(0xEF7EA0, ped, signalName); } // 0x6E19562EC08A07C6
static BOOL GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName) { return invoke<BOOL>(0xEF7F50, ped, signalName); } // 0x12C0D6CD0D2EBB6F
static BOOL GET_TASK_MOVE_NETWORK_EVENT(Ped ped, const char* eventName) { return invoke<BOOL>(0xEF7FF0, ped, eventName); } // 0xB6CFA448D6BF4690
static BOOL SET_TASK_MOVE_NETWORK_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(Ped ped, BOOL enable) { return invoke<BOOL>(0xEF8090, ped, enable); } // 0x4A27E73B31F943DC
static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0xEF8200, ped); } // 0xF35435F8DC034A5C
static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0xEF8220, ped); } // 0xF6F7567DC74C45CE
static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0xEF8260, ped); } // 0xC1C69295C2020379
static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0xEF82A0, ped); } // 0x77FC7BDED929C9BD
static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0xEF82C0, ped); } // 0x6CDEFB59235A1FD9
static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0xEF8370, ped); } // 0x0A11073DD28E2CD9
static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0xEF8420, ped); } // 0x24433628C02BED5F
static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0xEF84D0, ped); } // 0x6F21822F60DC0945
static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0xEF8570, ped); } // 0x3D686813DBBECE04
static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, const char* animDictionary, const char* animationName, float blendIn, float blendOut, int flags, int ragdollBlockingFlags, float moverBlendDelta, int ikFlags) { invoke<Void>(0xEF85D0, ped, scene, animDictionary, animationName, blendIn, blendOut, flags, ragdollBlockingFlags, moverBlendDelta, ikFlags); } // 0x3DA436E63AB0F541
static void TASK_AGITATED_ACTION_CONFRONT_RESPONSE(Ped ped, Ped ped2) { invoke<Void>(0xEF8620, ped, ped2); } // 0x883E603A316F6D3B
static void TASK_SWEEP_AIM_ENTITY(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, Entity targetEntity, float turnRate, float blendInDuration) { invoke<Void>(0xEF8630, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, targetEntity, turnRate, blendInDuration); } // 0x15F4AEC8F54F37B9
static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0xEF8670, ped, entity); } // 0x2F1AD04B7C8A76C3
static void TASK_SWEEP_AIM_POSITION(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, float x, float y, float z, float turnRate, float blendInDuration) { invoke<Void>(0xEF8680, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, x, y, z, turnRate, blendInDuration); } // 0xE7D618671D65A1FF
static void UPDATE_TASK_SWEEP_AIM_POSITION(Ped ped, float x, float y, float z) { invoke<Void>(0xEF86C0, ped, x, y, z); } // 0xBDCCE8FE97AA3A1C
static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0xEF8750, ped, target); } // 0xBF348C17AF180F42
static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0xEF8760, ped); } // 0x0441E4524AA1CF9C
static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0xEF87F0, ped); } // 0x7FB6C108C1694163
static void UNCUFF_PED(Ped ped) { invoke<Void>(0xEF8800, ped); } // 0x5C47299F055D05B5
static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0xEF8850, ped); } // 0x736821465DA66F80
static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh) { return invoke<Vehicle>(0xF1AFB0, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh); } // 0x5779387E956077A6
static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0xF1B000, vehicle); } // 0x8C1F7D7A31B2A38E
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(Vehicle vehicle, BOOL toggle, BOOL p2) { invoke<Void>(0xF1B010, vehicle, toggle, p2); } // 0xECB40F3CD8E09468
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(Vehicle vehicle, BOOL canBeLockedOn, BOOL p2) { invoke<Void>(0xF1B130, vehicle, canBeLockedOn, p2); } // 0xF5706A3E4A060916
static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL toggle) { invoke<Void>(0xF1B190, veh, toggle); } // 0x730536B32F041BA6
static int GET_VEHICLE_HOMING_LOCKON_STATE(Vehicle vehicle) { return invoke<int>(0xF1B230, vehicle); } // 0x3E3B4978082BB93C
static int GET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0) { return invoke<int>(0xF1B280, p0); } // 0x52C90C5E23EB961A
static void SET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0, Any p1) { invoke<Void>(0xF1B2D0, p0, p1); } // 0xD501B0D4146A6A30
static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0xF1B330, vehicle, model); } // 0x2E6A27037F1DC473
static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<BOOL>(0xF1B3F0, vehicleGenerator); } // 0x9173EE00A72DCA49
static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0xF1B450, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x7E711C5CE9160738
static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<Void>(0xF1B620, vehicleGenerator); } // 0x0D1F59EC6D37A7EE
static void SET_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator, BOOL enabled) { invoke<Void>(0xF1B6A0, vehicleGenerator, enabled); } // 0x36B6F306570BAA3F
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle, BOOL p7) { invoke<Void>(0xF1B730, x1, y1, z1, x2, y2, z2, toggle, p7); } // 0xA63572E348CC4CFB
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0xF1B760); } // 0x5A65DF56B098A5F1
static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0xF1B770, active); } // 0xEFAF1ADDE0F583C3
static void SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(float x, float y, float z, float radius) { invoke<Void>(0xF1B790, x, y, z, radius); } // 0x5519F1C3752E3A90
static void CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST() { invoke<Void>(0xF1B7D0); } // 0x6317659BFF055A5F
static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, float p1) { return invoke<BOOL>(0xF1B7E0, vehicle, p1); } // 0x1DE99C193C7EC64B
static BOOL SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xF1B890, p0, p1, p2, p3); } // 0xD735FEDB86CA06C6
static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xF1B9D0, vehicle); } // 0x413E19AD37DE3A4C
static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xF1BA30, vehicle); } // 0x306C263AAEC4A988
static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xF1BA80, vehicle); } // 0xD27458C016741B0C
static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0xF1BAA0, vehicle); } // 0x1CE980E99A2A6FB6
static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle, BOOL includeDriver, BOOL includeDeadOccupants) { return invoke<int>(0xF1BB00, vehicle, includeDriver, includeDeadOccupants); } // 0xDE3B10768F6103AD
static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0xF1BB90, vehicle); } // 0x2EEC0612337D20CE
static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0xF1BBF0, modelHash); } // 0xDC1AA2FE20EEB2E9
static BOOL IS_SEAT_WARP_ONLY(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xF1BC90, vehicle, seatIndex); } // 0x22007BC82AF0074B
static BOOL IS_TURRET_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xF1BD30, vehicle, seatIndex); } // 0x333A2A6253C809D2
static BOOL DOES_VEHICLE_ALLOW_RAPPEL(Vehicle vehicle) { return invoke<BOOL>(0xF1BDB0, vehicle); } // 0xEE6C44D4C8883EC4
static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF1BE10, multiplier); } // 0xA0265306DFF63938
static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF1BE40, multiplier); } // 0x23D563236A543309
static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF1BE60, multiplier); } // 0x40C1C94D5A5157C5
static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(BOOL toggle) { invoke<Void>(0xF1BE80, toggle); } // 0x3F4A190062FF9E09
static void SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(float value) { invoke<Void>(0xF1BEA0, value); } // 0x5D50773C51925144
static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0xF1BEE0, toggle); } // 0x00AB2F24F67F293F
static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0xF1BF00, value); } // 0xECDFDC2E8AC2D613
static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0xF1BF10, vehicle, doorLockStatus); } // 0x0B74F181ADFC39BF
static void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle vehicle, int doorId, int doorLockStatus) { invoke<Void>(0xF1BF60, vehicle, doorId, doorLockStatus); } // 0x1F4C790D1AC5AFF9
static void SET_VEHICLE_HAS_MUTED_SIRENS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1BFF0, vehicle, toggle); } // 0xBC5009F300C00558
static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0xF1C090, vehicle, player, toggle); } // 0x60C8432F4C0BDD68
static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0xF1C0B0, vehicle, player); } // 0x75B56675BF83B3BC
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1C120, vehicle, toggle); } // 0x7A673862D5A46F24
static void SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1C1D0, vehicle, toggle); } // 0x0B1BCFB3741AF8B2
static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0xF1C230, vehicle, team, toggle); } // 0xBF60B9A0E651D89B
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_TEAMS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1C2B0, vehicle, toggle); } // 0xA7AD7AB3035B02EA
static void SET_VEHICLE_DONT_TERMINATE_TASK_WHEN_ACHIEVED(Vehicle vehicle) { invoke<Void>(0xF1C310, vehicle); } // 0x827FC1D24FC3CD95
static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0xF1C3F0, vehicle, isAudible, isInvisible); } // 0xAE89444B15234CCE
static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0xF1C4A0, vehicle, killDriver, explodeOnImpact); } // 0xE251D2995353C61E
static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0xF1C580, vehicle, ped, toggle); } // 0x9EBBAB4F81D0BDAC
static void ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE(Vehicle vehicle) { invoke<Void>(0xF1C5A0, vehicle); } // 0xD213EC7C7B81BCEE
static void CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0xF1C620); } // 0x9E4B8D8CF051F6DC
static BOOL HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { return invoke<BOOL>(0xF1C650); } // 0xA648CE821FEF3C51
static void DETONATE_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0xF1C6D0); } // 0x235C228FDD040462
static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0xF1C740, vehicle, state); } // 0x0B29D0B41AC20799
static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xF1C7D0, vehicle); } // 0xB5A36B0C5D6C2884
static BOOL IS_VEHICLE_IN_GARAGE_AREA(const char* garageName, Vehicle vehicle) { return invoke<BOOL>(0xF1C840, garageName, vehicle); } // 0xFE448E8C2209CA31
static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0xF1C8B0, vehicle, colorPrimary, colorSecondary); } // 0xD133EF7430EDCD09
static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1C950, vehicle, toggle); } // 0x2F12C305B28C6C59
static void SET_VEHICLE_IS_RACING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1C9F0, vehicle, toggle); } // 0xDA87162A83051958
static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF1CAA0, vehicle, r, g, b); } // 0x84F5FD9CD27457EE
static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF1CB70, vehicle, r, g, b); } // 0xD9B9D4D1CCED7CA6
static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0xF1CBF0, vehicle); } // 0x963D9A7202C06F65
static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xF1CC40, vehicle); } // 0xA9D64A14804D119B
static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF1CCA0, vehicle, r, g, b); } // 0x593A3115B8AE759B
static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF1CD70, vehicle, r, g, b); } // 0x04434FA56DED5500
static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0xF1CDF0, vehicle); } // 0x588D8FDC61F7CFAD
static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xF1CE40, vehicle); } // 0x2C0B2BB7913E8DBA
static void SET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle, float fade) { invoke<Void>(0xF1CEA0, vehicle, fade); } // 0x4DC7FAAC148F9B2F
static float GET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle) { return invoke<float>(0xF1CF10, vehicle); } // 0xD1DBD3830272ECAA
static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0xF1CF90, vehicle, state); } // 0x8F0EA4C49C452445
static void SET_GOON_BOSS_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D040, vehicle, toggle); } // 0x2041F0CA908ABAC2
static void SET_OPEN_REAR_DOORS_ON_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D0A0, vehicle, toggle); } // 0x367040C40E6A5A3A
static void FORCE_SUBMARINE_SURFACE_MODE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D100, vehicle, toggle); } // 0xCE1294F698971209
static void FORCE_SUBMARINE_NEURTAL_BUOYANCY(Any p0, Any p1) { invoke<Void>(0xF1D170, p0, p1); } // 0xBADC5521D958DD40
static void SET_SUBMARINE_CRUSH_DEPTHS(Vehicle vehicle, BOOL p1, float depth1, float depth2, float depth3) { invoke<Void>(0xF1D1D0, vehicle, p1, depth1, depth2, depth3); } // 0xA324C32992621FA4
static BOOL GET_SUBMARINE_IS_UNDER_DESIGN_DEPTH(Vehicle submarine) { return invoke<BOOL>(0xF1D270, submarine); } // 0x6DBA6A508811E851
static int GET_SUBMARINE_NUMBER_OF_AIR_LEAKS(Vehicle submarine) { return invoke<int>(0xF1D2F0, submarine); } // 0x2D7690E0BF110B40
static void SET_BOAT_IGNORE_LAND_PROBES(Any p0, Any p1) { invoke<Void>(0xF1D350, p0, p1); } // 0x435687668B2C6D06
static void _SET_BOUNDS_AFFECT_WATER_PROBES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D3B0, vehicle, toggle); } // 0x7B92F87655ED3C29
static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D410, vehicle, toggle); } // 0x3E29597A27D861B2
static BOOL CAN_ANCHOR_BOAT_HERE(Vehicle vehicle) { return invoke<BOOL>(0xF1D430, vehicle); } // 0x138421810ACE4B5D
static BOOL CAN_ANCHOR_BOAT_HERE_IGNORE_PLAYERS(Vehicle vehicle) { return invoke<BOOL>(0xF1D4B0, vehicle); } // 0x1E9361E60B23497B
static void SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D530, vehicle, toggle); } // 0x3CA987D2B3498078
static void SET_FORCE_LOW_LOD_ANCHOR_MODE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1D550, vehicle, p1); } // 0xB79D107D2E0D7E43
static void SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Vehicle vehicle, float value) { invoke<Void>(0xF1D5B0, vehicle, value); } // 0xBA1F8721D3730F2B
static BOOL IS_BOAT_ANCHORED(Vehicle vehicle) { return invoke<BOOL>(0xF1D610, vehicle); } // 0x02B45F7B39143EEA
static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D680, vehicle, toggle); } // 0xF1FCF5569978D854
static void SET_BOAT_WRECKED(Vehicle vehicle) { invoke<Void>(0xF1D6E0, vehicle); } // 0xBA929B36B8BB08EB
static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D730, vehicle, toggle); } // 0x4539850624F18A9E
static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0xF1D790, vehicle); } // 0xE101D58DA98B6070
static BOOL IS_VEHICLE_SIREN_AUDIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xF1D820, vehicle); } // 0xE21E573B1795892D
static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D8B0, vehicle, toggle); } // 0xD05AF216D970F274
static void REMOVE_VEHICLE_STUCK_CHECK(Vehicle vehicle) { invoke<Void>(0xF1D950, vehicle); } // 0xB7BDF91BE073DCFB
static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0xF1D970, vehicle, colorPrimary, colorSecondary); } // 0xFF4B16F297D9CB3E
static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex, BOOL isTaskRunning) { return invoke<BOOL>(0xF1D9D0, vehicle, seatIndex, isTaskRunning); } // 0xC39AE5D390581AD5
static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex, BOOL p2) { return invoke<Ped>(0xF1DA00, vehicle, seatIndex, p2); } // 0xFD5C5BBD1FE92BB7
static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0xF1DA30, vehicle, seatIndex); } // 0x6B854773972E76E4
static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0xF1DAB0, vehicle, lightsOn, highbeamsOn); } // 0x9FFEA38DBCE391EC
static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0xF1DB40, vehicle, wheelID, completely); } // 0x548F6F43A7CB6F45
static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF1DC20, vehicle, speed); } // 0x93C337B66C95C99B
static void SET_VEHICLE_FORWARD_SPEED_XY(Vehicle vehicle, float speed) { invoke<Void>(0xF1DC90, vehicle, speed); } // 0xFF4296DC08BAEC71
static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int duration, BOOL p3) { invoke<Void>(0xF1DD00, vehicle, distance, duration, p3); } // 0xE5EE5C9DDF05D925
static void SET_VEHICLE_STEER_FOR_BUILDINGS(Vehicle vehicle, Any p1) { invoke<Void>(0xF1DD20, vehicle, p1); } // 0xE02B4E5EE15725CC
static void SET_VEHICLE_CAUSES_SWERVING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1DD80, vehicle, toggle); } // 0x52A6C42AB95EADB7
static void SET_IGNORE_PLANES_SMALL_PITCH_CHANGE(Any p0, Any p1) { invoke<Void>(0xF1DDF0, p0, p1); } // 0x1A1E025C1EDC00AB
static void STOP_BRINGING_VEHICLE_TO_HALT(Vehicle vehicle) { invoke<Void>(0xF1DE50, vehicle); } // 0xF5B09CD26D48D446
static BOOL IS_VEHICLE_BEING_BROUGHT_TO_HALT(Vehicle vehicle) { return invoke<BOOL>(0xF1DEC0, vehicle); } // 0x0AB6C098FE20C23A
static void LOWER_FORKLIFT_FORKS(Vehicle forklift) { invoke<Void>(0xF1DF40, forklift); } // 0x306E268B106D3D0D
static void SET_FORKLIFT_FORK_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0xF1DF50, vehicle, height); } // 0x0D0DE7C657057F36
static BOOL IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0xF1DF60, vehicle, entity); } // 0x1DB196628F3A0BD8
static BOOL IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle) { return invoke<BOOL>(0xF1DF90, vehicle); } // 0x43F2D662C7522C93
static Vehicle FIND_HANDLER_VEHICLE_CONTAINER_IS_ATTACHED_TO(Entity entity) { return invoke<Vehicle>(0xF1E050, entity); } // 0x4218094D251842BD
static BOOL IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0xF1E070, vehicle, entity); } // 0x6A5E9E4AC5B61452
static void ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(Vehicle vehicle, Entity entity) { invoke<Void>(0xF1E0A0, vehicle, entity); } // 0xBD3D97A93EBB67B3
static void DETACH_CONTAINER_FROM_HANDLER_FRAME(Vehicle vehicle) { invoke<Void>(0xF1E0B0, vehicle); } // 0x7AA69E5CE0F1C51A
static void SET_VEHICLE_DISABLE_HEIGHT_MAP_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1E0C0, vehicle, p1); } // 0xC43B78AD4315F7FA
static void SET_BOAT_DISABLE_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1E1B0, vehicle, p1); } // 0x1E11F329546909B8
static BOOL IS_HELI_LANDING_AREA_BLOCKED(Vehicle vehicle) { return invoke<BOOL>(0xF1E210, vehicle); } // 0xB1A8644CC087A079
static void SET_SHORT_SLOWDOWN_FOR_LANDING(Vehicle vehicle) { invoke<Void>(0xF1E280, vehicle); } // 0x91CEBBEA3A7FB79A
static void SET_HELI_TURBULENCE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0xF1E2F0, vehicle, p1); } // 0x9647565D7FAB305A
static void SET_CAR_BOOT_OPEN(Vehicle vehicle) { invoke<Void>(0xF1E350, vehicle); } // 0x8E18C9CFBC30C9FF
static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { invoke<Void>(0xF1E3C0, vehicle, index, onRim, p3); } // 0xE488FDAA43A181AE
static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0xF1E3E0, vehicle, closeInstantly); } // 0xC3680B85B2D7086A
static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1E400, vehicle, toggle); } // 0x439C904840715871
static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0xF1E460, vehicle); } // 0xE6BE8A525BA6BD44
static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0xF1E4C0, vehicle, enabled); } // 0x72241E9BCAEB0F8B
static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorId, BOOL loose, BOOL openInstantly) { invoke<Void>(0xF1E560, vehicle, doorId, loose, openInstantly); } // 0xBFE60A5CC0C835D8
static void SET_VEHICLE_DOOR_AUTO_LOCK(Vehicle vehicle, int doorId, BOOL toggle) { invoke<Void>(0xF1E590, vehicle, doorId, toggle); } // 0xBC123B7E0667E87D
static void SET_FLEEING_VEHICLES_USE_SWITCHED_OFF_NODES(Any p0) { invoke<Void>(0xF1E630, p0); } // 0xEB13A0B02F8676C8
static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E650, vehicle, windowIndex); } // 0x8E470D78FC866126
static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0xF1E6D0, vehicle); } // 0xD3694FA8930DED3C
static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E6E0, vehicle, windowIndex); } // 0x260EEEEBF5F35F72
static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E750, vehicle, windowIndex); } // 0x9303D5873A8A413A
static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E7C0, vehicle, windowIndex); } // 0x62DFD44586348C12
static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E7D0, vehicle, windowIndex); } // 0x3BFC7329EC766FED
static void POP_OUT_VEHICLE_WINDSCREEN(Vehicle vehicle) { invoke<Void>(0xF1E840, vehicle); } // 0x4CF78EBCA2CD7E9E
static void POP_OFF_VEHICLE_ROOF_WITH_IMPULSE(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF1E8A0, vehicle, x, y, z); } // 0x362D577C98803D6D
static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { invoke<Void>(0xF1E950, vehicle, state); } // 0xBA3C1A9AA7FD9616
static void SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1EA50, vehicle, toggle); } // 0xAAF00640D5573DA0
static void SET_VEHICLE_HEADLIGHT_SHADOWS(Vehicle vehicle, int p1) { invoke<Void>(0xF1EAA0, vehicle, p1); } // 0xAA2BF5C4E3F250C0
static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0xF1EB00, vehicle, state); } // 0xD45558BDBDE86734
static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0xF1EB50, vehicle); } // 0x495F6DB2481DBAEE
static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0xF1EBA0, vehicle); } // 0xF1298707777A950B
static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1EC10, vehicle, toggle); } // 0xEC6A9F16D3F15978
static void SET_VEHICLE_FORCE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1ECB0, vehicle, toggle); } // 0xA5498338B4203373
static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xF1ED00, vehicle, multiplier); } // 0x3B69BFF3173EC703
static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0xF1ED50, vehicle, trailer, radius); } // 0xF89624E52FCBE454
static void ATTACH_VEHICLE_ON_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float offsetX, float offsetY, float offsetZ, float coordsX, float coordsY, float coordsZ, float rotationX, float rotationY, float rotationZ, float disableCollisions) { invoke<Void>(0xF1EE30, vehicle, trailer, offsetX, offsetY, offsetZ, coordsX, coordsY, coordsZ, rotationX, rotationY, rotationZ, disableCollisions); } // 0x9E132DB7E05C6EAB
static void STABILISE_ENTITY_ATTACHED_TO_HELI(Vehicle vehicle, Entity entity, float p2) { invoke<Void>(0xF1EE50, vehicle, entity, p2); } // 0x8FB959083319E145
static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0xF1EF00, vehicle); } // 0x157D966854AABDA6
static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0xF1EF90, vehicle); } // 0xA6D8AF5A058A75F0
static void SET_TRAILER_INVERSE_MASS_SCALE(Vehicle vehicle, float p1) { invoke<Void>(0xF1F050, vehicle, p1); } // 0x82A7EF211E6B06C9
static void SET_TRAILER_LEGS_RAISED(Vehicle vehicle) { invoke<Void>(0xF1F0E0, vehicle); } // 0x632030977D1CE430
static void SET_TRAILER_LEGS_LOWERED(Vehicle vehicle) { invoke<Void>(0xF1F140, vehicle); } // 0xBAF583E9A667F5FB
static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0xF1F1A0, vehicle, tyreIndex); } // 0xF516E954BCB89C18
static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, const char* plateText) { invoke<Void>(0xF1F230, vehicle, plateText); } // 0x3FEAE59CDE6D3946
static const char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<const char*>(0xF1F280, vehicle); } // 0xCA7159F2C5FF745A
static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0xF1F2E0); } // 0x20DE4C1439E0FC92
static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0xF1F300, vehicle, plateIndex); } // 0x05D3F682DDA06C20
static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0xF1F350, vehicle); } // 0x4F06416A18248EA0
static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0xF1F3B0, toggle); } // 0xAE03F542B985A69E
static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction, Any p5, Any p6) { return invoke<Vehicle>(0xF1F3D0, variation, x, y, z, direction, p5, p6); } // 0x767956351E028F74
static void SWITCH_TRAIN_TRACK(int trackId, BOOL state) { invoke<Void>(0xF1F420, trackId, state); } // 0x43C8A7F0D458B663
static void SET_TRAIN_TRACK_SPAWN_FREQUENCY(int trackIndex, int frequency) { invoke<Void>(0xF1F450, trackIndex, frequency); } // 0xB24E78BD1D1F9F3F
static void ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(Any p0) { invoke<Void>(0xF1F480, p0); } // 0x1A6B031C358F6071
static void DELETE_ALL_TRAINS() { invoke<Void>(0xF1F4D0); } // 0x47931C69C0D75B43
static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0xF1F4E0, train, speed); } // 0x492EE2B9C9BD33C6
static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0xF1F550, train, speed); } // 0xCD56231706809D19
static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0xF1F5C0, toggle); } // 0xBB7BF0D30DB04384
static void SET_RANDOM_BOATS_MP(BOOL toggle) { invoke<Void>(0xF1F5E0, toggle); } // 0xDB7CCABFFA928C83
static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0xF1F600, toggle); } // 0x474491073FE815A8
static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0xF1F620, vehicle); } // 0x67AC1AE8A2697D67
static int GET_VEHICLE_RECORDING_ID(int recording, const char* script) { return invoke<int>(0xF1F6A0, recording, script); } // 0x95610E68DFCFC225
static void REQUEST_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0xF1F6D0, recording, script); } // 0xD772E6694B8472A6
static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(int recording, const char* script) { return invoke<BOOL>(0xF1F750, recording, script); } // 0x266D9DB5FCE4003B
static void REMOVE_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0xF1F790, recording, script); } // 0x7821F942CAEEBEE1
static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0xF1F7E0, id, time); } // 0x763EEC52E292B5A0
static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0xF1F870, recording, time, script); } // 0x2A03585144C38A2A
static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0xF1F920, id, time); } // 0x32D675332B7BEAC5
static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0xF1F9B0, recording, time, script); } // 0x083DB438E821B084
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int id) { return invoke<float>(0xF1FA60, id); } // 0x1F921E74406AE806
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int recording, const char* script) { return invoke<float>(0xF1FA90, recording, script); } // 0xE2E30D829A6B8F9E
static float GET_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0xF1FAD0, vehicle); } // 0x942B90900E176BD7
static float GET_TIME_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0xF1FB20, vehicle); } // 0x157F3D5A4AAB2C50
static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int recording, const char* script, BOOL p3) { invoke<Void>(0xF1FB70, vehicle, recording, script, p3); } // 0x88556DA0593A0748
static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Vehicle vehicle, int recording, const char* script, int flags, int time, int drivingStyle) { invoke<Void>(0xF1FB90, vehicle, recording, script, flags, time, drivingStyle); } // 0x9CCFFF877AB82ACA
static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1FBB0, vehicle, p1); } // 0x44A13535A15C20E0
static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FBD0, vehicle); } // 0x1D2DAF2A41FFC4A0
static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FC20, vehicle); } // 0x36D3AD4491CD32BA
static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FC70, vehicle); } // 0x937DE6A451B47D92
static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF1FCC0, vehicle); } // 0x050D073F91C5243C
static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF1FD20, vehicle); } // 0xD99C77F6466B9C48
static int GET_CURRENT_PLAYBACK_FOR_VEHICLE(Vehicle vehicle) { return invoke<int>(0xF1FD90, vehicle); } // 0x0008A5B9B95FED93
static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FDE0, vehicle); } // 0x948DDF2EBE37571B
static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF1FE30, vehicle, speed); } // 0x206AB1458FD9522F
static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Vehicle vehicle, int recording, const char* script, float speed, int drivingStyle) { invoke<Void>(0xF1FE90, vehicle, recording, script, speed, drivingStyle); } // 0x3EF00C934572535B
static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, float time) { invoke<Void>(0xF1FEB0, vehicle, time); } // 0x8BCD7C11D27FB9A1
static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int drivingStyle) { invoke<Void>(0xF1FF10, vehicle, drivingStyle); } // 0x0642B7FD807FF696
static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Vehicle vehicle, int time, int drivingStyle, BOOL p3) { invoke<Void>(0xF1FF60, vehicle, time, drivingStyle, p3); } // 0xD9CBCF1C9EAC9D15
static void SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0xF1FFD0, vehicle, x, y, z, p4); } // 0x3245F0B28999D460
static void SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF1FFF0, vehicle, x, y, z); } // 0x6E859E04BDE20D6E
static void SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF20050, vehicle, x, y, z); } // 0x55498986DC9E53BB
static void SET_SHOULD_LERP_FROM_AI_TO_FULL_RECORDING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF200B0, vehicle, p1); } // 0x5D18C448B64290DB
static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF20150, vehicle, p1); } // 0x1D937F8481AB64F0
static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0xF201D0, p0, p1, p2, p3, p4, p5, p6); } // 0x177C21F54C9A6E9E
static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0xF20280, model, suppressed); } // 0xCCA6D8A84EE8C88A
static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xF202A0, x, y, z, radius, modelHash, flags); } // 0x66D94742BB3D032F
static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xF20320, p0, p1, p2, p3, p4, p5, p6); } // 0xCE29C0EA93335BD3
static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xF203A0, p0, p1, p2, p3, p4, p5, p6); } // 0x1C4D3AE530899DF2
static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xF20420, x, y, z, radius, modelHash, flags); } // 0xF0CA45A211FFDCD9
static Vehicle GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Vehicle>(0xF20450, train, trailerNumber); } // 0xB5C59FDCC14C2F22
static BOOL IS_MISSION_TRAIN(Vehicle train) { return invoke<BOOL>(0xF20540, train); } // 0xF2A5706EAF041CB1
static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0xF205C0, train); } // 0x903908AA21114D72
static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0xF205D0, train, p1); } // 0xC4929897EF5CADC2
static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0xF205E0, train, x, y, z); } // 0x0FCE057EE79E33FA
static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0xF20680, model); } // 0xEA4F815FDC353FEF
static BOOL IS_THIS_MODEL_A_JETSKI(Hash model) { return invoke<BOOL>(0xF20700, model); } // 0xA71279EFEE0ACEB2
static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0xF20780, model); } // 0x00C6FDED3EB75117
static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xF20800, model); } // 0xBA16CD57E37AC32A
static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0xF20880, model); } // 0xD3CE8D1E6564B011
static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0xF20900, model); } // 0xAE447CBB33B40CA3
static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0xF20980, model); } // 0x78B050AFBA6D1517
static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0xF20A00, model); } // 0x3801E353091A2E42
static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0xF20A80, model); } // 0x9910CD0D8626AA28
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(Hash model) { return invoke<BOOL>(0xF20B00, model); } // 0xD9BDDEAC04BC910C
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(Hash model) { return invoke<BOOL>(0xF20B80, model); } // 0x0C43345D94C3E22E
static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0xF20C00, vehicle); } // 0xA9F7300B498DDED7
static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF20CC0, vehicle, speed); } // 0xA83EE494110BC566
static void FORCE_SUB_THROTTLE_FOR_TIME(Vehicle vehicle, float p1, float p2) { invoke<Void>(0xF20DA0, vehicle, p1, p2); } // 0x241E64B7BFB90488
static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xF20E30, vehicle, state); } // 0xCF9C21E54DB720B8
static void SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF20ED0, vehicle, p1); } // 0x89E19F9D79DDCA80
static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0xF20FD0, vehicle, state); } // 0x6BFFBDE3C98A828E
static void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF21070, vehicle, toggle); } // 0x680C862D9FC0F4BC
static void SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21110, vehicle, p1); } // 0xB2CA6639924FA111
static void SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(Any p0, Any p1) { invoke<Void>(0xF211B0, p0, p1); } // 0xEFEFBD4EA86918AE
static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0xF21200, vehicle); } // 0xF04E476AE02C4646
static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0xF21250, vehicle, dirtLevel); } // 0x9452FE4900245259
static BOOL GET_DOES_VEHICLE_HAVE_DAMAGE_DECALS(Vehicle vehicle) { return invoke<BOOL>(0xF212C0, vehicle); } // 0xB69AE16F62A14003
static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorId) { return invoke<BOOL>(0xF21320, vehicle, doorId); } // 0x6B0915C0DDD2954F
static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL disableAutoStart) { invoke<Void>(0xF213B0, vehicle, value, instantly, disableAutoStart); } // 0xC229299217554C78
static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF213E0, vehicle, toggle); } // 0xBE144113897EE678
static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF214B0, vehicle, toggle); } // 0x0248EA593ACD1C87
static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorId, int speed, float angle) { invoke<Void>(0xF21550, vehicle, doorId, speed, angle); } // 0x3E13A302AA0F06BF
static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorId, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xF21570, vehicle, doorId, p2, p3, p4); } // 0xC1FE4FCB32785633
static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int doorId) { return invoke<float>(0xF215A0, vehicle, doorId); } // 0x7BFB76C576628F3D
static Ped GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doord) { return invoke<Ped>(0xF21640, vehicle, doord); } // 0x11AEF334072BBF99
static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorId, BOOL closeInstantly) { invoke<Void>(0xF21670, vehicle, doorId, closeInstantly); } // 0x6515021478088FBC
static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId, BOOL deleteDoor) { invoke<Void>(0xF21690, vehicle, doorId, deleteDoor); } // 0x89E9F387C190061F
static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF216B0, vehicle, toggle); } // 0xD2F21CFC29C914AE
static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xF21720, vehicle); } // 0x9DB4F102351D5D9E
static void SET_VEHICLE_REMOVE_AGGRESSIVE_CARJACK_MISSION(Any p0) { invoke<Void>(0xF21780, p0); } // 0x4EB5C166706C0781
static void SET_VEHICLE_AVOID_PLAYER_VEHICLE_RIOT_VAN_MISSION(Any p0) { invoke<Void>(0xF217D0, p0); } // 0x49A1FC25BB73AC77
static void SET_CARJACK_MISSION_REMOVAL_PARAMETERS(Any p0, Any p1) { invoke<Void>(0xF21820, p0, p1); } // 0x424A62A3138EF2F6
static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF21840, vehicle); } // 0x9E20DC08879FF3FC
static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0xF218A0, vehicle); } // 0x6645B56AACA6C57C
static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int colorCombination) { invoke<Void>(0xF21910, vehicle, colorCombination); } // 0x20DD46D27530FAC7
static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0xF21920, vehicle); } // 0x0507EE8EDD1D75E9
static void SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle, int colorIndex) { invoke<Void>(0xF21940, vehicle, colorIndex); } // 0x89D1FDCA3735A1E0
static int GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle) { return invoke<int>(0xF21990, vehicle); } // 0xD6BA8C57BDF9DEB9
static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF219F0, vehicle, toggle); } // 0xF04751F8E604D487
static void SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF21A90, vehicle, toggle); } // 0x40891A689350468D
static void SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21B30, vehicle, p1); } // 0xA29F097488D811A6
static void SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21B90, vehicle, p1); } // 0xE296500BDAD8807A
static void SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21BF0, vehicle, p1); } // 0x9D756F14B232B644
static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* successIndicator) { invoke<Void>(0xF21C60, p0, modelHash, successIndicator); } // 0xA50C5A6FC93D3B49
static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0xF21C70, vehicle); } // 0x38A100E16C95161B
static int GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(Vehicle vehicle, int doorId) { return invoke<int>(0xF21CC0, vehicle, doorId); } // 0x405766A9221AFD99
static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0xF21D40, veh, doorID); } // 0xAD830DCD82C63F31
static void SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Vehicle vehicle, int doorId, BOOL isBreakable) { invoke<Void>(0xF21DF0, vehicle, doorId, isBreakable); } // 0xBDE75E2FCBF91A6C
static BOOL IS_VEHICLE_BUMPER_BOUNCING(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0xF21E90, vehicle, frontBumper); } // 0x8545B773982EAE2B
static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0xF21F20, vehicle, frontBumper); } // 0x2495CCF0BF303C19
static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0xF21F50, x1, x2, y1, y2, z1, z2); } // 0x00CC36CA06DD06AD
static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xF22000, vehicle); } // 0xD2A0543EC400E1A5
static int GET_VEHICLE_MODEL_VALUE(Hash vehicleModel) { return invoke<int>(0xF22060, vehicleModel); } // 0x6C6E46A097D62A34
static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0xF22080, vehicle); } // 0x58428BC502F48C75
static Hash GET_IN_VEHICLE_CLIPSET_HASH_FOR_SEAT(Vehicle vehicle, int p1) { return invoke<Hash>(0xF220E0, vehicle, p1); } // 0xD9DD012396E375D8
static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0xF22160, train, toggle); } // 0xF66F8D9F1877E201
static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0xF22180, vehicle, pearlescentColor, wheelColor); } // 0xBB361D7264AC4FD8
static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0xF22220, vehicle, pearlescentColor, wheelColor); } // 0x741D9B0685E67684
static void SET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int color) { invoke<Void>(0xF22280, vehicle, color); } // 0xC0C8E6AAA00F1A58
static void GET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int* color) { invoke<Void>(0xF222F0, vehicle, color); } // 0xE10BD9712D7B0CBF
static void SET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int color) { invoke<Void>(0xF22340, vehicle, color); } // 0x77B012A683295B6E
static void GET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int* color) { invoke<Void>(0xF223B0, vehicle, color); } // 0x4C5611B5008205EB
static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0xF22400); } // 0x7C450B28DDDE0513
static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0xF22410, vehicle); } // 0xF698038C13845696
static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0xF22480, vehicle); } // 0x1D1124C855316790
static void SET_VEHICLE_CAN_ENGINE_MISSFIRE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF224D0, vehicle, toggle); } // 0x76A218B79DCF8962
static void SET_VEHICLE_CAN_LEAK_OIL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22580, vehicle, toggle); } // 0x03DACC5F7E5335AC
static void SET_VEHICLE_CAN_LEAK_PETROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22630, vehicle, toggle); } // 0x515A606E0E38355D
static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF226E0, vehicle, toggle); } // 0xA6175150F92EE83B
static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22790, vehicle, toggle); } // 0x8DB4917AFAD347BC
static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22840, vehicle, toggle); } // 0x64134834C866AE60
static void SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF228F0, vehicle, toggle); } // 0x3F413690B5A371F4
static void SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF229A0, vehicle, toggle); } // 0xCA609B4171C43CE1
static void SET_DISABLE_PRETEND_OCCUPANTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22A40, vehicle, toggle); } // 0xA80E7D11DB73C8BA
static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xF22AF0, x1, y1, z1, x2, y2, z2, p6); } // 0xC4BCE90F7242F354
static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0xF22B10, vehicle, value); } // 0xDEABDA7736297FEB
static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xF22B60, vehicle, extraId); } // 0x5318DF85BEB6B95F
static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { invoke<Void>(0xF22BD0, vehicle, extraId, disable); } // 0xD772F6AA66750D2B
static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xF22BF0, vehicle, extraId); } // 0x579FA5568DE0C2A0
static BOOL IS_EXTRA_BROKEN_OFF(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xF22C80, vehicle, extraId); } // 0xFCFC8401A76A332D
static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF22D30, vehicle, p1); } // 0xAB2F41AC28DDBAAE
static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0xF22DA0, vehicle, instantlyLower); } // 0x232B023FE4D977E2
static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0xF22DF0, vehicle, instantlyRaise); } // 0xD6B15DF382A594C7
static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0xF22E40, vehicle); } // 0x54DA32C15F7A6ABA
static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xF22EA0, vehicle, p1); } // 0x7943BD10E2A03FAC
static BOOL TRANSFORM_TO_SUBMARINE(Vehicle vehicle, BOOL noAnimation) { return invoke<BOOL>(0xF22F20, vehicle, noAnimation); } // 0x1F75BC85F714AC5A
static void TRANSFORM_TO_CAR(Vehicle vehicle, BOOL noAnimation) { invoke<Void>(0xF22F70, vehicle, noAnimation); } // 0x2915C7D9A225A148
static BOOL IS_VEHICLE_IN_SUBMARINE_MODE(Vehicle vehicle) { return invoke<BOOL>(0xF22FC0, vehicle); } // 0x17556069075B5519
static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0xF23020, vehicle); } // 0xC182FBFDE4682BA3
static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL focusOnModel) { invoke<Void>(0xF230C0, vehicle, xOffset, yOffset, zOffset, damage, radius, focusOnModel); } // 0x2BDD547718FF1F1A
static void SET_VEHICLE_OCCUPANTS_TAKE_EXPLOSIVE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF230F0, vehicle, toggle); } // 0x00F38E42DE1E8071
static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0xF23140, vehicle); } // 0x4C7724D572378B05
static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF231A0, vehicle, health); } // 0x2AEBE39F6BF7D6BC
static void SET_PLANE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF232A0, vehicle, health); } // 0x31D57F4EF7BE9F0B
static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0xF23340, vehicle); } // 0x31B58D7972181BFA
static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF233A0, vehicle, health); } // 0xDF9DC0584881B7AF
static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int ms) { return invoke<BOOL>(0xF233F0, vehicle, p1, ms); } // 0xA24B9FF9863A909D
static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { invoke<Void>(0xF23480, vehicle, nullAttributes); } // 0x3CA4868519920C8D
static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck) { return invoke<BOOL>(0xF234D0, vehicle, isOnFireCheck); } // 0xD9F5E1FEFD1329E4
static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0xF23560, vehicle, owned); } // 0x983B8E72C35B01F2
static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23600, vehicle, toggle); } // 0x2165BE2A3E719A31
static void SET_VEHICLE_BLIP_THROTTLE_RANDOMLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF236A0, vehicle, p1); } // 0x4058D9ECF3B8E2FC
static void SET_POLICE_FOCUS_WILL_TRACK_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23740, vehicle, toggle); } // 0x869AEF17062BE178
static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0xF237E0, vehicle, duration, mode, forever); } // 0xAA8884A4BB5B0167
static void SET_VEHICLE_IN_CAR_MOD_SHOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF238B0, vehicle, toggle); } // 0x20DA3970E29472BE
static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23910, vehicle, toggle); } // 0x5FE0938FDE9B0958
static const char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xF239B0, modelHash); } // 0x93E7527CFECC7CD8
static const char* GET_MAKE_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xF23A30, modelHash); } // 0xF7AF4F159FF99F97
static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xF23AB0, vehicle, offsetX, offsetY, offsetZ); } // 0x05A904F31991BA49
static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0xF23B80, vehicle, livery); } // 0xA1C03303EC67320B
static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0xF23BE0, vehicle); } // 0xA089B04A208DBD0B
static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0xF23C40, vehicle); } // 0xBA3ECE95D3094B0F
static void SET_VEHICLE_LIVERY2(Vehicle vehicle, int livery) { invoke<Void>(0xF23CA0, vehicle, livery); } // 0x5081B6C697A334D4
static int GET_VEHICLE_LIVERY2(Vehicle vehicle) { return invoke<int>(0xF23D00, vehicle); } // 0xE423A13CB489E307
static int GET_VEHICLE_LIVERY2_COUNT(Vehicle vehicle) { return invoke<int>(0xF23D60, vehicle); } // 0xCB19A1CF94809167
static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0xF23DC0, vehicle, windowIndex); } // 0x01D37530E5C420F5
static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0xF23E40, vehicle); } // 0xFC954C8C860FAB80
static BOOL ARE_ANY_VEHICLE_SEATS_FREE(Vehicle vehicle) { return invoke<BOOL>(0xF23EA0, vehicle); } // 0x09C0E5FA1EBC1D84
static void RESET_VEHICLE_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23F10, vehicle, toggle); } // 0xD0BABF27A11D215A
static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xF23F90, vehicle, p1, p2, p3); } // 0x151B89DBEF140C19
static float GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xF24040, vehicle); } // 0x22E252733390A9A9
static float GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xF240C0, vehicle); } // 0x1F46B2A1DBF8BD25
static float GET_HELI_TAIL_BOOM_HEALTH(Vehicle vehicle) { return invoke<float>(0xF24140, vehicle); } // 0x4177E9034F7CFE38
static void SET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF241C0, vehicle, health); } // 0x05EE5180C78E4990
static void SET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF24220, vehicle, health); } // 0xE0002557891C8D8C
static BOOL SET_HELI_TAIL_BOOM_CAN_BREAK_OFF(Vehicle vehicle, BOOL toggle) { return invoke<BOOL>(0xF24280, vehicle, toggle); } // 0xF8190C7705154D4D
static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, const char* name) { invoke<Void>(0xF242D0, vehicle, name); } // 0xD1ED03B26BD64F6C
static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF242E0, vehicle, toggle); } // 0xB57A96BF24464D21
static void SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF24380, vehicle, toggle); } // 0xA964B154E331B3E9
static void SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF243D0, vehicle, toggle); } // 0xB7A736A17908838D
static void SET_VEHICLE_DISABLE_TOWING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF24470, vehicle, toggle); } // 0x3B1F6012B676860B
static BOOL GET_VEHICLE_HAS_LANDING_GEAR(Vehicle vehicle) { return invoke<BOOL>(0xF24510, vehicle); } // 0x8EC15ED9ECD1E9D0
static void CONTROL_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0xF24570, vehicle, state); } // 0xC2A036647DD761E4
static int GET_LANDING_GEAR_STATE(Vehicle vehicle) { return invoke<int>(0xF245F0, vehicle); } // 0x68F7F7C5DF6717F8
static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xF24670, x, y, z, radius); } // 0x913602ADD2D86A7A
static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0xF24770, vehicle); } // 0x53152C1272227778
static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0xF24940, vehicle); } // 0x25F4808C787100D3
static BOOL IS_VEHICLE_HIGH_DETAIL(Vehicle vehicle) { return invoke<BOOL>(0xF24980, vehicle); } // 0xB3F63B683EB1995A
static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0xF249E0, vehicleHash, vehicleAsset); } // 0x7991957B46F22F47
static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0xF24A90, vehicleAsset); } // 0x16CFE70936BA84C7
static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0xF24AC0, vehicleAsset); } // 0xCE41CD0179F8640B
static void SET_VEHICLE_TOW_TRUCK_ARM_POSITION(Vehicle vehicle, float position) { invoke<Void>(0xF24B40, vehicle, position); } // 0xF20C964ED62BD3A7
static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0xF24BF0, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); } // 0xA86C8A254D6B6F40
static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0xF24C10, towTruck, vehicle); } // 0xD4BC322888F79B7E
static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0xF24C20, vehicle); } // 0x1750AA417BEDD270
static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0xF24C50, towTruck, vehicle); } // 0x4A64AADF9B40D2AF
static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0xF24C80, towTruck); } // 0x314C37CF34534BCB
static Entity SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Entity>(0xF24D30, vehicle, p1, p2); } // 0xDD38B2935A3EAC56
static void SET_VEHICLE_BULLDOZER_ARM_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0xF24DF0, vehicle, position, p2); } // 0x741EDDC25DCDC64D
static void SET_VEHICLE_TANK_TURRET_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0xF24E10, vehicle, position, p2); } // 0x8C3B2540B29146AA
static void SET_VEHICLE_TURRET_TARGET(Vehicle vehicle, BOOL p1, float x, float y, float z, BOOL p5) { invoke<Void>(0xF24E30, vehicle, p1, x, y, z, p5); } // 0xAD263B112A654D47
static void SET_VEHICLE_TANK_STATIONARY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF24E50, vehicle, p1); } // 0x9636B030D6DE5C35
static void SET_VEHICLE_TURRET_SPEED_THIS_FRAME(Vehicle vehicle, float speed) { invoke<Void>(0xF24EB0, vehicle, speed); } // 0x17AB03DCC210B35D
static void DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xF24EC0, vehicle); } // 0x9A81B26B3D3B37C7
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle vehicle, float angleRatio) { invoke<Void>(0xF24ED0, vehicle, angleRatio); } // 0x2808DFFEC5749CCF
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(Vehicle vehicle, float angle) { invoke<Void>(0xF24F40, vehicle, angle); } // 0x33D71CD5D987771E
static float GET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle plane) { return invoke<float>(0xF24FB0, plane); } // 0xCEE6D67EEF78C2D7
static void SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25020, vehicle, toggle); } // 0xF9FC9D29B8DD92DF
static BOOL GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0xF25080, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); } // 0x8D6ED2284F9E6186
static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25170, vehicle, toggle); } // 0xDD76094F9005AA09
static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0xF251D0, vehicle); } // 0x379AF4B11FE63CAF
static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25240, vehicle, toggle); } // 0xF8EC8E90E8D24CA7
static void SET_VEHICLE_REDUCE_GRIP_LEVEL(Vehicle vehicle, int val) { invoke<Void>(0xF252C0, vehicle, val); } // 0xFCF78891ECB409E9
static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0xF25320, vehicle, turnSignal, toggle); } // 0x78004905636369DF
static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25430, vehicle, toggle); } // 0xE456FB21FF21AE99
static void SET_VEHICLE_TAIL_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF254D0, vehicle, toggle); } // 0x76FD0E61CB6D5162
static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25530, vehicle, toggle); } // 0xB2FD24D644A68449
static void SET_VEHICLE_BRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25600, vehicle, toggle); } // 0x9F571FBA7F9412D5
static void INSTANTLY_FILL_VEHICLE_POPULATION() { invoke<Void>(0xF25650); } // 0x6874AA782954505E
static BOOL HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() { return invoke<BOOL>(0xF25660); } // 0xEA02634993F717CE
static void NETWORK_ENABLE_EMPTY_CROWDING_VEHICLES_REMOVAL(BOOL toggle) { invoke<Void>(0xF25680, toggle); } // 0x71052C5B6562E5BD
static void NETWORK_CAP_EMPTY_CROWDING_VEHICLES_REMOVAL(int p0) { invoke<Void>(0xF256A0, p0); } // 0xA4109B4CEC071346
static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0xF256B0, vehicle, trailer); } // 0x20974C28142EB370
static Vehicle _GET_VEHICLE_TRAILER_PARENT_VEHICLE(Vehicle trailer) { return invoke<Vehicle>(0xF25780, trailer); } // 0x5FC7CC4DB8966A85
static void SET_VEHICLE_USES_LARGE_REAR_RAMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF257F0, vehicle, toggle); } // 0xF651C20D31115698
static void SET_VEHICLE_RUDDER_BROKEN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25890, vehicle, toggle); } // 0x8A86075A9E1BF05A
static void SET_CONVERTIBLE_ROOF_LATCH_STATE(Vehicle vehicle, BOOL state) { invoke<Void>(0xF25A10, vehicle, state); } // 0xC48C7879875CFB60
static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0xF25A70, vehicle); } // 0x66C1D6E6DBF7AC9B
static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0xF25AA0, vehicle); } // 0xCDAF96205BABA4DC
static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0xF25AD0, vehicle); } // 0x122F64C5BECB5454
static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0xF25B00, vehicle); } // 0x7FAB20829167D06E
static float GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Hash modelHash) { return invoke<float>(0xF25B30, modelHash); } // 0xCF85F9C6CDF5D68E
static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0xF25BE0, modelHash); } // 0xB617B59F8F888D2A
static float GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(Hash modelHash) { return invoke<float>(0xF25CB0, modelHash); } // 0xB245818227933E3A
static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0xF25D90, modelHash); } // 0x859EED8E8B695F08
static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0xF25E70, modelHash); } // 0x1C6BE134527C543C
static float GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(Hash modelHash) { return invoke<float>(0xF25F30, modelHash); } // 0xD92F8845433585F0
static float GET_FLYING_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0xF25F60, modelHash); } // 0x4978F96428784EA4
static float GET_BOAT_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0xF25F90, modelHash); } // 0x25C4079E4C1D71E8
static float GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(int vehicleClass) { return invoke<float>(0xF26050, vehicleClass); } // 0xF5997120A0F53CD2
static float GET_VEHICLE_CLASS_MAX_TRACTION(int vehicleClass) { return invoke<float>(0xF26090, vehicleClass); } // 0x2525977066141996
static float GET_VEHICLE_CLASS_MAX_AGILITY(int vehicleClass) { return invoke<float>(0xF260E0, vehicleClass); } // 0x3EFC9FBA218CD076
static float GET_VEHICLE_CLASS_MAX_ACCELERATION(int vehicleClass) { return invoke<float>(0xF26130, vehicleClass); } // 0x47F48D6E64EE2C11
static float GET_VEHICLE_CLASS_MAX_BRAKING(int vehicleClass) { return invoke<float>(0xF26180, vehicleClass); } // 0x16C1ECD6E377277D
static int ADD_ROAD_NODE_SPEED_ZONE(float x, float y, float z, float radius, float speed, BOOL p5) { return invoke<int>(0xF261D0, x, y, z, radius, speed, p5); } // 0x44589DAC2564FF02
static BOOL REMOVE_ROAD_NODE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0xF26280, speedzone); } // 0x1B3217FCFCCC3FCF
static void OPEN_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0xF262C0, vehicle); } // 0xE2F63CAB8DDA4016
static void CLOSE_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0xF26340, vehicle); } // 0x248319A8E9EA4DA3
static BOOL GET_ARE_BOMB_BAY_DOORS_OPEN(Vehicle aircraft) { return invoke<BOOL>(0xF263C0, aircraft); } // 0x94F61A08FC26ECDF
static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xF26450, vehicle); } // 0xC536067E456DED6C
static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { invoke<Void>(0xF26520, heli, toggle, canBeUsedByAI); } // 0x130DC0384195C42E
static BOOL DOES_VEHICLE_HAVE_SEARCHLIGHT(Vehicle vehicle) { return invoke<BOOL>(0xF26540, vehicle); } // 0x8B8BD77BD5CC1D17
static BOOL IS_ENTRY_POINT_FOR_SEAT_CLEAR(Ped ped, Vehicle vehicle, int seatIndex, BOOL side, BOOL onEnter) { return invoke<BOOL>(0xF265F0, ped, vehicle, seatIndex, side, onEnter); } // 0x848DE0A81098ECCB
static Vector3 GET_ENTRY_POINT_POSITION(Vehicle vehicle, int doorId) { return invoke<Vector3>(0xF26630, vehicle, doorId); } // 0x7902AD09BBD23276
static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xF26720, vehicle, seatIndex); } // 0x2955FC7A22330E7F
static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0xF267D0, vehicle); } // 0x90E3EAFF8AAA1A42
static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0xF26830, vehicle, modKit); } // 0xB5AD06DDA85E2E8F
static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0xF268A0, vehicle); } // 0xA9DFDFED12311CA7
static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0xF26900, vehicle); } // 0xB79F51ED32ADD424
static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0xF26970, vehicle); } // 0x6A375D21624F9187
static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0xF269D0, vehicle, WheelType); } // 0xE33678A9AE50A01B
static int GET_NUM_MOD_COLORS(int paintType, BOOL p1) { return invoke<int>(0xF26A70, paintType, p1); } // 0x2A2B5BAE280E2FFA
static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int pearlescentColor) { invoke<Void>(0xF26B10, vehicle, paintType, color, pearlescentColor); } // 0xA5277ECCD081FCC1
static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0xF26BA0, vehicle, paintType, color); } // 0x941B1F179D6AE19A
static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* pearlescentColor) { invoke<Void>(0xF26C30, vehicle, paintType, color, pearlescentColor); } // 0xB8090FC59766A88C
static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0xF26CE0, vehicle, paintType, color); } // 0x07AE5F5D5A7D0936
static const char* GET_VEHICLE_MOD_COLOR_1_NAME(Vehicle vehicle, BOOL p1) { return invoke<const char*>(0xF26D80, vehicle, p1); } // 0x74CB4C4C883007E5
static const char* GET_VEHICLE_MOD_COLOR_2_NAME(Vehicle vehicle) { return invoke<const char*>(0xF26E10, vehicle); } // 0x598200EB0DCC8A9D
static BOOL HAVE_VEHICLE_MODS_STREAMED_IN(Vehicle vehicle) { return invoke<BOOL>(0xF26E90, vehicle); } // 0xA7A8B7E924089F0A
static BOOL IS_VEHICLE_MOD_GEN9_EXCLUSIVE(Vehicle vehicle, int modType, int modIndex) { return invoke<BOOL>(0xF26EF0, vehicle, modType, modIndex); } // 0xAF82FE1B3E949337
static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0xF26F80, vehicle, modType, modIndex, customTires); } // 0x8450270DC5896D39
static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0xF27060, vehicle, modType); } // 0x94C9CD3D66808551
static int GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<int>(0xF27140, vehicle, modType); } // 0xEFDD8C5443F6C9E4
static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0xF27210, vehicle, modType); } // 0x5B59C12A02157D00
static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0xF272B0, vehicle, modType); } // 0xC87E4FAD00AEDD4B
static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0xF27380, vehicle, modType, toggle); } // 0xF5501FF9869DAC7C
static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0xF27410, vehicle, modType); } // 0x1D5A665629D417A7
static const char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<const char*>(0xF27490, vehicle, modType, modValue); } // 0x1340575A0EEE0622
static const char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<const char*>(0xF27540, vehicle, modType); } // 0x04A81F937A270775
static const char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<const char*>(0xF275E0, vehicle, liveryIndex); } // 0x48C57B247498FD02
static int GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<int>(0xF27660, vehicle, modType, modIndex); } // 0x648F2586F927249D
static Hash GET_VEHICLE_MOD_IDENTIFIER_HASH(Vehicle vehicle, int modType, int modIndex) { return invoke<Hash>(0xF27690, vehicle, modType, modIndex); } // 0xC90C649EB3EB4B1B
static void PRELOAD_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex) { invoke<Void>(0xF276C0, vehicle, modType, modIndex); } // 0x714EDA9C467D9D0A
static BOOL HAS_PRELOAD_MODS_FINISHED(Vehicle vehicle) { return invoke<BOOL>(0xF27760, vehicle); } // 0x3AACF4E05C1E40E0
static void RELEASE_PRELOAD_MODS(Vehicle vehicle) { invoke<Void>(0xF277C0, vehicle); } // 0xFB54FC989415871E
static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF27810, vehicle, r, g, b); } // 0x5DA0536AEAD1FF31
static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF27870, vehicle, r, g, b); } // 0x9D35AABAEE206518
static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0xF278E0, vehicle, tint); } // 0xFE620ED8E0A3C209
static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0xF27930, vehicle); } // 0xDA63CE76F9AAB439
static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0xF279A0); } // 0xAC574D1AAC70DD29
static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF279C0, vehicle, r, g, b); } // 0x8D3F11438EEDD7D2
static int GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(Vehicle vehicle) { return invoke<int>(0xF279E0, vehicle); } // 0xEEBEB450F9417D7F
static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0xF27A00, vehicle); } // 0xC713B16D0F5FBF9D
static void OVERRIDE_PLANE_DAMAGE_THREHSOLD(Vehicle vehicle, float health) { invoke<Void>(0xF27A50, vehicle, health); } // 0x9DBF1E37DC1A1F46
static BOOL GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xF27BC0, vehicle); } // 0xB4A09397270CB974
static BOOL GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xF27C40, vehicle); } // 0x08046513BC06BFBC
static BOOL GET_BOTH_VEHICLE_HEADLIGHTS_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xF27CC0, vehicle); } // 0xADBCF06C9348EEF5
static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float value) { invoke<Void>(0xF27D20, vehicle, value); } // 0xAC89BB42FE09CC80
static void SET_VEHICLE_MAX_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF27D30, vehicle, speed); } // 0x8E9B5F00B41A9F8C
static void SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF27D80, vehicle, toggle); } // 0x336AED9579B3D098
static void SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF27E20, vehicle, p1); } // 0x30415B9FFAC70D2C
static void SET_PEDS_CAN_FALL_OFF_THIS_VEHICLE_FROM_LARGE_FALL_DAMAGE(Vehicle vehicle, BOOL toggle, float p2) { invoke<Void>(0xF27EB0, vehicle, toggle, p2); } // 0x61D3E6830FEE218E
static int ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<int>(0xF27F80, p0, p1, p2, p3, p4, p5, p6); } // 0x6C3C28979C693FF6
static void REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(int p0) { invoke<Void>(0xF28020, p0); } // 0x2C2F55254DC331B0
static BOOL IS_ANY_PED_RAPPELLING_FROM_HELI(Vehicle vehicle) { return invoke<BOOL>(0xF28060, vehicle); } // 0x7B94DA9EDB63B904
static void SET_VEHICLE_CHEAT_POWER_INCREASE(Vehicle vehicle, float value) { invoke<Void>(0xF28090, vehicle, value); } // 0xF1C985BBEC6B6321
static void SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Any p0, BOOL p1) { invoke<Void>(0xF280E0, p0, p1); } // 0xAA588DD56719AE3A
static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xF28170, vehicle, state); } // 0xDC05A8A020E60C86
static void SWING_BOAT_BOOM_TO_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xF28210, vehicle, ratio); } // 0x53E0C0174C1459B3
static void SWING_BOAT_BOOM_FREELY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF282B0, vehicle, toggle); } // 0x501C6124BE36E301
static void ALLOW_BOAT_BOOM_TO_ANIMATE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28350, vehicle, toggle); } // 0x76D20C5FEC8EC7F1
static float GET_BOAT_BOOM_POSITION_RATIO(Vehicle vehicle) { return invoke<float>(0xF283F0, vehicle); } // 0x57C35460B8069979
static void DISABLE_PLANE_AILERON(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xF28490, vehicle, p1, p2); } // 0xEB808E35861B8782
static BOOL GET_IS_VEHICLE_ENGINE_RUNNING(Vehicle vehicle) { return invoke<BOOL>(0xF28510, vehicle); } // 0x182BD9AD1675B5DE
static void SET_VEHICLE_USE_ALTERNATE_HANDLING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28570, vehicle, toggle); } // 0x6E97FD533F10FC5C
static void SET_BIKE_ON_STAND(Vehicle vehicle, float x, float y) { invoke<Void>(0xF28630, vehicle, x, y); } // 0xD3B9FE5F9C40C8B5
static void SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF286B0, vehicle, p1); } // 0x9BC299A7D57D7CAA
static void LOCK_DOORS_WHEN_NO_LONGER_NEEDED(Vehicle vehicle) { invoke<Void>(0xF28750, vehicle); } // 0x5A78FA8C86A9587A
static void SET_LAST_DRIVEN_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF287A0, vehicle); } // 0xC9BBB26582F3058A
static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0xF287F0); } // 0x1D25F777D0165BF3
static void CLEAR_LAST_DRIVEN_VEHICLE() { invoke<Void>(0xF28820); } // 0x5314C41B6FA61336
static void SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28830, vehicle, toggle); } // 0xE8EF17ECD68C900D
static void SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Vehicle plane, int height) { invoke<Void>(0xF288D0, plane, height); } // 0x1B8AC60684718568
static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xF288E0, vehicle, multiplier); } // 0xB344489A3C5FFBBB
static void SET_VEHICLE_CAN_SAVE_IN_GARAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28930, vehicle, toggle); } // 0xC13B5C4CC421EA79
static int GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(Vehicle vehicle) { return invoke<int>(0xF289D0, vehicle); } // 0x4FD9D8C197FF8A52
static int GET_VEHICLE_NUM_OF_BROKEN_LOOSEN_PARTS(Vehicle vehicle) { return invoke<int>(0xF28A30, vehicle); } // 0xD5AA1C942B6D68DD
static void SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Any p0, BOOL p1) { invoke<Void>(0xF28A90, p0, p1); } // 0xA7C024F5E73C2EE0
static void SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28B30, vehicle, toggle); } // 0x6A59D337CB7DD7E0
static void COPY_VEHICLE_DAMAGES(Vehicle sourceVehicle, Vehicle targetVehicle) { invoke<Void>(0xF28BD0, sourceVehicle, targetVehicle); } // 0xF9639F1B33AF0EF8
static void DISABLE_VEHICLE_EXPLOSION_BREAK_OFF_PARTS() { invoke<Void>(0xF28C60); } // 0x5CB3E2A3FC6B7543
static void SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(float distance) { invoke<Void>(0xF28C70, distance); } // 0x1BE70491AADA5F80
static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { invoke<Void>(0xF28C90, driver, entity, xTarget, yTarget, zTarget); } // 0xD2A388162B1121E3
static BOOL GET_VEHICLE_LOCK_ON_TARGET(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0xF28CB0, vehicle, entity); } // 0xE5EF4685EE5EF675
static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28D20, vehicle, toggle); } // 0x2814BEDF5E0AF4C0
static void SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(Vehicle vehicle, float p1) { invoke<Void>(0xF28DC0, vehicle, p1); } // 0x5D97A268AAF6B6AB
static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0xF28E20, vehicle); } // 0xA42AC01E0317ED99
static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0xF28E80, vehicle); } // 0x8FBF79AC214E3747
static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0xF28EC0, vehicle); } // 0x4F7C7E268667C7B3
static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28F30, vehicle, toggle); } // 0x666DF5A2D9B9C2DF
static void SET_ENABLE_VEHICLE_SLIPSTREAMING(BOOL toggle) { invoke<Void>(0xF28F90, toggle); } // 0x312DFD78768FEAA0
static void SET_VEHICLE_SLIPSTREAMING_SHOULD_TIME_OUT(BOOL toggle) { invoke<Void>(0xF28FB0, toggle); } // 0xF5DE2508EEBD1684
static float GET_VEHICLE_CURRENT_TIME_IN_SLIP_STREAM(Vehicle vehicle) { return invoke<float>(0xF28FD0, vehicle); } // 0x8A278879AFDDD37B
static BOOL IS_VEHICLE_PRODUCING_SLIP_STREAM(Vehicle vehicle) { return invoke<BOOL>(0xF29020, vehicle); } // 0x69347FDCD85BCA24
static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29080, vehicle, toggle); } // 0x905AE697A8F8A694
static void SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29190, vehicle, toggle); } // 0xF2FCE3F2F4D0CB50
static BOOL IS_VEHICLE_SPRAYABLE(Vehicle vehicle) { return invoke<BOOL>(0xF29230, vehicle); } // 0xE61689C28FFE2DAF
static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29290, vehicle, toggle); } // 0xF9DF73BCBDB93008
static void DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle, int p1, int p2) { invoke<Void>(0xF29340, vehicle, p1, p2); } // 0xFB9F77A8FFB0897E
static void ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle) { invoke<Void>(0xF293C0, vehicle); } // 0x43AF47D2A857D51A
static BOOL IS_PLANE_LANDING_GEAR_INTACT(Vehicle plane) { return invoke<BOOL>(0xF29400, plane); } // 0x61F41693A4648B46
static BOOL ARE_PLANE_PROPELLERS_INTACT(Vehicle plane) { return invoke<BOOL>(0xF29480, plane); } // 0x7C1AFBB397B1066E
static BOOL SET_PLANE_PROPELLER_HEALTH(Vehicle plane, float health) { return invoke<BOOL>(0xF294F0, plane, health); } // 0x6C0C380EEAAFA7E3
static void SET_VEHICLE_CAN_DEFORM_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29560, vehicle, toggle); } // 0x1E00EF437AE43BB8
static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0xF29610, vehicle); } // 0xFDA2576D37032738
static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0xF29670, vehicle, isStolen); } // 0xD37CA6D6F8993BB9
static void SET_PLANE_TURBULENCE_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xF29700, vehicle, multiplier); } // 0x540E1993D47EAF4B
static BOOL ARE_WINGS_OF_PLANE_INTACT(Vehicle plane) { return invoke<BOOL>(0xF29780, plane); } // 0x287065449969E42F
static void ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(Vehicle vehicle) { invoke<Void>(0xF29810, vehicle); } // 0xCD01772CECE254A3
static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0xF29820, vehicle, cargobob); } // 0x84448CC61691D994
static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0xF29830, vehicle); } // 0x9A2C1A81F938D584
static BOOL DETACH_ENTITY_FROM_CARGOBOB(Vehicle cargobob, Entity entity) { return invoke<BOOL>(0xF29890, cargobob, entity); } // 0x9CF923758A7DEF91
static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0xF298A0, cargobob, vehicleAttached); } // 0x4160C3716329E630
static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0xF298D0, cargobob); } // 0x79FCDCFB75A2E31B
static Entity GET_ENTITY_ATTACHED_TO_CARGOBOB(Any p0) { return invoke<Entity>(0xF298F0, p0); } // 0xA60E0FC9E433408C
static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0xF29910, vehicle, cargobob, p2, x, y, z); } // 0x47B74B49AC74FAF4
static void ATTACH_ENTITY_TO_CARGOBOB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF29930, p0, p1, p2, p3, p4, p5); } // 0x129361AA74CBB732
static void SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(Vehicle cargobob, BOOL toggle) { invoke<Void>(0xF29950, cargobob, toggle); } // 0xA205F1BC1E1E70CF
static void SET_CARGOBOB_EXCLUDE_FROM_PICKUP_ENTITY(Any p0, Any p1) { invoke<Void>(0xF29970, p0, p1); } // 0x9E3907AACB2EE9A3
static BOOL CAN_CARGOBOB_PICK_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xF29980, p0, p1); } // 0xC7654AAAA57E8D28
static Vector3 GET_ATTACHED_PICK_UP_HOOK_POSITION(Vehicle cargobob) { return invoke<Vector3>(0xF299B0, cargobob); } // 0xA22032FB8CF69F27
static BOOL DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Vehicle cargobob) { return invoke<BOOL>(0xF29B10, cargobob); } // 0x93EBA5A2C85D82E7
static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob, int state) { invoke<Void>(0xF29BC0, cargobob, state); } // 0xD0E90E9B5A87913E
static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob) { invoke<Void>(0xF29BD0, cargobob); } // 0x22697BCF9D7EB9FF
static void SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Vehicle cargobob, float length1, float length2, BOOL p3) { invoke<Void>(0xF29C30, cargobob, length1, length2, p3); } // 0x17B5AACACF266B6A
static void SET_PICKUP_ROPE_LENGTH_WITHOUT_CREATING_ROPE_FOR_CARGOBOB(Any p0, Any p1, Any p2) { invoke<Void>(0xF29C50, p0, p1, p2); } // 0x907862D7EED879DE
static void SET_CARGOBOB_PICKUP_ROPE_DAMPING_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0xF29C70, p0, p1); } // 0x88A79760AFFC278F
static void SET_CARGOBOB_PICKUP_ROPE_TYPE(Any p0, Any p1) { invoke<Void>(0xF29C80, p0, p1); } // 0xAA54E339BD273E82
static BOOL DOES_CARGOBOB_HAVE_PICKUP_MAGNET(Vehicle cargobob) { return invoke<BOOL>(0xF29CE0, cargobob); } // 0x55250754D66E3652
static void SET_CARGOBOB_PICKUP_MAGNET_ACTIVE(Vehicle cargobob, BOOL isActive) { invoke<Void>(0xF29D90, cargobob, isActive); } // 0x279E935A91EF72DA
static void SET_CARGOBOB_PICKUP_MAGNET_STRENGTH(Vehicle cargobob, float strength) { invoke<Void>(0xF29DB0, cargobob, strength); } // 0x8E7F0FC0E58A6331
static void SET_CARGOBOB_PICKUP_MAGNET_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0xF29E60, cargobob, p1); } // 0x24FDC1440EEAE053
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0xF29F10, cargobob, p1); } // 0xAF22CCA1763E6B1F
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0xF29FC0, cargobob, p1); } // 0xEBF4A581695418A5
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0xF2A070, cargobob, p1); } // 0x99B282132C4AB6DA
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_ROPE_LENGTH(Vehicle vehicle, float p1) { invoke<Void>(0xF2A120, vehicle, p1); } // 0x529A57C2E61B1345
static void SET_CARGOBOB_PICKUP_MAGNET_SET_TARGETED_MODE(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0xF2A1D0, vehicle, cargobob); } // 0x9E33FC86B0212DAB
static void SET_CARGOBOB_PICKUP_MAGNET_SET_AMBIENT_MODE(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xF2A1E0, vehicle, p1, p2); } // 0x57F9AA96B2E7702A
static void SET_CARGOBOB_PICKUP_MAGNET_ENSURE_PICKUP_ENTITY_UPRIGHT(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2A200, vehicle, p1); } // 0x220D7AA717CC835C
static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0xF2A2A0, vehicle); } // 0x3665875382B5AB69
static void SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2A320, vehicle, p1); } // 0xB0EBCEBA08F63848
static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0xF2A380, disabled, weaponHash, vehicle, owner); } // 0x267A7225DAF1CD41
static BOOL IS_VEHICLE_WEAPON_DISABLED(Hash weaponHash, Vehicle vehicle, Ped owner) { return invoke<BOOL>(0xF2A3A0, weaponHash, vehicle, owner); } // 0x27058ECA3C640709
static void SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A3D0, vehicle, toggle); } // 0x43176180326D6988
static void SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A470, vehicle, toggle); } // 0x8AFDFB10F32CB1A8
static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0xF2A530, vehicle); } // 0x5506AFBD6056C05F
static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0xF2A590, modelHash); } // 0xE074F21A4084FD1F
static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF2A600, vehicle); } // 0xE3A0299C9DEE59C8
static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A650, vehicle, toggle); } // 0xD0794C48F637F16C
static void SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0xF2A700, vehicle, p1); } // 0x97FB44DEA703EB10
static void SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A7A0, vehicle, toggle); } // 0x9E62B9416FD53EBA
static void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A820, vehicle, toggle); } // 0xC0DB690A927487AE
static void SET_VEHICLE_IMPATIENCE_TIMER(Vehicle vehicle, Any p1) { invoke<Void>(0xF2A8C0, vehicle, p1); } // 0x740CB8455C25DD1C
static void SET_VEHICLE_HANDLING_OVERRIDE(Vehicle vehicle, Hash hash) { invoke<Void>(0xF2A910, vehicle, hash); } // 0x753758951C769A4A
static void SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Vehicle vehicle, int range) { invoke<Void>(0xF2A960, vehicle, range); } // 0x8C1172B230F4EB1A
static void SET_VEHICLE_STEERING_BIAS_SCALAR(Any p0, float p1) { invoke<Void>(0xF2A9A0, p0, p1); } // 0xDC3F37138B82ACCA
static void SET_HELI_CONTROL_LAGGING_RATE_SCALAR(Vehicle helicopter, float multiplier) { invoke<Void>(0xF2AA00, helicopter, multiplier); } // 0x348B16EB27AA1C60
static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0xF2AA70, vehicle, friction); } // 0xF5E7FBE3D9D9BC24
static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AAC0, vehicle, toggle); } // 0x7300EAE2F99BE3B7
static BOOL ARE_PLANE_CONTROL_PANELS_INTACT(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xF2AB60, vehicle, p1); } // 0xE5ECA5B21BBFA1E5
static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0xF2ABD0, vehicle, height); } // 0x5F7FDF6769E8DD84
static void SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AC40, vehicle, toggle); } // 0xDDBBC2472DA87217
static void CLEAR_VEHICLE_ROUTE_HISTORY(Vehicle vehicle) { invoke<Void>(0xF2AC90, vehicle); } // 0xD2B08CD9D81655CE
static Vehicle DOES_VEHICLE_EXIST_WITH_DECORATOR(const char* decorator) { return invoke<Vehicle>(0xF2ACE0, decorator); } // 0x824A2D0AB16C9E1A
static void SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AD10, vehicle, toggle); } // 0x863A048DC4DBB2FE
static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped ped, int index) { invoke<Void>(0xF2ADB0, vehicle, ped, index); } // 0x630992D07A32281B
static BOOL IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(Ped ped, Vehicle vehicle, int* outIndex) { return invoke<BOOL>(0xF2ADD0, ped, vehicle, outIndex); } // 0x4877F2B0D2101BDE
static void DISABLE_INDIVIDUAL_PLANE_PROPELLER(Vehicle vehicle, int propeller) { invoke<Void>(0xF2AE90, vehicle, propeller); } // 0x36746293A73925EB
static void SET_VEHICLE_FORCE_AFTERBURNER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AF50, vehicle, toggle); } // 0xA43283449133E803
static void SET_DONT_PROCESS_VEHICLE_GLASS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AFF0, vehicle, toggle); } // 0xE0ACB5BC9D603F02
static void SET_DISABLE_WANTED_CONES_RESPONSE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B040, vehicle, toggle); } // 0xAEC7FB421829031C
static void SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B090, vehicle, toggle); } // 0xB6D03E3DBCAF727F
static void SET_ARRIVE_DISTANCE_OVERRIDE_FOR_VEHICLE_PERSUIT_ATTACK(Vehicle vehicle, float p1) { invoke<Void>(0xF2B0E0, vehicle, p1); } // 0x8D12590141B620B3
static void SET_VEHICLE_READY_FOR_CLEANUP(Any p0) { invoke<Void>(0xF2B130, p0); } // 0xDB3813D934CC6718
static void SET_DISTANT_CARS_ENABLED(BOOL toggle) { invoke<Void>(0xF2B170, toggle); } // 0x40124D3C22E7C332
static void SET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF2B190, vehicle, r, g, b); } // 0xEAB8A43F6621850F
static void SET_VEHICLE_NEON_INDEX_COLOUR(Vehicle vehicle, int index) { invoke<Void>(0xF2B250, vehicle, index); } // 0x44612E772F9312E9
static void GET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF2B2E0, vehicle, r, g, b); } // 0x64FEACF0AD019F1F
static void SET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0xF2B360, vehicle, index, toggle); } // 0xE62930EC6FAABCA5
static BOOL GET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0xF2B410, vehicle, index); } // 0xF1B79038130E3C08
static void SET_AMBIENT_VEHICLE_NEON_ENABLED(BOOL p0) { invoke<Void>(0xF2B4C0, p0); } // 0xCD06D7490DF9B6BA
static void SUPPRESS_NEONS_ON_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B4E0, vehicle, toggle); } // 0xBDCFCDA63931E498
static void SET_DISABLE_SUPERDUMMY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2B530, vehicle, p1); } // 0x1AA970FDD6C143E2
static void REQUEST_VEHICLE_DIAL(Vehicle vehicle) { invoke<Void>(0xF2B5C0, vehicle); } // 0x4C8F181F63537DD2
static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0xF2B610, vehicle); } // 0x3B5692CB240DBC2F
static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0xF2B670, vehicle, value); } // 0x3E7E7AD923FD91A7
static void GET_VEHICLE_SIZE(Vehicle vehicle, Vector3* out1, Vector3* out2) { invoke<Void>(0xF2B6F0, vehicle, out1, out2); } // 0xB07407B3B153C760
static float GET_FAKE_SUSPENSION_LOWERING_AMOUNT(Vehicle vehicle) { return invoke<float>(0xF2B790, vehicle); } // 0xF7553BA24C0AB0B2
static void SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(float multiplier) { invoke<Void>(0xF2B800, multiplier); } // 0x3511D41891789DA6
static int GET_NUMBER_OF_VEHICLE_DOORS(Vehicle vehicle) { return invoke<int>(0xF2B820, vehicle); } // 0x860632F4716956DF
static void SET_HYDRAULICS_CONTROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B870, vehicle, toggle); } // 0x2B773DB19587707D
static void SET_CAN_ADJUST_GROUND_CLEARANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2B890, vehicle, p1); } // 0x30825986EF0F9E48
static float GET_VEHICLE_HEALTH_PERCENTAGE(Vehicle vehicle, float maxEngineHealth, float maxPetrolTankHealth, float maxBodyHealth, float maxMainRotorHealth, float maxTailRotorHealth, float maxUnkHealth) { return invoke<float>(0xF2B920, vehicle, maxEngineHealth, maxPetrolTankHealth, maxBodyHealth, maxMainRotorHealth, maxTailRotorHealth, maxUnkHealth); } // 0xA9EDF0DFAF70EAD4
static BOOL GET_VEHICLE_IS_MERCENARY(Vehicle vehicle) { return invoke<BOOL>(0xF2B9E0, vehicle); } // 0x97CDBE6B72277F6A
static void SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2BA40, vehicle, p1); } // 0xA7F7529CFB6F1EA7
static void SET_VEHICLE_KERS_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BA90, vehicle, toggle); } // 0xF629ED9089543196
static BOOL GET_VEHICLE_HAS_KERS(Vehicle vehicle) { return invoke<BOOL>(0xF2BAF0, vehicle); } // 0xF548473734CBB33B
static void SET_PLANE_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BB50, vehicle, toggle); } // 0x3DCEE0B40D1FEC94
static void SET_HELI_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BBF0, vehicle, toggle); } // 0xCA2403168E81B9CB
static void SET_DISABLE_BMX_EXTRA_TRICK_FORCES(Any p0) { invoke<Void>(0xF2BCA0, p0); } // 0xB65B0A6A52A484B5
static void SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId, float value) { invoke<Void>(0xF2BCC0, vehicle, wheelId, value); } // 0x0987D0FA30D602B0
static float GET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId) { return invoke<float>(0xF2BCE0, vehicle, wheelId); } // 0xB9E9F6A235CE5516
static void SET_CAN_USE_HYDRAULICS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BDD0, vehicle, toggle); } // 0x6B64B565F7C0BE14
static void SET_HYDRAULIC_VEHICLE_STATE(Vehicle vehicle, int state) { invoke<Void>(0xF2BDF0, vehicle, state); } // 0xA15CBF61198EE519
static void SET_HYDRAULIC_WHEEL_STATE(Vehicle vehicle, int wheelId, int state, float value, Any p4) { invoke<Void>(0xF2BE00, vehicle, wheelId, state, value, p4); } // 0x640BC0200CE90880
static BOOL HAS_VEHICLE_PETROLTANK_SET_ON_FIRE_BY_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xF2BE20, p0, p1); } // 0xB8E85A4A8536807D
static void CLEAR_VEHICLE_PETROLTANK_FIRE_CULPRIT(Vehicle vehicle) { invoke<Void>(0xF2BEC0, vehicle); } // 0x60D610F2649E805B
static void SET_VEHICLE_BOBBLEHEAD_VELOCITY(float x, float y, float p2) { invoke<Void>(0xF2BF20, x, y, p2); } // 0x5F6C263433E7851E
static BOOL GET_VEHICLE_IS_DUMMY(Any p0) { return invoke<BOOL>(0xF2BF80, p0); } // 0x38779AA6147A1831
static BOOL SET_VEHICLE_DAMAGE_SCALE(Vehicle vehicle, float p1) { return invoke<BOOL>(0xF2BFE0, vehicle, p1); } // 0x271D0AA5ADF266EA
static BOOL SET_VEHICLE_WEAPON_DAMAGE_SCALE(Vehicle vehicle, float multiplier) { return invoke<BOOL>(0xF2C080, vehicle, multiplier); } // 0x7442AD74A851EC7B
static BOOL SET_DISABLE_DAMAGE_WITH_PICKED_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xF2C0D0, p0, p1); } // 0x793D2505EE281DDD
static void SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0xF2C120, p0, p1); } // 0xAF324DD73DD8C045
static void SET_BIKE_EASY_TO_LAND(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2C170, vehicle, toggle); } // 0x77950FC099D3FB4D
static void SET_INVERT_VEHICLE_CONTROLS(Vehicle vehicle, BOOL state) { invoke<Void>(0xF2C1C0, vehicle, state); } // 0x784F0E1BBD6301B6
static void SET_SPEED_BOOST_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0xF2C210, disabled); } // 0x42B109962C4D43EC
static void SET_SLOW_DOWN_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0xF2C230, disabled); } // 0x0A158DF97B623950
static void SET_FORMATION_LEADER(Vehicle vehicle, float x, float y, float z, float p4) { invoke<Void>(0xF2C250, vehicle, x, y, z, p4); } // 0x5E0F6A0ED51BB6A8
static void RESET_FORMATION_LEADER() { invoke<Void>(0xF2C2F0); } // 0xDFF07C5495BDA6ED
static BOOL GET_IS_BOAT_CAPSIZED(Vehicle vehicle) { return invoke<BOOL>(0xF2C300, vehicle); } // 0x656463C707D8CCC9
static void SET_ALLOW_RAMMING_SOOP_OR_RAMP(Any p0, Any p1) { invoke<Void>(0xF2C360, p0, p1); } // 0xF977D20CFFFD341F
static void SET_SCRIPT_RAMP_IMPULSE_SCALE(Vehicle vehicle, float impulseScale) { invoke<Void>(0xF2C3B0, vehicle, impulseScale); } // 0xABCBEEA1CC0701DC
static BOOL GET_IS_DOOR_VALID(Vehicle vehicle, int doorId) { return invoke<BOOL>(0xF2C400, vehicle, doorId); } // 0xB3E28598CA656061
static void SET_SCRIPT_ROCKET_BOOST_RECHARGE_TIME(Vehicle vehicle, float seconds) { invoke<Void>(0xF2C480, vehicle, seconds); } // 0x3088D7B1F0BD8975
static BOOL GET_HAS_ROCKET_BOOST(Vehicle vehicle) { return invoke<BOOL>(0xF2C550, vehicle); } // 0xA03728CC57F6DD36
static BOOL IS_ROCKET_BOOST_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xF2C5B0, vehicle); } // 0x772683F12F46CE82
static void SET_ROCKET_BOOST_ACTIVE(Vehicle vehicle, BOOL active) { invoke<Void>(0xF2C620, vehicle, active); } // 0x5B29AF88D03CEB7A
static BOOL GET_HAS_RETRACTABLE_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xF2C640, vehicle); } // 0xBFDFDBE09E616B61
static BOOL GET_IS_WHEELS_RETRACTED(Vehicle vehicle) { return invoke<BOOL>(0xF2C6A0, vehicle); } // 0x7F90FF957E7FF50A
static void SET_WHEELS_EXTENDED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0xF2C710, vehicle); } // 0xAB4E52390141B4E7
static void SET_WHEELS_RETRACTED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0xF2C760, vehicle); } // 0xC61B49A4C6C60411
static BOOL GET_CAR_HAS_JUMP(Vehicle vehicle) { return invoke<BOOL>(0xF2C7B0, vehicle); } // 0x9D019545E8C959C6
static void SET_USE_HIGHER_CAR_JUMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2C810, vehicle, toggle); } // 0x5191631D395FDE9C
static void SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2C860, vehicle, toggle); } // 0xA133EF296C37D6E6
static void SET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex, int capacity) { invoke<Void>(0xF2C8B0, vehicle, weaponIndex, capacity); } // 0x5951A2AB1DF37E03
static int GET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex) { return invoke<int>(0xF2C910, vehicle, weaponIndex); } // 0x73C3D75DAC71F876
static BOOL GET_VEHICLE_HAS_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0xF2C970, vehicle); } // 0x1A1A32EC5122B4F0
static BOOL GET_VEHICLE_CAN_DEPLOY_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0xF2C9E0, vehicle); } // 0x5B82466A71C4A9CD
static void VEHICLE_START_PARACHUTING(Vehicle vehicle, BOOL active) { invoke<Void>(0xF2CA50, vehicle, active); } // 0xDCD94B3260CB762C
static BOOL IS_VEHICLE_PARACHUTE_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xF2CAC0, vehicle); } // 0x385CCC1DF7554BE9
static void VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2CB30, vehicle, toggle); } // 0x9F0B86B670233A83
static void VEHICLE_SET_ENABLE_RAMP_CAR_SIDE_IMPULSE(Any p0, Any p1) { invoke<Void>(0xF2CBA0, p0, p1); } // 0x9CAB1193A04940AC
static void VEHICLE_SET_ENABLE_NORMALISE_RAMP_CAR_VERTICAL_VELOCTIY(Any p0, Any p1) { invoke<Void>(0xF2CC00, p0, p1); } // 0xDCCC8272AEA5EA2C
static void VEHICLE_SET_JET_WASH_FORCE_ENABLED(Any p0) { invoke<Void>(0xF2CC60, p0); } // 0x528A16ECF4B7B5A6
static void SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2CC80, vehicle, toggle); } // 0x1A144C0743BF5890
static void SET_VEHICLE_USE_BOOST_BUTTON_FOR_WHEEL_RETRACT(BOOL toggle) { invoke<Void>(0xF2CCD0, toggle); } // 0xBC4F3DBA48761D9A
static void VEHICLE_SET_PARACHUTE_MODEL_OVERRIDE(Vehicle vehicle, Hash modelHash) { invoke<Void>(0xF2CD10, vehicle, modelHash); } // 0x85F0DD9B2A310950
static void VEHICLE_SET_PARACHUTE_MODEL_TINT_INDEX(Vehicle vehicle, int textureVariation) { invoke<Void>(0xF2CD70, vehicle, textureVariation); } // 0xB51B6AC3785890FE
static int VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0xF2CE00, p0, p1); } // 0x63CDE093822E42C4
static int VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(Any p0, Any p1) { return invoke<int>(0xF2CE10, p0, p1); } // 0xB2EEF26FE11993BB
static int VEHICLE_SET_OVERRIDE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0xF2CE20, p0, p1); } // 0x8AF1D691BC007513
static int GET_ALL_VEHICLES(Any* vehsStruct) { return invoke<int>(0xF2CE30, vehsStruct); } // 0x0D308D56EF4A935A
static void SET_CARGOBOB_EXTA_PICKUP_RANGE(Any p0, Any p1) { invoke<Void>(0xF2CE60, p0, p1); } // 0x72BECCF4B829522E
static void SET_OVERRIDE_VEHICLE_DOOR_TORQUE(Any p0, Any p1, Any p2) { invoke<Void>(0xF2CE70, p0, p1, p2); } // 0x66E3AAFACE2D1EB8
static void SET_WHEELIE_ENABLED(Vehicle vehicle, BOOL enabled) { invoke<Void>(0xF2CF00, vehicle, enabled); } // 0x1312DDD8385AEE4E
static void SET_DISABLE_HELI_EXPLODE_FROM_BODY_DAMAGE(Any p0, Any p1) { invoke<Void>(0xF2CF50, p0, p1); } // 0xEDBC8405B3895CC9
static void SET_DISABLE_EXPLODE_FROM_BODY_DAMAGE_ON_COLLISION(Vehicle vehicle, float value) { invoke<Void>(0xF2CFB0, vehicle, value); } // 0x26E13D440E7F6064
static void SET_TRAILER_ATTACHMENT_ENABLED(Any p0, Any p1) { invoke<Void>(0xF2D050, p0, p1); } // 0x2FA2494B47FDD009
static void SET_ROCKET_BOOST_FILL(Vehicle vehicle, float percentage) { invoke<Void>(0xF2D0A0, vehicle, percentage); } // 0xFEB2DDED3509562E
static void SET_GLIDER_ACTIVE(Vehicle vehicle, BOOL state) { invoke<Void>(0xF2D1A0, vehicle, state); } // 0x544996C0081ABDEB
static void SET_SHOULD_RESET_TURRET_IN_SCRIPTED_CAMERAS(Vehicle vehicle, BOOL shouldReset) { invoke<Void>(0xF2D200, vehicle, shouldReset); } // 0x78CEEE41F49F421F
static void SET_VEHICLE_DISABLE_COLLISION_UPON_CREATION(Vehicle vehicle, BOOL disable) { invoke<Void>(0xF2D250, vehicle, disable); } // 0xAF60E6A2936F982A
static void SET_GROUND_EFFECT_REDUCES_DRAG(BOOL toggle) { invoke<Void>(0xF2D2E0, toggle); } // 0x430A7631A84C9BE7
static void SET_DISABLE_MAP_COLLISION(Vehicle vehicle) { invoke<Void>(0xF2D300, vehicle); } // 0x75627043C6AA90AD
static void SET_DISABLE_PED_STAND_ON_TOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D370, vehicle, toggle); } // 0x8235F1BEAD557629
static void SET_VEHICLE_DAMAGE_SCALES(Vehicle vehicle, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF2D3C0, vehicle, p1, p2, p3, p4); } // 0x9640E30A7F395E4B
static void SET_PLANE_SECTION_DAMAGE_SCALE(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0xF2D450, vehicle, p1, p2); } // 0x0BBB9A7A8FFE931B
static void SET_HELI_CAN_PICKUP_ENTITY_THAT_HAS_PICK_UP_DISABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D520, vehicle, toggle); } // 0x94A68DA412C4007D
static void SET_VEHICLE_BOMB_AMMO(Vehicle vehicle, int bombCount) { invoke<Void>(0xF2D570, vehicle, bombCount); } // 0x8955FB58835651A2
static int GET_VEHICLE_BOMB_AMMO(Vehicle vehicle) { return invoke<int>(0xF2D5C0, vehicle); } // 0x87CB58CAE436D6A5
static void SET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle, int counterMeasureCount) { invoke<Void>(0xF2D620, vehicle, counterMeasureCount); } // 0xEC0CBF0E037FEEB0
static int GET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle) { return invoke<int>(0xF2D670, vehicle); } // 0x61B116A4C9C5B984
static void SET_HELI_COMBAT_OFFSET(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF2D6D0, vehicle, x, y, z); } // 0x57EE251558A8A187
static BOOL GET_CAN_VEHICLE_BE_PLACED_HERE(Vehicle vehicle, float x, float y, float z, float rotX, float rotY, float rotZ, int p7, Any p8) { return invoke<BOOL>(0xF2D760, vehicle, x, y, z, rotX, rotY, rotZ, p7, p8); } // 0x685A7D56318EFE6D
static void SET_DISABLE_AUTOMATIC_CRASH_TASK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D7A0, vehicle, toggle); } // 0x3423BC61BC6BD401
static void SET_SPECIAL_FLIGHT_MODE_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xF2D820, vehicle, ratio); } // 0xE70F79BDFCB8B4BC
static void SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(Vehicle vehicle, float targetRatio) { invoke<Void>(0xF2D890, vehicle, targetRatio); } // 0x7F3C8FDDAE1D6311
static void SET_SPECIAL_FLIGHT_MODE_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D900, vehicle, toggle); } // 0x16EB4EEDAA5416C4
static void SET_DISABLE_HOVER_MODE_FLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D960, vehicle, toggle); } // 0x2C97F1F248685957
static BOOL GET_OUTRIGGERS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xF2D9C0, vehicle); } // 0xCC986802D9AE877E
static Vector3 FIND_SPAWN_COORDINATES_FOR_HELI(Ped ped) { return invoke<Vector3>(0xF2DA30, ped); } // 0x67896C7A4066E42E
static void SET_DEPLOY_FOLDING_WINGS(Vehicle vehicle, BOOL deploy, BOOL p2) { invoke<Void>(0xF2DAD0, vehicle, deploy, p2); } // 0x89D51606F3FCA194
static BOOL ARE_FOLDING_WINGS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xF2DB40, vehicle); } // 0xA347DA69520FE64A
static void SET_DIP_STRAIGHT_DOWN_WHEN_CRASHING_PLANE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2DC50, vehicle, toggle); } // 0x0D1E561A4621971E
static void SET_TURRET_HIDDEN(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0xF2DCA0, vehicle, index, toggle); } // 0x6405F9D3DF61E127
static void SET_HOVER_MODE_WING_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xF2DD40, vehicle, ratio); } // 0x3D82B1EAD5216876
static void SET_DISABLE_TURRET_MOVEMENT(Vehicle vehicle, int turretId) { invoke<Void>(0xF2DDA0, vehicle, turretId); } // 0xF2B6BC6177886AEF
static void SET_FORCE_FIX_LINK_MATRICES(Vehicle vehicle) { invoke<Void>(0xF2DE30, vehicle); } // 0xD7AF89E96BDD636E
static void SET_TRANSFORM_RATE_FOR_ANIMATION(Vehicle vehicle, float transformRate) { invoke<Void>(0xF2DE70, vehicle, transformRate); } // 0xC2AA11D47F8C5153
static void SET_TRANSFORM_TO_SUBMARINE_USES_ALTERNATE_INPUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2DED0, vehicle, toggle); } // 0xF2C91BA157882B97
static void SET_VEHICLE_COMBAT_MODE(BOOL toggle) { invoke<Void>(0xF2DF40, toggle); } // 0xBE2B7EEE635434FF
static void SET_VEHICLE_DETONATION_MODE(BOOL toggle) { invoke<Void>(0xF2DF50, toggle); } // 0xC9544020DFE34A9C
static void SET_VEHICLE_SHUNT_ON_STICK(BOOL toggle) { invoke<Void>(0xF2DF60, toggle); } // 0x0BE32015EBE87354
static BOOL GET_IS_VEHICLE_SHUNTING(Vehicle vehicle) { return invoke<BOOL>(0xF2DFE0, vehicle); } // 0xF26071F4CBA82B4D
static BOOL GET_HAS_VEHICLE_BEEN_HIT_BY_SHUNT(Vehicle vehicle) { return invoke<BOOL>(0xF2E050, vehicle); } // 0x57C7BFB65495FB1A
static Vehicle GET_LAST_SHUNT_VEHICLE(Vehicle vehicle) { return invoke<Vehicle>(0xF2E0C0, vehicle); } // 0xC4DBC6C793A97252
static void SET_DISABLE_VEHICLE_EXPLOSIONS_DAMAGE(BOOL toggle) { invoke<Void>(0xF2E120, toggle); } // 0xB3AB0B43CABD4F3E
static void SET_OVERRIDE_NITROUS_LEVEL(Vehicle vehicle, BOOL toggle, float level, float power, float rechargeTime, BOOL disableSound) { invoke<Void>(0xF2E140, vehicle, toggle, level, power, rechargeTime, disableSound); } // 0x8D6D4EB2FFE77CB3
static void SET_INCREASE_WHEEL_CRUSH_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2E540, vehicle, toggle); } // 0xEB7247ECF9313934
static void SET_DISABLE_WEAPON_BLADE_FORCES(BOOL toggle) { invoke<Void>(0xF2E590, toggle); } // 0x4F80CD41C0C6F1E3
static void SET_USE_DOUBLE_CLICK_FOR_CAR_JUMP(BOOL toggle) { invoke<Void>(0xF2E5B0, toggle); } // 0x7619E49E996C8A15
static BOOL GET_DOES_VEHICLE_HAVE_TOMBSTONE(Vehicle vehicle) { return invoke<BOOL>(0xF2E5D0, vehicle); } // 0x583536248E014455
static void HIDE_TOMBSTONE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2E630, vehicle, toggle); } // 0x8EA0917E9BF68ABF
static BOOL GET_IS_VEHICLE_DISABLED_BY_EMP(Vehicle vehicle) { return invoke<BOOL>(0xF2E6E0, vehicle); } // 0x81A129E894BD7138
static void SET_DISABLE_RETRACTING_WEAPON_BLADES(BOOL toggle) { invoke<Void>(0xF2E740, toggle); } // 0x946CF11741899D4C
static float GET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex) { return invoke<float>(0xF2E760, vehicle, wheelIndex); } // 0x2F800AD09C30EAFF
static void SET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex, float health) { invoke<Void>(0xF2E7F0, vehicle, wheelIndex, health); } // 0x8110C3A5371AD12D
static float GET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex) { return invoke<float>(0xF2E8B0, vehicle, wheelIndex); } // 0xA62C98856A88DC66
static void SET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0xF2E940, vehicle, wheelIndex, multiplier); } // 0x10F7F8057FDFEF58
static void SET_TYRE_WEAR_RATE_SCALE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0xF2E9D0, vehicle, wheelIndex, multiplier); } // 0x7FFAD424E930B802
static void SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0xF2EA50, vehicle, wheelIndex, multiplier); } // 0x5442E3C4F8176CE7
static void SET_AIRCRAFT_IGNORE_HIGHTMAP_OPTIMISATION(Vehicle vehicle, int p1) { invoke<Void>(0xF2EAD0, vehicle, p1); } // 0xDA9A20F41B1D3C1B
static void SET_REDUCED_SUSPENSION_FORCE(Vehicle vehicle, BOOL enable) { invoke<Void>(0xF2EB30, vehicle, enable); } // 0xCE2ADF354D3F97AE
static void SET_DRIFT_TYRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2EB90, vehicle, toggle); } // 0x519F76A38952BBD0
static BOOL GET_DRIFT_TYRES_SET(Vehicle vehicle) { return invoke<BOOL>(0xF2EBE0, vehicle); } // 0x4497678941C27E46
static void NETWORK_USE_HIGH_PRECISION_TRAIN_BLENDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2EC40, vehicle, toggle); } // 0x0B5FFFF9010AEF80
static void SET_CHECK_FOR_ENOUGH_ROOM_FOR_PED(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2ECA0, vehicle, p1); } // 0x6A9E89C17033E79E
static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0xF2F950, x, y, z, height); } // 0xF85C2BE613AD7903
static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0xF2F980, x, y, z, height); } // 0x7CF3DDFB660E9328
static BOOL TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, Vector3* result) { return invoke<BOOL>(0xF2FAF0, x1, y1, z1, x2, y2, z2, result); } // 0x1EF8801C2AC1FE34
static int TEST_PROBE_AGAINST_ALL_WATER(float x1, float y1, float z1, float x2, float y2, float z2, int flags, float* waterHeight) { return invoke<int>(0xF2FB60, x1, y1, z1, x2, y2, z2, flags, waterHeight); } // 0xDB947915FA4FB5D5
static int TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, int flags, float* waterHeight) { return invoke<int>(0xF2FC20, x, y, z, flags, waterHeight); } // 0x53875E6971DE2FBF
static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<Void>(0xF2FD00, x, y, radius, height); } // 0xE75901370C558054
static int ADD_EXTRA_CALMING_QUAD(float xLow, float yLow, float xHigh, float yHigh, float height) { return invoke<int>(0xF2FD20, xLow, yLow, xHigh, yHigh, height); } // 0x768916F2C61804A4
static void REMOVE_EXTRA_CALMING_QUAD(int calmingQuad) { invoke<Void>(0xF2FD60, calmingQuad); } // 0x6880878FB8B44799
static void SET_DEEP_OCEAN_SCALER(float intensity) { invoke<Void>(0xF2FD70, intensity); } // 0x1F28B185E40612B5
static float GET_DEEP_OCEAN_SCALER() { return invoke<float>(0xF2FD80); } // 0x13AC55E5C01A1052
static void SET_CALMED_WAVE_HEIGHT_SCALER(float height) { invoke<Void>(0xF2FDA0, height); } // 0xBF7C28CF040C67BC
static void RESET_DEEP_OCEAN_SCALER() { invoke<Void>(0xF2FDB0); } // 0x1FE002F8F0E4E900
static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0xF38580, toggle); } // 0xAB078CF87FA0D018
static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0xF385A0, componentHash); } // 0xB39F6B1C186F538E
static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0xF38660, weaponHash); } // 0xA0A2925EDC6DDA6D
static Hash GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Hash>(0xF38730, weaponHash); } // 0xF06CB8927A8EE0DE
static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0xF387A0, weaponHash); } // 0x6CC7A2E68E8A565A
static int GET_WEAPON_COMPONENT_VARIANT_EXTRA_COUNT(Hash componentHash) { return invoke<int>(0xF38810, componentHash); } // 0x879FF7169943DE79
static Hash GET_WEAPON_COMPONENT_VARIANT_EXTRA_MODEL(Hash componentHash, int extraComponentIndex) { return invoke<Hash>(0xF388A0, componentHash, extraComponentIndex); } // 0xB7B32238BFF7DD76
static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL bForceInHand) { invoke<Void>(0xF38980, ped, weaponHash, bForceInHand); } // 0x3C0F448853B71C92
static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0xF389A0, ped, weaponHash, p2); } // 0x23B29877D0BE9547
static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, Any p1) { return invoke<Entity>(0xF38A40, ped, p1); } // 0x484426882F80CACE
static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0xF38AB0, ped, p1); } // 0xF3D409E30929BD33
static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0xF38B20, ped, weaponHash); } // 0xE26BDA5FFA4CA294
static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0xF38B50, ped, weaponHash); } // 0x51B462E1DEB9F762
static void SET_PED_CYCLE_VEHICLE_WEAPONS_ONLY(Ped ped) { invoke<Void>(0xF38BD0, ped); } // 0xAD33AEE7683375F4
static BOOL IS_PED_ARMED(Ped ped, int typeFlags) { return invoke<BOOL>(0xF38C10, ped, typeFlags); } // 0x11552FA9DCB8E126
static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0xF38C40, weaponHash); } // 0x2A9ED010C087BF2B
static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0xF38CB0, ped, weaponHash, p2); } // 0x66B90BA528CFEBCE
static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0xF38CE0, ped); } // 0x45F34E0DDD65A401
static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0xF38D50, ped, weaponSlot); } // 0xBCEDAE6CA2B2046E
static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0xF38E00, ped, weaponhash); } // 0x1149D67DB429787A
static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0xF38E30, ped, weaponHash, ammo); } // 0x0574074EDCCCBD5E
static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo, BOOL p3) { invoke<Void>(0xF38EA0, ped, weaponHash, ammo, p3); } // 0x45FC566246B3511B
static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0xF38EC0, ped, toggle, weaponHash); } // 0xA83DA0A0DF32920C
static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0xF38EE0, ped, toggle); } // 0x53A38286A3AC16C1
static void SET_PED_STUN_GUN_FINITE_AMMO(Any p0, Any p1) { invoke<Void>(0xF38F50, p0, p1); } // 0x9EFAE0A25C020F4B
static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL isHidden, BOOL bForceInHand) { invoke<Void>(0xF38FD0, ped, weaponHash, ammoCount, isHidden, bForceInHand); } // 0xB41DEC3AAC1AA107
static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand) { invoke<Void>(0xF39000, ped, weaponHash, ammoCount, bForceInHand); } // 0x4BD3F83B0D7E1417
static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1) { invoke<Void>(0xF39020, ped, p1); } // 0x1834D30866818A23
static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0xF390A0, ped, weaponHash); } // 0x4F07124B9C56ED6F
static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0xF39120, ped, toggle); } // 0x4A46DAA87A4C235E
static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0xF391B0, ped, visible, deselectWeapon, p3, p4); } // 0x4D5D5614C2DF76F4
static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xF391F0, ped, toggle); } // 0x8CF553A05B97089A
static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xF39250, ped, weaponHash, weaponType); } // 0x690AB6F5DB2A3A54
static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0xF392C0, ped); } // 0xD8AE5A845CE0131A
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xF39320, entity, weaponHash, weaponType); } // 0x1AC621DBDFE4ECA0
static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0xF393A0, entity); } // 0x7468550652312059
static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0xF39400, ped); } // 0x08AABCACF8F4828E
static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<Void>(0xF39410, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); } // 0x6D796FB2594CA190
static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0xF39430, ped, weaponHash, p2); } // 0xF2C30F76A5BF797F
static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xF396D0, ped, weaponHash, ammo); } // 0x0227CB6AD5598268
static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0xF397B0, ped, weaponHash, ammo); } // 0x73992DAFD09D607B
static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xF397E0, ped, weaponHash, ammo); } // 0xACBE463290141D49
static BOOL GET_MAX_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int* ammo) { return invoke<BOOL>(0xF398A0, ped, ammoTypeHash, ammo); } // 0xC38311CAC7220555
static void ADD_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0xF39960, ped, ammoTypeHash, ammo); } // 0x5D80B7A4B4BA4D49
static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0xF399D0, ped, ammoTypeHash, ammo); } // 0x8DF178F67D660DC7
static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash) { return invoke<int>(0xF39A40, ped, ammoTypeHash); } // 0xFC4FF8B60E6C8641
static void SET_PED_AMMO_TO_DROP(Ped ped, int p1) { invoke<Void>(0xF39AB0, ped, p1); } // 0x5BD5570DF8DB6C39
static void SET_PICKUP_AMMO_AMOUNT_SCALER(float p0) { invoke<Void>(0xF39B00, p0); } // 0x5FD6A23EC3A0882D
static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0xF39B20, ped, weaponHash); } // 0xA239630C4686BC6E
static Hash GET_PED_ORIGINAL_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0xF39B50, ped, weaponHash); } // 0x1820CC8352D1B6EE
static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coords) { return invoke<BOOL>(0xF39C00, ped, coords); } // 0x4800F32F989BED65
static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0xF39D00, ped, gadgetHash, p2); } // 0xD483C8E87621AF64
static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0xF39D20, ped, gadgetHash); } // 0x08DAD6B08438A17C
static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0xF39D90, ped); } // 0xB0D77D90171EC35F
static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0xF39DF0, ped, weaponHash, p2); } // 0xAF3A361C94FBBFC6
static void REMOVE_ALL_PROJECTILES_OF_TYPE(Hash weaponHash, BOOL explode) { invoke<Void>(0xF39E10, weaponHash, explode); } // 0x650290A3A38E907E
static float GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xF39EA0, ped); } // 0xD6F4FF37FC8730A1
static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xF39ED0, ped); } // 0x33D6B8520C268EC8
static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return invoke<BOOL>(0xF39F00, driver, vehicle, weaponHash, p3); } // 0x43F53DDC37E17FE9
static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xF39F30, ped, weaponHash, componentHash); } // 0x6D5FA72F8C43D132
static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xF39FA0, ped, weaponHash, componentHash); } // 0x80E6FC2ACEAF8AA3
static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xF3A010, ped, weaponHash, componentHash); } // 0x5EDED4B3E1A48E68
static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xF3A040, ped, weaponHash, componentHash); } // 0x85718B993F8FC553
static BOOL REFILL_AMMO_INSTANTLY(Ped ped) { return invoke<BOOL>(0xF3A070, ped); } // 0x3CB575F4FC5A6DCB
static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0xF3A0D0, ped); } // 0xEB5B16C858201429
static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { invoke<Void>(0xF3A180, weaponHash, p1, p2); } // 0xA10F939489C3BE61
static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0xF3A240, weaponHash); } // 0x92A65766A892EFC6
static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0xF3A270, weaponHash); } // 0xCF56BDC3BD787B97
static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale, Any p7, Any p8, Any p9) { return invoke<Object>(0xF3A360, weaponHash, ammoCount, x, y, z, showWorldModel, scale, p7, p8, p9); } // 0x8A3572575D91006C
static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash componentHash) { invoke<Void>(0xF3A3C0, weaponObject, componentHash); } // 0x93A0B91D4456D7E9
static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object object, Hash componentHash) { invoke<Void>(0xF3A410, object, componentHash); } // 0xFA13077979C3DCB9
static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash componentHash) { return invoke<BOOL>(0xF3A490, weapon, componentHash); } // 0x7B5835DBE90FBDED
static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0xF3A520, weaponObject, ped); } // 0x4693060C5049F4E3
static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xF3A530, weaponHash, componentHash); } // 0x0C985A2C6C77023D
static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0xF3A560, ped, p1); } // 0xEA7D61B52729ED38
static void GIVE_LOADOUT_TO_PED(Ped ped, Hash loadoutHash) { invoke<Void>(0xF3A590, ped, loadoutHash); } // 0x9C1B023459284932
static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int tintIndex) { invoke<Void>(0xF3A5E0, ped, weaponHash, tintIndex); } // 0xC37D2709B04BD397
static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0xF3A600, ped, weaponHash); } // 0x6C81F95CADD1E6D0
static void SET_WEAPON_OBJECT_TINT_INDEX(Object weapon, int tintIndex) { invoke<Void>(0xF3A630, weapon, tintIndex); } // 0xFA3F484500EC0E85
static int GET_WEAPON_OBJECT_TINT_INDEX(Object weapon) { return invoke<int>(0xF3A680, weapon); } // 0x395F718BB649E570
static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0xF3A6E0, weaponHash); } // 0xB302C203285E8234
static void SET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash, int colorIndex) { invoke<Void>(0xF3A750, ped, weaponHash, camoComponentHash, colorIndex); } // 0x834F4286803834DE
static int GET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash) { return invoke<int>(0xF3A770, ped, weaponHash, camoComponentHash); } // 0xB6209D82C643428C
static void SET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash, int colorIndex) { invoke<Void>(0xF3A7A0, weaponObject, camoComponentHash, colorIndex); } // 0xE0826380A9741A77
static int GET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash) { return invoke<int>(0xF3A840, weaponObject, camoComponentHash); } // 0x7EC58BF54CD9DC57
static int GET_PED_WEAPON_CAMO_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0xF3A8D0, ped, weaponHash); } // 0xB92D606AB30C334C
static void SET_WEAPON_OBJECT_CAMO_INDEX(Object weaponObject, int p1) { invoke<Void>(0xF3A900, weaponObject, p1); } // 0x2B73BEAD61E67B73
static BOOL GET_WEAPON_HUD_STATS(Hash weaponHash, Any* outData) { return invoke<BOOL>(0xF3A950, weaponHash, outData); } // 0x78640AA034DC7BAF
static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Hash componentHash, Any* outData) { return invoke<BOOL>(0xF3AA00, componentHash, outData); } // 0xF4CFBABEEF287C00
static float GET_WEAPON_DAMAGE(Hash weaponHash, Hash componentHash) { return invoke<float>(0xF3AAA0, weaponHash, componentHash); } // 0xFE2B29CE6AE93F62
static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0xF3AAD0, weaponHash); } // 0xF4E66F9577F22476
static float GET_WEAPON_TIME_BETWEEN_SHOTS(Hash weaponHash) { return invoke<float>(0xF3AB50, weaponHash); } // 0x4CC44EFF756524DC
static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0xF3ABD0, ped, xBias, yBias); } // 0x0DB5B122A29E007B
static Object SET_PED_SHOOT_ORDNANCE_WEAPON(Ped ped, float p1) { return invoke<Object>(0xF3AC40, ped, p1); } // 0x095BB431592C5642
static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0xF3AC70, weaponObject); } // 0x8E453F6C5ABDD9DC
static void SET_WEAPON_DAMAGE_MODIFIER(Hash weaponHash, float damageMultiplier) { invoke<Void>(0xF3AD20, weaponHash, damageMultiplier); } // 0xD78F39BF33D61469
static void SET_WEAPON_AOE_MODIFIER(Hash weaponHash, float multiplier) { invoke<Void>(0xF3AD80, weaponHash, multiplier); } // 0xBB74EE81E0CA2E98
static void SET_WEAPON_EFFECT_DURATION_MODIFIER(Hash p0, float p1) { invoke<Void>(0xF3ADE0, p0, p1); } // 0xD0E4082BC9A5DC1E
static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0xF3AE40, ped); } // 0x3C2402675D8FFADA
static BOOL IS_FLASH_LIGHT_ON(Ped ped) { return invoke<BOOL>(0xF3AEB0, ped); } // 0x9E333ABC0077FDAB
static BOOL SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<BOOL>(0xF3AF30, distance); } // 0xDB47943DB2DB40C5
static void SET_FLASH_LIGHT_ACTIVE_HISTORY(Ped ped, BOOL toggle) { invoke<Void>(0xF3AF40, ped, toggle); } // 0x46DEC96BAC39908C
static void SET_WEAPON_ANIMATION_OVERRIDE(Ped ped, Hash animStyle) { invoke<Void>(0xF3AFB0, ped, animStyle); } // 0x06119A351A3080C2
static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0xF3B040, weaponHash); } // 0x12974BA350E32306
static void SET_EQIPPED_WEAPON_START_SPINNING_AT_FULL_SPEED(Ped ped) { invoke<Void>(0xF3B0B0, ped); } // 0x2ED26DA87CD65433
static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0xF3B110, weaponHash); } // 0xBE2AF59B33F9F92A
static int CREATE_AIR_DEFENCE_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6, Hash weaponHash) { return invoke<int>(0xF3B140, x, y, z, radius, p4, p5, p6, weaponHash); } // 0x51817FD0EC0A289C
static int CREATE_AIR_DEFENCE_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float radius, Hash weaponHash) { return invoke<int>(0xF3B1B0, p0, p1, p2, p3, p4, p5, p6, p7, p8, radius, weaponHash); } // 0x0C0C6031DB5E2A28
static BOOL REMOVE_AIR_DEFENCE_SPHERE(int zoneId) { return invoke<BOOL>(0xF3B3A0, zoneId); } // 0x54A9A0E1D30B92A5
static void REMOVE_ALL_AIR_DEFENCE_SPHERES() { invoke<Void>(0xF3B3D0); } // 0x537B8CC8EB57DFB7
static void SET_PLAYER_TARGETTABLE_FOR_AIR_DEFENCE_SPHERE(Player player, int zoneId, BOOL enable) { invoke<Void>(0xF3B3E0, player, zoneId, enable); } // 0xE3C69C184ADC05C0
static BOOL IS_AIR_DEFENCE_SPHERE_IN_AREA(float x, float y, float z, float radius, int* outZoneId) { return invoke<BOOL>(0xF3B420, x, y, z, radius, outZoneId); } // 0x3EAF5419C2410C27
static void FIRE_AIR_DEFENCE_SPHERE_WEAPON_AT_POSITION(int zoneId, float x, float y, float z) { invoke<Void>(0xF3B4B0, zoneId, x, y, z); } // 0x71C760BC3D9BEDAC
static BOOL DOES_AIR_DEFENCE_SPHERE_EXIST(int zoneId) { return invoke<BOOL>(0xF3B530, zoneId); } // 0x8AED94D23435607C
static void SET_CAN_PED_SELECT_INVENTORY_WEAPON(Ped ped, Hash weaponHash, BOOL toggle) { invoke<Void>(0xF3B560, ped, weaponHash, toggle); } // 0xC3A0D70539BCA8F9
static void SET_CAN_PED_SELECT_ALL_WEAPONS(Ped ped, BOOL toggle) { invoke<Void>(0xF3B580, ped, toggle); } // 0xB21FD0EEB76F0296
static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0xF3C500, x, y, z); } // 0x3348018F21E261AF
static int GET_ZONE_FROM_NAME_ID(const char* zoneName) { return invoke<int>(0xF3C590, zoneName); } // 0x17FDAC0BF5A2C728
static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0xF3C5D0, zoneId); } // 0xC6B8DAA3EC313D8F
static const char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<const char*>(0xF3C620, x, y, z); } // 0xDAEDE051F3F4FD45
static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0xF3C6D0, zoneId, toggle); } // 0xD923766A456DE601
static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0xF3C6F0, zoneId); } // 0x148523145C045769
static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0xF3C720, scheduleId, vehicleHash); } // 0x17687E14C390C475
static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0xF3C730, scheduleId); } // 0x2E538CBB8683618E
static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0xF3C780, x, y, z); } // 0x1E2447C0261A7995
static int GET_CURRENT_TV_SHOW_PLAY_TIME() { return invoke<int>(0xD82990); } // 0xDD3AA743AB7D4D75
static void PLAY_PED_AUDIO_EVENT_ANIM(Ped pedHandle, const char* audioEvent) { invoke<Void>(0xD84350, pedHandle, audioEvent); } // 0xAD2191A6E3543189
static void _FORCE_VEHICLE_ENGINE_SYNTH(Vehicle vehicle, BOOL force) { invoke<Void>(0xD86200, vehicle, force); } // 0xEB7D0E1FCC8FE17A
static void _ENABLE_DRAG_RACE_STATIONARY_WARNING_SOUNDS(Vehicle vehicle, BOOL enable) { invoke<Void>(0xD86660, vehicle, enable); } // 0xBEFB80290414FD4F
static void SET_INDIVIDUAL_PORTAL_SETTINGS_OVERRIDE(Hash interiorNameHash, int roomIndex, int doorIndex, const char* newPortalSettingsName) { invoke<Void>(0xD87580, interiorNameHash, roomIndex, doorIndex, newPortalSettingsName); } // 0xC9D623C5A3D8FD5D
static void REMOVE_INDIVIDUAL_PORTAL_SETTINGS_OVERRIDE(Hash interiorNameHash, int roomIndex, int doorIndex) { invoke<Void>(0xD875B0, interiorNameHash, roomIndex, doorIndex); } // 0x8EF105736194F80C
static void SET_CAM_DOF_SHOULD_KEEP_LOOK_AT_TARGET_IN_FOCUS(Cam camera, BOOL state) { invoke<Void>(0xD92770, camera, state); } // 0x7CF3AF51DCFE4108
static void INTERPOLATE_CAMERA_WITH_PARAMS(Cam camera, float camPosX, float camPosY, float camPosZ, float camRotX, float camRotY, float camRotZ, float fov, int duration, int posCurveType, int rotCurveType, int rotOrder, int fovCurveType) { invoke<Void>(0xD93550, camera, camPosX, camPosY, camPosZ, camRotX, camRotY, camRotZ, fov, duration, posCurveType, rotCurveType, rotOrder, fovCurveType); } // 0xDDA77EE33C005AAF
static void _ACTIVATE_CAM_WITH_INTERP_AND_FOV_CURVE(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation, int easeFov) { invoke<Void>(0xD93590, camTo, camFrom, duration, easeLocation, easeRotation, easeFov); } // 0x34CFC4C2A38E83E3
static float _GET_THIRD_PERSON_CAM_MIN_ORBIT_DISTANCE_SPRING() { return invoke<float>(0xD94CC0); } // 0xBC456FB703431785
static float _GET_THIRD_PERSON_CAM_MAX_ORBIT_DISTANCE_SPRING() { return invoke<float>(0xD94D00); } // 0xD4592A16D36673ED
static Vector3 GET_CUT_FILE_OFFSET(const char* cutsceneName, int index) { return invoke<Vector3>(0xD99310, cutsceneName, index); } // 0x1FA904B60E492336
static int GET_CUTSCENE_PLAY_TIME() { return invoke<int>(0xD994C0); } // 0x710286BC5EF4D6E1
static int GET_NEAREST_PARTICIPANT_TO_ENTITY(Entity entity) { return invoke<int>(0xDB3DB0, entity); } // 0xFFBD7052D65BE0FF
static BOOL _IS_ENTITY_FIXED(Entity entity) { return invoke<BOOL>(0xDB4B30, entity); } // 0xDA5EF4092EDB83F4
static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY_OVERRIDE_INVERSE_MASS(Entity firstEntityIndex, Entity secondEntityIndex, int firstEntityBoneIndex, int secondEntityBoneIndex, float secondEntityOffsetX, float secondEntityOffsetY, float secondEntityOffsetZ, float firstEntityOffsetX, float firstEntityOffsetY, float firstEntityOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, float physicalStrength, BOOL constrainRotation, BOOL doInitialWarp, BOOL collideWithEntity, BOOL addInitialSeperation, int rotOrder, float invMassScaleA, float invMassScaleB) { invoke<Void>(0xDB4F70, firstEntityIndex, secondEntityIndex, firstEntityBoneIndex, secondEntityBoneIndex, secondEntityOffsetX, secondEntityOffsetY, secondEntityOffsetZ, firstEntityOffsetX, firstEntityOffsetY, firstEntityOffsetZ, vecRotationX, vecRotationY, vecRotationZ, physicalStrength, constrainRotation, doInitialWarp, collideWithEntity, addInitialSeperation, rotOrder, invMassScaleA, invMassScaleB); } // 0x168A09D1B25B0BA4
static void SET_ENTITY_DRAWABLE_LOD_THRESHOLDS(Entity entity, int highLod, int medLod, int lowLod, int vlowLod) { invoke<Void>(0xDB6940, entity, highLod, medLod, lowLod, vlowLod); } // 0xC12A19AC871A59C1
static void _SET_ENTITY_NO_COLLISION_WITH_NETWORKED_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0xDB7330, entity1, entity2); } // 0x0A27A7827347B3B1
static Entity _GET_CHILD_ATTACHMENT(Entity entity) { return invoke<Entity>(0xDB7AC0, entity); } // 0xD35ECEBF6FB2C261
static void _NETWORK_EXPECT_EXPLOSION_EVENTS_FOR_PLAYER(BOOL expect, Player player) { invoke<Void>(0xDBB880, expect, player); } // 0x5241DB47A8B8AD54
static int _GET_MAXIMUM_NUMBER_OF_WATER_CANNONS() { return invoke<int>(0xDBB8D0); } // 0x56581E7E219D6263
static Vector3 _GET_WATER_CANNON_COORDS(int index) { return invoke<Vector3>(0xDBB8E0, index); } // 0xE61CBD3ED80E7327
static void _SET_BLEND_STATE_NORMAL() { invoke<Void>(0xDCBB90); } // 0x976D155439608592
static void _SET_BLEND_STATE_ALPHA_ADDITIVE() { invoke<Void>(0xDCBBA0); } // 0x01677A72A8BDCD1A
static void _DRAW_CAPSULE_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float falloff, float intensity, float capsuleExtent, float exponent) { invoke<Void>(0xDCC010, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, falloff, intensity, capsuleExtent, exponent); } // 0x330F4FA20FB57738
static void _UPDATE_LIGHTS_LOCATION_FROM_ENTITY(Entity entity) { invoke<Void>(0xDCC0A0, entity); } // 0x988C5FE3B815C998
static void _DRAW_MARKER_GLOW(float x, float y, float z, float size, int red, int green, int blue, float intensity) { invoke<Void>(0xDCC3A0, x, y, z, size, red, green, blue, intensity); } // 0xE59B0A106CC15FC2
static void _MAKE_GLOWS_ADDITIVE(BOOL toggle) { invoke<Void>(0xDCC440, toggle); } // 0xDC60226A3F4D9F42
static void _CALCULATE_LINE_ORIENTATION_FROM_RENDERED_CAMERA(Vector3* result, float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xDCD260, result, x1, y1, z1, x2, y2, z2); } // 0x9F7996F4E32B3026
static void _CALCULATE_ROTATED_VECTOR(Vector3* direction, float roll, float pitch, float yaw) { invoke<Void>(0xDCD2D0, direction, roll, pitch, yaw); } // 0xA7804512D1FDD22A
static void _SET_PARTICLE_FX_LOOPED_CAMERA_BIAS(int ptfxHandle, float p1) { invoke<Void>(0xDCF620, ptfxHandle, p1); } // 0x4100BF0346A8D2C3
static int _START_VEHICLE_PARTICLE_FX_LOOPED(Vehicle vehicle, const char* effectName, BOOL frontBack, BOOL leftRight, BOOL localOnly) { return invoke<int>(0xDCFC00, vehicle, effectName, frontBack, leftRight, localOnly); } // 0xDF269BE2909E181A
static void _FORCE_ALLOW_SNOW_FOOT_VFX_ON_ICE(BOOL toggle) { invoke<Void>(0xDD06D0, toggle); } // 0xA342A3763B3AFB6C
static void _FORCE_GROUND_SNOW_PASS(BOOL toggle) { invoke<Void>(0xDD0740, toggle); } // 0x6E9EF3A33C8899F8
static BOOL _HAS_SCALEFORM_MOVIE_NAMED_LOADED(int* scaleformHandle, const char* scaleformName) { return invoke<BOOL>(0xDD0DF0, scaleformHandle, scaleformName); } // 0x9743BCCF7CD6E1F6
static void _SET_SCALEFORM_MOVIE_NAMED_AS_NO_LONGER_NEEDED(int scaleformHandle, const char* scaleformName) { invoke<Void>(0xDD1090, scaleformHandle, scaleformName); } // 0x2FDFB1B04C76E9C3
static Any _SET_TV_CHANNEL_PLAYLIST_DIRTY(int tvChannel, BOOL p1) { return invoke<Any>(0xDD1D60, tvChannel, p1); } // 0xEE831F15A8D0D94A
static void _USE_VEHICLE_TARGETING_RETICULE_ON_VEHICLES(BOOL enable) { invoke<Void>(0xDE11E0, enable); } // 0x1BC0EA2912708625
static float GET_RENDERED_TEXT_PADDING_SIZE() { return invoke<float>(0xDE17E0); } // 0xD6FAD05D855AF80F
static void SET_TEXT_LINE_HEIGHT_MULT(float lineHeightMult) { invoke<Void>(0xDE1990, lineHeightMult); } // 0x9F4624F76E6953D1
static void _SHOW_PURCHASE_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xDE2C30, toggle); } // 0xF6865E26067B708C
static int GET_WAYPOINT_CLEAR_ON_ARRIVAL_MODE() { return invoke<int>(0xDE3220); } // 0xF46851AB8B02EF40
static void SET_WAYPOINT_CLEAR_ON_ARRIVAL_MODE(int mode) { invoke<Void>(0xDE3230, mode); } // 0x3FFC556B62146F75
static void _SET_BLIP_GPS_ROUTE_DISPLAY_DISTANCE(Blip blip, int blipChangeParam46, BOOL blipChangeParam47) { invoke<Void>(0xDE3370, blip, blipChangeParam46, blipChangeParam47); } // 0x25D984CFB64ED6DE
static void _SET_PAUSE_EXTERIOR_RENDERING_WHILE_IN_INTERIOR() { invoke<Void>(0xDE35E0); } // 0x35CCE12EAECB4A51
static void SET_MINIMAP_BACKGROUND_HIDDEN(BOOL toggle) { invoke<Void>(0xDE3D90, toggle); } // 0xB09D42557C45EBA1
static BOOL IS_HUD_COMPONENT_HIDDEN_THIS_FRAME(int id) { return invoke<BOOL>(0xDE4110, id); } // 0x8EDC335C943465C8
static int _REPORT_NOMINATED_JOB(const char* jobNominated, Any* p1) { return invoke<int>(0xDE43F0, jobNominated, p1); } // 0x764EED2568508F13
static int _GET_NOMINATED_JOB_REPORT_STATUS(int index) { return invoke<int>(0xDE4420, index); } // 0xA3C8062CAB30E8A9
static BOOL _IS_XBOXPC_VERSION() { return invoke<BOOL>(0xDF9180); } // 0xE2BCD0EFAE90D1F4
static void _SET_CONTENT_PROP_TYPE(Hash model, int type) { invoke<Void>(0xDFAF50, model, type); } // 0xBA4583AF4C678A9B
static int _GET_CONTENT_PROP_TYPE(Hash model) { return invoke<int>(0xDFAFA0, model); } // 0x8BAF8AD59F47AAFC
static void _NETWORK_EARN_AVENGER(int amount, int p1) { invoke<Void>(0xE26870, amount, p1); } // 0x55F006B9D4A46C1D
static void _NETWORK_EARN_SMUGGLER_OPS(Any p0, Any p1, Any p2) { invoke<Void>(0xE26880, p0, p1, p2); } // 0xDEA273D5F8A9661A
static void _NETWORK_EARN_BONUS_OBJECTIVE(int amount, Any p1, Any p2) { invoke<Void>(0xE26980, amount, p1, p2); } // 0xDCEF983C24191997
static void _NETWORK_EARN_PROGRESS_HUB(Any p0, Any p1) { invoke<Void>(0xE26A50, p0, p1); } // 0xF8332B06F0EECC9C
static void _NETWORK_SPENT_AIR_FREIGHT(int hangarCargoSourcingPrice, BOOL fromBank, BOOL fromBankAndWallet, int cost, int warehouseId, int warehouseSlot, Any p6) { invoke<Void>(0xE26B10, hangarCargoSourcingPrice, fromBank, fromBankAndWallet, cost, warehouseId, warehouseSlot, p6); } // 0x8C7E8D6F96C9E948
static void _NETWORK_SPENT_SKIP_CARGO_SOURCE_SETUP(int amount, BOOL fromBank, BOOL fromBankAndWallet, int cost) { invoke<Void>(0xE26C40, amount, fromBank, fromBankAndWallet, cost); } // 0xED1B407BADA42CEC
static void _NETWORK_SPENT_STEALTH_MODULE(int amount, BOOL fromBank, BOOL fromBankAndWallet, Hash p3) { invoke<Void>(0xE26D40, amount, fromBank, fromBankAndWallet, p3); } // 0x95CE79A6939C537A
static void _NETWORK_SPENT_MISSILE_JAMMER(int amount, BOOL fromBank, BOOL fromBankAndWallet, Hash p3) { invoke<Void>(0xE26E40, amount, fromBank, fromBankAndWallet, p3); } // 0xD687100F616163F4
static void _NETWORK_SPENT_GENERIC(int price, BOOL p1, BOOL p2, Hash stat, Hash spent, const char* p5, const char* p6, Any* data) { invoke<Void>(0xE26F40, price, p1, p2, stat, spent, p5, p6, data); } // 0x2803B027479FB640
static void _NETWORK_EARN_GENERIC(int amount, Hash earn, const char* p2, const char* p3, Any* data) { invoke<Void>(0xE26F90, amount, earn, p2, p3, data); } // 0xBF7B5BB7ED890380
static void _NETWORK_CLEAR_TRANSACTION_TELEMETRY_NONCE() { invoke<Void>(0xE26FB0); } // 0xE03B9F95556E48E9
static BOOL _NETWORK_GET_TOTAL_EVC_BALANCE_IS_GREATER_THAN_100M() { return invoke<BOOL>(0xE273C0); } // 0xDBD91315C80E9483
static BOOL _NETWORK_GET_TOTAL_EVC_BALANCE_IS_GREATER_THAN_500M() { return invoke<BOOL>(0xE273F0); } // 0xC44398D46FF6ADB9
static BOOL _NETWORK_GET_TOTAL_EVC_BALANCE_IS_GREATER_THAN_1B() { return invoke<BOOL>(0xE27420); } // 0xEEB1C310842A81E0
static BOOL NET_GAMESERVER_CHECKOUT_PENDING(int transactionId) { return invoke<BOOL>(0xE284F0, transactionId); } // 0x4B64CD6D18474126
static BOOL _NETWORK_MULTIPLAYER_CROSSPLAY_NOT_ALLOWED() { return invoke<BOOL>(0xE4A060); } // 0xA6BC0D9BCF9662FA
static BOOL _NETWORK_HAVE_PLATFORM_COMMUNICATION_PRIVILEGES() { return invoke<BOOL>(0xE4A120); } // 0xE1E02509169C124E
static BOOL NETWORK_CHECK_CAN_ACCESS_AND_ALERT() { return invoke<BOOL>(0xE4A610); } // 0x6FA9825D0B5A721B
static const char* _NETWORK_GET_ACCESS_CODE_LABEL_HEADING(int accessCode) { return invoke<const char*>(0xE4A640, accessCode); } // 0x967E6FB554E1B6DE
static const char* _NETWORK_GET_ACCESS_CODE_LABEL_BODY(int accessCode) { return invoke<const char*>(0xE4A670, accessCode); } // 0x214CA1730793EBA8
static BOOL _NETWORK_SESSION_LEAVE_INCLUDING_REASON(int leaveFlags, int leaveReason) { return invoke<BOOL>(0xE4AAF0, leaveFlags, leaveReason); } // 0xE0128328CF1FD9F4
static int NETWORK_SESSION_GET_UNIQUE_CREW_LIMIT() { return invoke<int>(0xE4AD90); } // 0xCDC936BF35EDCB73
static const char* _NETWORK_INVITE_GET_JOIN_FAIL_REASON() { return invoke<const char*>(0xE4B5D0); } // 0x7B335F84501145BB
static void _NETWORK_INVITE_CLEAR_JOIN_FAIL_REASON() { invoke<Void>(0xE4B600); } // 0x8EF5F5811A940F82
static BOOL _0x0292BD7F3766CEBC() { return invoke<BOOL>(0xE4B6A0); } // 0x0292BD7F3766CEBC
static int _NETWORK_GET_HOST_BROADCAST_DATA_SIZE_UNSYNCED(Hash scriptNameHash, int instance, Hash positionHash, int handlerNum) { return invoke<int>(0xE4E210, scriptNameHash, instance, positionHash, handlerNum); } // 0x72C8588ABE22C972
static int _NETWORK_GET_PLAYER_BROADCAST_DATA_SIZE_UNSYNCED(Hash scriptNameHash, int instance, Hash positionHash, int handlerNum) { return invoke<int>(0xE4E2E0, scriptNameHash, instance, positionHash, handlerNum); } // 0xB99CD664FD4720A1
static int _NETWORK_GET_BROADCAST_DATA_HOST_UPDATE_SIZE(Hash scriptNameHash, int instance, Hash positionHash, int handlerNum) { return invoke<int>(0xE4E3E0, scriptNameHash, instance, positionHash, handlerNum); } // 0xE448693B3EA3B92C
static int _NETWORK_GET_BROADCAST_DATA_PLAYER_UPDATE_SIZE(Hash scriptNameHash, int instance, Hash positionHash, int handlerNum) { return invoke<int>(0xE4E4C0, scriptNameHash, instance, positionHash, handlerNum); } // 0xAC3F722321800755
static Player NETWORK_GET_HOST_OF_THREAD(int threadId) { return invoke<Player>(0xE4E8E0, threadId); } // 0xD3DEBE2991FE8098
static void NETWORK_SET_VEHICLE_DRIVEN_LOCATION(Hash location) { invoke<Void>(0xE4F0B0, location); } // 0xA0CE91E47531D3BB
static const char* _NETWORK_LOAD_GAMER_DISPLAY_NAME(Any* gamerHandle) { return invoke<const char*>(0xE506B0, gamerHandle); } // 0x338ECE3637937BC2
static BOOL _NETWORK_DOES_COMMUNICATION_GROUP_HAVE_PERMISSION(int communicationType) { return invoke<BOOL>(0xE50BE0, communicationType); } // 0xDBDF80673BBA3D65
static BOOL _NETWORK_DOES_COMMUNICATION_GROUP_HAVE_SETTINGS_ENABLED(int communicationType) { return invoke<BOOL>(0xE50C20, communicationType); } // 0x20C12650830A64EC
static int _NETWORK_GET_COMMUNICATION_GROUP_FLAGS(int communicationType) { return invoke<int>(0xE50C60, communicationType); } // 0x40DF02F371F40883
static int _NETWORK_GET_COMMUNICATION_GROUP_DEFAULT_FLAGS(int communicationType) { return invoke<int>(0xE50CC0, communicationType); } // 0x97F35B898D2D067F
static int _NETWORK_GET_COMMUNICATION_GROUP_VALUE(int communicationType) { return invoke<int>(0xE50D00, communicationType); } // 0xBF66ACD9AE81A99F
static void _NETWORK_SET_COMMUNICATION_GROUP_FLAGS(int communicationType, int communicationGroupFlag) { invoke<Void>(0xE50D40, communicationType, communicationGroupFlag); } // 0xE549F846DE7D32D5
static BOOL _NETWORK_HAS_PLAYER_PASSED_CHECK_TYPE(int checkType, Any* gamerHandle) { return invoke<BOOL>(0xE50D70, checkType, gamerHandle); } // 0x62E29CDA11F9C230
static BOOL _NETWORK_CAN_TEXT_FROM_GAMER_BE_VIEWED(Any* gamerHandle) { return invoke<BOOL>(0xE51540, gamerHandle); } // 0x9F633448E4C73207
static void _NETWORK_SET_TUTORIAL_SPECIAL_SESSION(BOOL toggle) { invoke<Void>(0xE52BE0, toggle); } // 0x35AEB4AC7C73C6E1
static BOOL _NETWORK_IS_SPECIAL_TUTORIAL_SESSION() { return invoke<BOOL>(0xE52C00); } // 0x4666CD7431DE98E2
static void _NETWORK_HIDE_ENTITY_IN_TUTORIAL_SESSION(int netHandle, BOOL hide) { invoke<Void>(0xE54020, netHandle, hide); } // 0xCFE359CCCFE359CC
static void _SET_FREEMODE_REPORT_DATA(Any* gamerHandle, Any* reportData) { invoke<Void>(0xE54D20, gamerHandle, reportData); } // 0x527803286A8B6C81
static BOOL IS_OBJECT_REASSIGNMENT_IN_PROGRESS() { return invoke<BOOL>(0xE54DC0); } // 0x28123C8B056CC8AA
static void _NETWORK_CLEAR_CLOCK_SYNC_TIME_OVERRIDE(BOOL startGlobalTransition, int transitionTime) { invoke<Void>(0xE55A70, startGlobalTransition, transitionTime); } // 0x0C1BF187985B15C8
static void NETWORK_SYNC_CLOCK_TIME_OVERRIDE() { invoke<Void>(0xE55AC0); } // 0xCBD02360C5E16871
static void _NETWORK_SET_TUNABLES_REGISTRATION_CONTEXTS(Any* tunableContextData) { invoke<Void>(0xE55F20, tunableContextData); } // 0x014A73449675121D
static void _NETWORK_CLEAR_TUNABLES_REGISTRATION_CONTEXTS() { invoke<Void>(0xE55F30); } // 0x0C87C83C8950432B
static BOOL _NETWORK_GET_TUNABLES_REGISTRATION_BOOL(Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0xE55F40, tunableName, defaultValue); } // 0xB327CF1B8C2C0EA3
static int _NETWORK_GET_TUNABLES_REGISTRATION_INT(Hash tunableName, int defaultValue) { return invoke<int>(0xE56010, tunableName, defaultValue); } // 0x0D94071E55F4C9CE
static float _NETWORK_GET_TUNABLES_REGISTRATION_FLOAT(Hash tunableName, float defaultValue) { return invoke<float>(0xE560D0, tunableName, defaultValue); } // 0x367E5E33E7F0DD1A
static void _NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_PED_DAMAGE(Entity entity, BOOL trigger) { invoke<Void>(0xE56910, entity, trigger); } // 0xE9D0244ACBEE1BC4
static void _NETWORK_ALLOW_DEAD_PED_NETWORK_BLENDING(int netId, BOOL allow) { invoke<Void>(0xE56AE0, netId, allow); } // 0xE8BA82390622BA13
static void _NETWORK_SET_IGNORE_VEHICLE_RAMMED_BY_NON_VEHICLE(BOOL toggle) { invoke<Void>(0xE56DA0, toggle); } // 0x67F7C81C1395672A
static BOOL _UGC_GET_NOMINATED_CONTENT(int offset, int maxCount, const char* contentTypeName, Any* p3) { return invoke<BOOL>(0xE57FC0, offset, maxCount, contentTypeName, p3); } // 0xB1556B9C1425B727
static const char* UGC_GET_CONTENT_DESCRIPTION(int index) { return invoke<const char*>(0xE583D0, index); } // 0x4A56710BAB5C4DB4
static BOOL UGC_HAS_PERMISSION_TO_WRITE() { return invoke<BOOL>(0xE58980); } // 0xC33E7CBC06EC1A8D
static BOOL _UGC_SET_NOMINATED_JOB(const char* contentId, BOOL nominated, const char* contentTypeName) { return invoke<BOOL>(0xE58A90, contentId, nominated, contentTypeName); } // 0xEA92F1225A53BE3F
static BOOL _UGC_CLEAR_NOMINATED_JOB(const char* contentTypeName) { return invoke<BOOL>(0xE58AF0, contentTypeName); } // 0x24B3A7EB827EEDCF
static BOOL _NETWORK_HAS_ROS_PRIVILEGE_MP_TEXT_COMMUNICATION() { return invoke<BOOL>(0xE596A0); } // 0xD9719341663C385F
static BOOL _NETWORK_HAS_ROS_PRIVILEGE_MP_VOICE_COMMUNICATION() { return invoke<BOOL>(0xE59700); } // 0x8956A309BE90057C
static BOOL _NETWORK_HAS_ROS_PRIVILEGE_REPORTING() { return invoke<BOOL>(0xE59760); } // 0x9BA54B3CFB82ADDD
static void _NETWORK_GET_DUMP_OF_ASSET_VERIFIER(Any* p0) { invoke<Void>(0xE59C20, p0); } // 0x69D05E1EAD74B9DD
static BOOL NETWORK_HAS_SC_MEMBERSHIP() { return invoke<BOOL>(0xE5A000); } // 0xAB286B2192A71E32
static int _NETWORK_GET_GAME_RESTART_REASON() { return invoke<int>(0xE5A070); } // 0x7F7E8401F81CB65B
static void _NETWORK_CONFIRM_GAME_RESTART() { invoke<Void>(0xE5A080); } // 0x0A141818CA2311AD
static const char* _NETWORK_GET_GAME_RESTART_REASON_MESSAGE_LABEL() { return invoke<const char*>(0xE5A090); } // 0x47B11D51FC50A259
static const char* _NETWORK_GET_BATTLEYE_ERROR_MESSAGE_LABEL(int errorCode) { return invoke<const char*>(0xE5A0A0, errorCode); } // 0xCBA50F371E45B90D
static void _SET_OBJECT_TARGETTABLE_BY_PLAYER(Object object, BOOL setFlag34, BOOL setFlag35) { invoke<Void>(0xE63DB0, object, setFlag34, setFlag35); } // 0xB39F03368DB0CAA2
static BOOL DOOR_SYSTEM_GET_IS_SPRING_REMOVED(Hash doorHash) { return invoke<BOOL>(0xE64830, doorHash); } // 0x8562FD8AB1E94D39
static void _SET_PICKUP_GLOW_DISABLED(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66680, pickup, toggle); } // 0x08BD8BA5BDE2C2FA
static BOOL _IS_CONTROL_HELD_DOWN(int control, int action, int duration) { return invoke<BOOL>(0xE6A610, control, action, duration); } // 0xE9CB8C56E90D5079
static int _GET_GAMEPAD_TYPE() { return invoke<int>(0xE6B420); } // 0x18E474F40EF05F10
static void GET_SPAWN_COORDS_FOR_VEHICLE_NODE(int nodeAddress, float towardsCoorsX, float towardsCoorsY, float towardsCoorsZ, Vector3* centrePoint, float* heading) { invoke<Void>(0xE704F0, nodeAddress, towardsCoorsX, towardsCoorsY, towardsCoorsZ, centrePoint, heading); } // 0x809549AFC7AEC597
static void _SET_BLOCK_AMBIENT_PEDS_FROM_DROPPING_WEAPONS_THIS_FRAME() { invoke<Void>(0xE912E0); } // 0xC73EFFC5E043A8BA
static BOOL _HAS_PED_CLEAR_LOS_TO_ENTITY(Ped ped, Entity entity, float x, float y, float z, int p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xE93480, ped, entity, x, y, z, p5, p6, p7); } // 0xA32ABFEB2A03B306
static BOOL _SET_PED_SURVIVES_BEING_OUT_OF_WATER(Ped ped, BOOL toggle) { return invoke<BOOL>(0xE94420, ped, toggle); } // 0x100CD221F572F6E1
static void _GENERATE_PED_DAMAGE_EVENT(Ped ped, float x, float y, float z, Hash weaponType) { invoke<Void>(0xE944B0, ped, x, y, z, weaponType); } // 0x6D1FCD0950EFA3DD
static void SET_PED_CAN_BODY_RECOIL_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A400, ped, toggle); } // 0xE84EC1735FB39663
static void _BLOCK_PED_FROM_WRITHING_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xE9ABC0, ped, toggle); } // 0x5CBD1684E56BF99D
static Vector3 GET_DAMPING(Entity entity, int type) { return invoke<Vector3>(0xEA13F0, entity, type); } // 0x8C520A929415BCD2
static int GET_PLAYER_TARGETING_MODE() { return invoke<int>(0xEAB5E0); } // 0x875BDD898B99C8CE
static void SET_PLAYER_STEALTH_SPEED(Player player, int stealthSpeed) { invoke<Void>(0xEABB20, player, stealthSpeed); } // 0xE6200F3AF46AC0B5
static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(Player player, Vehicle vehicle) { invoke<Void>(0xEACE80, player, vehicle); } // 0xC1069B5E5B6EA13E
static void _SEND_TU_SCRIPT_EVENT_NEW(int eventGroup, Any* eventData, int eventDataSize, int playerBits, Hash eventType) { invoke<Void>(0xEB17C0, eventGroup, eventData, eventDataSize, playerBits, eventType); } // 0x71A6F836422FDD2B
static void _SC_EMAIL_MARKETING_EMAIL_OPENED(int index, Hash type) { invoke<Void>(0xEB5CA0, index, type); } // 0x69AA35F3F391CDBA
static BOOL SC_PROFANITY_GET_PROFANE_WORD(int token, char* outProfaneWord) { return invoke<BOOL>(0xEB62F0, token, outProfaneWord); } // 0x75CC8931A11128C9
static Hash _GET_STAT_HASH_FOR_CHARACTER_STAT(int dataType, int statIndex, int charSlot) { return invoke<Hash>(0xECF480, dataType, statIndex, charSlot); } // 0xD69CE161FE614531
static void _PLAYSTATS_FLOW_LOW(float posX, float posY, float posZ, const char* action, BOOL p4, int p5) { invoke<Void>(0xED0250, posX, posY, posZ, action, p4, p5); } // 0xE6A27CDA42887F93
static void _PLAYSTATS_FLOW_MEDIUM(float posX, float posY, float posZ, const char* action, BOOL p4, int p5) { invoke<Void>(0xED02C0, posX, posY, posZ, action, p4, p5); } // 0xC4493521BAA12CCE
static void _PLAYSTATS_FLOW_HIGH(float posX, float posY, float posZ, const char* action, BOOL p4, int p5) { invoke<Void>(0xED0330, posX, posY, posZ, action, p4, p5); } // 0xCFB0E9C3456319EA
static void _PLAYSTATS_NAMED_USER_CONTENT(BOOL isBoss, int bossType, int bossId1, int bossId2, int textType, const char* textString, int textSource) { invoke<Void>(0xED1240, isBoss, bossType, bossId1, bossId2, textType, textString, textSource); } // 0xAA434D7D0A89A95C
static void _PLAYSTATS_DEATH_INFO(Ped victimPed, Ped killerPed, int mentalState, BOOL revengeKill, int victimKvK, int killerKvK) { invoke<Void>(0xED4770, victimPed, killerPed, mentalState, revengeKill, victimKvK, killerKvK); } // 0x01D8B04D02F1217F
static void _PLAYSTATS_INIT_MULTIPLAYER(Any p0, Any p1, Any p2) { invoke<Void>(0xED5090, p0, p1, p2); } // 0x7E5EED10B11CEDBA
static void PLAYSTATS_VEH_DEL(int bossId1, int bossId2, int bossType, int vehicleID, int reason) { invoke<Void>(0xED5240, bossId1, bossId2, bossType, vehicleID, reason); } // 0x10A691F5756416D0
static void _PLAYSTATS_RANDOM_EVENT(Any p0) { invoke<Void>(0xED56E0, p0); } // 0x7EA06F970F999394
static void _PLAYSTATS_ALERT(Any* data) { invoke<Void>(0xED57A0, data); } // 0x5649CA22AF74E019
static void _PLAYSTATS_ATTRITION_STAGE_END(Any p0) { invoke<Void>(0xED57B0, p0); } // 0xBD642335A732F1A8
static void _PLAYSTATS_SHOWROOM_NAV(Any p0, Any p1, Hash entity) { invoke<Void>(0xED5810, p0, p1, entity); } // 0x961D4157B9B428DB
static void _PLAYSTATS_SHOWROOM_OVERVIEW(Any* data) { invoke<Void>(0xED58A0, data); } // 0x151D6C04C9E2742F
static void _PLAYSTATS_PIMENU_NAV(Any* data) { invoke<Void>(0xED5900, data); } // 0xE6D323A5E9EFFB76
static void _PLAYSTATS_RECOVER_VEHICLE(Any* data) { invoke<Void>(0xED5910, data); } // 0xBEB0D930B3CCE4D5
static void _PLAYSTATS_SCRIPT_EVENT_FPOM(Any* data) { invoke<Void>(0xED5A10, data); } // 0x574A7808450E141C
static void _PLAYSTATS_LOBBY_EXIT(Any* p0) { invoke<Void>(0xED5A80, p0); } // 0x4649D80CE1A35BA1
static void _PLAYSTATS_LOBBY_STARTED(Any* p0) { invoke<Void>(0xED5B10, p0); } // 0xDC00BB9C27347A8F
static void _PLAYSTATS_CREATOR_END(Any* p0) { invoke<Void>(0xED5B90, p0); } // 0x72289B8C78B02962
static void _PLAYSTATS_HEIST5_FINALE(Any* data) { invoke<Void>(0xED5C00, data); } // 0x8897A71C988F7936
static void _PLAYSTATS_HEIST5_PREP(Any* data) { invoke<Void>(0xED5C70, data); } // 0x3B144C0026DCBA41
static void _PLAYSTATS_HEIST5_HACK(Any* data) { invoke<Void>(0xED5C80, data); } // 0xBE656648E63C73D7
static float _GET_TOTAL_MODEL_COST(Hash modelHash) { return invoke<float>(0xEDB050, modelHash); } // 0x4A91423C04BAADA1
static void _SET_SPHERICAL_STREAM_DISTANT_HILODS_THIS_FRAME() { invoke<Void>(0xEDB170); } // 0x68F1C25420D5F6AA
static void TASK_SHARK_CIRCLE_COORD(Ped ped, float x, float y, float z, float moveBlendRatio, float radius) { invoke<Void>(0xEF2A90, ped, x, y, z, moveBlendRatio, radius); } // 0x60A19CF85FF4CEFA
static void SET_SEQUENCE_PREVENT_MIGRATION(int taskSequenceId) { invoke<Void>(0xEF38E0, taskSequenceId); } // 0xF5D1F489147CB683
static void CLEAR_PED_SCRIPT_TASK_IF_RUNNING_THREAT_RESPONSE_NON_TEMP_TASK(Ped ped) { invoke<Void>(0xEF3C30, ped); } // 0xF6DC48E56BE1243A
static void SET_PED_WAYPOINT_PROGRESS(Ped ped, int progress) { invoke<Void>(0xEF6C60, ped, progress); } // 0x686ECCD99D4E61BB
static BOOL VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(Vehicle vehicle) { return invoke<BOOL>(0xEF7730, vehicle); } // 0xE435D3539EFDCD1B
static void _SET_SCRIPT_TASK_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(Ped ped, BOOL enable) { invoke<Void>(0xEF8120, ped, enable); } // 0x32F6EEF031F943DC
static void _SET_AMBIENT_PED_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(Ped ped, BOOL enable) { invoke<Void>(0xEF81A0, ped, enable); } // 0x0EFE4834A2F40563
static BOOL _GET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(Vehicle vehicle) { return invoke<BOOL>(0xF1B0D0, vehicle); } // 0x613A431BCD5A22EB
static void _SET_VEHICLE_MAX_LAUNCH_ENGINE_REVS(Vehicle vehicle, float modifier) { invoke<Void>(0xF1C370, vehicle, modifier); } // 0x5AE614ECA5FDD423
static float _GET_VEHICLE_THROTTLE(Vehicle vehicle) { return invoke<float>(0xF1C3C0, vehicle); } // 0x92D96892FC06AF22
static BOOL HAVE_VEHICLE_REAR_DOORS_BEEN_BLOWN_OPEN_BY_STICKYBOMB(Vehicle vehicle) { return invoke<BOOL>(0xF1C6E0, vehicle); } // 0x6B407F2525E93644
static void _SET_PLANE_AVOIDS_OTHERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1E160, vehicle, toggle); } // 0xBAFB99B304BC52A7
static void _SET_MAKE_TRAIN_SCAN_FOR_BLOCKING_ENTITIES(Vehicle train, BOOL toggle) { invoke<Void>(0xF204C0, train, toggle); } // 0x559B6073DB7FFFF9
static int _GET_MISSION_TRAIN_CONFIG_INDEX_BY_NAME(const char* name) { return invoke<int>(0xF20510, name); } // 0x7DFAD92A34F09C00
static int _GET_VEHICLE_MODEL_NUM_DRIVE_GEARS(Hash vehicleModel) { return invoke<int>(0xF247B0, vehicleModel); } // 0x61F02E4E9A7A61EA
static int _GET_VEHICLE_MAX_DRIVE_GEAR_COUNT(Vehicle vehicle) { return invoke<int>(0xF247D0, vehicle); } // 0x24910C3D66BA770D
static BOOL _GET_IS_VEHICLE_ELECTRIC(Hash vehicleModel) { return invoke<BOOL>(0xF24830, vehicleModel); } // 0x1FCB07FE230B6639
static int _GET_VEHICLE_DRIVETRAIN_TYPE(Hash vehicleModel) { return invoke<int>(0xF24860, vehicleModel); } // 0x1423725069EE1D14
static int _GET_VEHICLE_CURRENT_DRIVE_GEAR(Vehicle vehicle) { return invoke<int>(0xF24880, vehicle); } // 0x56185A25D45A0DCD
static float _GET_VEHICLE_CURRENT_REV_RATIO(Vehicle vehicle) { return invoke<float>(0xF248E0, vehicle); } // 0xF9DDA40BC293A61E
static void _SET_ATTACHED_VEHICLE_TO_TOW_TRUCK_ARM(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0xF24BE0, towTruck, vehicle); } // 0x48BD57D0DD17786A
static void SET_VEHICLE_TAIL_BROKEN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25950, vehicle, toggle); } // 0x6CB5B84B78AC55FE
static void _SET_TRANSMISSION_REDUCED_GEAR_RATIO(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF27AA0, vehicle, toggle); } // 0x337EF33DA3DDB990
static int _GET_VEHICLE_DESIRED_DRIVE_GEAR(Vehicle vehicle) { return invoke<int>(0xF27B00, vehicle); } // 0xFD8CE53356B5D745
static void _ENABLE_INDIVIDUAL_PLANE_PROPELLER(Vehicle vehicle, int propeller) { invoke<Void>(0xF2AEF0, vehicle, propeller); } // 0xDC05D2777F855F44
static Any _SET_VEHICLE_EXPLOSIVE_DAMAGE_SCALE(Vehicle vehicle, float scale) { return invoke<Any>(0xF2C030, vehicle, scale); } // 0x84D7FFD223CAAFFD
static void _SET_VEHICLE_USE_HORN_BUTTON_FOR_NITROUS(BOOL toggle) { invoke<Void>(0xF2CCF0, toggle); } // 0x1980F68872CC2C3D
static void _SET_DISABLE_EXPLODE_FROM_BODY_DAMAGE_RECEIVED_BY_AI_VEHICLE(Vehicle vehicle, BOOL disable) { invoke<Void>(0xF2D000, vehicle, disable); } // 0xB0B7DF5CB876FF5E
static void SET_PLANE_CONTROL_SECTIONS_SHOULD_BREAK_OFF_FROM_EXPLOSIONS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D4D0, vehicle, toggle); } // 0xDD8A2D3337F04196
static void _SET_DEPLOY_MISSILE_BAYS(Vehicle vehicle, BOOL deploy) { invoke<Void>(0xF2DBA0, vehicle, deploy); } // 0x0C02468829E4AA65
static BOOL _ARE_MISSILE_BAYS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xF2DBF0, vehicle); } // 0xEA4743874D515F13
static BOOL _IS_VEHICLE_ON_BOOST_PAD(Vehicle vehicle) { return invoke<BOOL>(0xF2DF70, vehicle); } // 0x71C6302CBCA6CA35
static void _SET_NITROUS_IS_VISIBLE(Vehicle vehicle, BOOL enabled) { invoke<Void>(0xF2E1E0, vehicle, enabled); } // 0x465EEA70AF251045
static void _SET_OVERRIDE_TRACTION_LOSS_MULTIPLIER(Vehicle vehicle, float modifier) { invoke<Void>(0xF2E230, vehicle, modifier); } // 0xAFD262ACCA64479A
static void _SET_DRIFT_SLIP_ANGLE_LIMITS(Vehicle vehicle, float durationScalar, float amplitudeScalar, float slipAngleLimit) { invoke<Void>(0xF2E280, vehicle, durationScalar, amplitudeScalar, slipAngleLimit); } // 0xDAF4C98C18AC6F06
static void _SET_MINIMUM_TIME_BETWEEN_GEAR_SHIFTS(Vehicle vehicle, int time) { invoke<Void>(0xF2E300, vehicle, time); } // 0x16CFBC5E7EB32861
static void FULLY_CHARGE_NITROUS(Vehicle vehicle) { invoke<Void>(0xF2E340, vehicle); } // 0x1A2BCC8C636F9226
static void _SET_REMAINING_NITROUS_DURATION(Vehicle vehicle, float duration) { invoke<Void>(0xF2E390, vehicle, duration); } // 0x1AD0F63A94E10EFF
static float _GET_REMAINING_NITROUS_DURATION(Vehicle vehicle) { return invoke<float>(0xF2E3F0, vehicle); } // 0xBEC4B8653462450E
static BOOL IS_NITROUS_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xF2E440, vehicle); } // 0x491E822B2C464FE4
static void CLEAR_NITROUS(Vehicle vehicle) { invoke<Void>(0xF2E4A0, vehicle); } // 0xC889AE921400E1ED
static void SET_NITROUS_IS_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2E4F0, vehicle, toggle); } // 0x9E566EA551F4F1A6
static void APPLY_EMP_EFFECT(Vehicle vehicle) { invoke<Void>(0xF2E690, vehicle); } // 0x249249D74F813EB2
static void _SET_ALLOW_COLLISION_WHEN_IN_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2ED00, vehicle, toggle); } // 0x27D27223E8EF22ED
static BOOL _IS_VEHICLE_GEN9_EXCLUSIVE_MODEL(Hash vehicleModel) { return invoke<BOOL>(0xF2ED60, vehicleModel); } // 0x6638C0F19DE692FE
static int _GET_VEHICLE_MAX_EXHAUST_BONE_COUNT() { return invoke<int>(0xF2EDE0); } // 0x3EE18B00CD86C54F
static BOOL _GET_VEHICLE_EXHAUST_BONE(Vehicle vehicle, int index, int* boneIndex, BOOL* axisX) { return invoke<BOOL>(0xF2EDF0, vehicle, index, boneIndex, axisX); } // 0xE728F090D538CB18
static int _GET_TIME_BEFORE_VEHICLE_WEAPON_RELOAD_FINISHES(Vehicle vehicle, int seat) { return invoke<int>(0xF39460, vehicle, seat); } // 0xC8C6F4B1CDEB40EF
static BOOL _HAS_WEAPON_RELOADING_IN_VEHICLE(Vehicle vehicle, int seat) { return invoke<BOOL>(0xF394F0, vehicle, seat); } // 0x8062F07153F4446F
static float _GET_VEHICLE_WEAPON_RELOAD_TIME(Vehicle vehicle, int seat) { return invoke<float>(0xF39580, vehicle, seat); } // 0xD0AD348FFD7A6868
static BOOL _GET_AMMO_IN_VEHICLE_WEAPON_CLIP(Vehicle vehicle, int seat, int* ammo) { return invoke<BOOL>(0xF39630, vehicle, seat, ammo); } // 0x2857938C5D407AFA
static BOOL _SET_AMMO_IN_VEHICLE_WEAPON_CLIP(Vehicle vehicle, int seat, int ammo) { return invoke<BOOL>(0xF39780, vehicle, seat, ammo); } // 0x873906720EE842C3
static BOOL _TRIGGER_VEHICLE_WEAPON_RELOAD(Vehicle vehicle, int seat, Ped ped) { return invoke<BOOL>(0xF3A150, vehicle, seat, ped); } // 0x5B1513F27F279A44
static BOOL HAS_PED_GOT_WEAPON_MANAGER(Ped ped) { return invoke<BOOL>(0xF3A300, ped); } // 0xDB7CCCD153740D8E
static void _SET_WEAPON_PED_DAMAGE_MODIFIER(Hash weapon, float damageModifier) { invoke<Void>(0xF3ACC0, weapon, damageModifier); } // 0x1091922715B68DF0
