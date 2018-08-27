const size_t bufferSize = 40*JSON_ARRAY_SIZE(0) + JSON_ARRAY_SIZE(1) + 2*JSON_ARRAY_SIZE(3) + 2*JSON_ARRAY_SIZE(4) + JSON_ARRAY_SIZE(5) + 4*JSON_ARRAY_SIZE(8) + 2*JSON_ARRAY_SIZE(10) + JSON_OBJECT_SIZE(8) + JSON_OBJECT_SIZE(105) + 2260;
DynamicJsonBuffer jsonBuffer(bufferSize);

const char* json = "{\"version\":\"1.3.1\",\"revision\":\"1\",\"mode\":\"C\",\"timeindex\":[-1,0,0,0,0,0,0,0],\"flavors\":[5,5,5,5,5,5,5,5,5,5],\"flavorlabels\":[\"Fragrance/Aroma\",\"Flavor/Taste\",\"Aftertaste/Finish\",\"Acidity/Brightness\",\"Body/Mouthfeel\",\"Balance\",\"Sweetness\",\"Cleanliness\",\"Overall/Complexity\",\"Correction/Other\"],\"flavorstartangle\":90,\"flavoraspect\":1,\"title\":\"\\u70d8\\u7119\\u8a18\\u9304\\u5100\",\"beans\":\"\",\"weight\":[0,0,\"g\"],\"volume\":[0,0,\"ml\"],\"density\":[0,\"g\",0,\"l\"],\"roastertype\":\"Huky 500 (Solid drum)\",\"operator\":\"Joel Spandel\",\"drumspeed\":\"\",\"heavyFC\":false,\"lowFC\":false,\"lightCut\":false,\"darkCut\":false,\"drops\":false,\"oily\":false,\"uneven\":false,\"tipping\":false,\"scorching\":false,\"divots\":false,\"whole_color\":0,\"ground_color\":0,\"color_system\":\"\",\"volumeCalcWeightIn\":\"\",\"volumeCalcWeightOut\":\"\",\"roastdate\":\"Mon Aug 13 2018\",\"roastisodate\":\"2018-08-13\",\"roasttime\":\"12:47:01\",\"roastepoch\":1534164421,\"roasttzoffset\":0,\"roastbatchnr\":0,\"roastbatchprefix\":\"\",\"roastbatchpos\":1,\"beansize\":\"0.0\",\"specialevents\":[],\"specialeventstype\":[],\"specialeventsvalue\":[],\"specialeventsStrings\":[],\"etypes\":[\"Wind\",\"Drum\",\"\\u963b\\u5c3c\",\"Target\",\"--\"],\"roastingnotes\":\"\",\"cuppingnotes\":\"\",\"timex\":[],\"temp1\":[],\"temp2\":[],\"phases\":[93,149,199,232],\"zmax\":35,\"zmin\":-5,\"ymax\":250,\"ymin\":0,\"xmin\":-60,\"xmax\":939.088,\"ambientTemp\":0,\"ambient_humidity\":0,\"moisture_greens\":0,\"greens_temp\":0,\"moisture_roasted\":0,\"extradevices\":[],\"extraname1\":[],\"extraname2\":[],\"extratimex\":[],\"extratemp1\":[],\"extratemp2\":[],\"extramathexpression1\":[],\"extramathexpression2\":[],\"extradevicecolor1\":[],\"extradevicecolor2\":[],\"extramarkersizes1\":[],\"extramarkersizes2\":[],\"extramarkers1\":[],\"extramarkers2\":[],\"extralinewidths1\":[],\"extralinewidths2\":[],\"extralinestyles1\":[],\"extralinestyles2\":[],\"extradrawstyles1\":[],\"extradrawstyles2\":[],\"externalprogram\":\"\",\"externaloutprogram\":\"\",\"extraNoneTempHint1\":[],\"extraNoneTempHint2\":[],\"alarmflag\":[],\"alarmguard\":[],\"alarmnegguard\":[],\"alarmtime\":[],\"alarmoffset\":[],\"alarmcond\":[],\"alarmsource\":[],\"alarmtemperature\":[],\"alarmaction\":[],\"alarmbeep\":[],\"alarmstrings\":[],\"backgroundpath\":\"C:/Users/Justin/Downloads/2-2016053103214901.alog\",\"samplinginterval\":null,\"oversampling\":true,\"svValues\":[0,0,0,0,0,0,0,0],\"svRamps\":[0,0,0,0,0,0,0,0],\"svSoaks\":[0,0,0,0,0,0,0,0],\"devices\":[\"MODBUS\"],\"computed\":{\"dryphaseeval\":\"\\u8349\\u9752\\u5473\",\"midphaseeval\":\"\\u70e4\\u9eb5\\u5305\\u5473\",\"finishphaseeval\":\"\\u9178\",\"coolphaseeval\":\"\\u58d3\\u88c2\",\"volumein\":0,\"volumeout\":0,\"weightin\":0,\"weightout\":0}}";

JsonObject& root = jsonBuffer.parseObject(json);

const char* version = root["version"]; // "1.3.1"
const char* revision = root["revision"]; // "1"
const char* mode = root["mode"]; // "C"

JsonArray& timeindex = root["timeindex"];
int timeindex0 = timeindex[0]; // -1
int timeindex1 = timeindex[1]; // 0
int timeindex2 = timeindex[2]; // 0
int timeindex3 = timeindex[3]; // 0

JsonArray& flavors = root["flavors"];
int flavors0 = flavors[0]; // 5
int flavors1 = flavors[1]; // 5
int flavors2 = flavors[2]; // 5
int flavors3 = flavors[3]; // 5

JsonArray& flavorlabels = root["flavorlabels"];
const char* flavorlabels0 = flavorlabels[0]; // "Fragrance/Aroma"
const char* flavorlabels1 = flavorlabels[1]; // "Flavor/Taste"
const char* flavorlabels2 = flavorlabels[2]; // "Aftertaste/Finish"
const char* flavorlabels3 = flavorlabels[3]; // "Acidity/Brightness"

int flavorstartangle = root["flavorstartangle"]; // 90
int flavoraspect = root["flavoraspect"]; // 1
const char* title = root["title"]; // "\\u70d8\\u7119\\u8a18\\u9304\\u5100"
const char* beans = root["beans"]; // ""

JsonArray& weight = root["weight"];
int weight0 = weight[0]; // 0
int weight1 = weight[1]; // 0
const char* weight2 = weight[2]; // "g"

JsonArray& volume = root["volume"];
int volume0 = volume[0]; // 0
int volume1 = volume[1]; // 0
const char* volume2 = volume[2]; // "ml"

JsonArray& density = root["density"];
int density0 = density[0]; // 0
const char* density1 = density[1]; // "g"
int density2 = density[2]; // 0
const char* density3 = density[3]; // "l"

const char* roastertype = root["roastertype"]; // "Huky 500 (Solid drum)"
const char* operator = root["operator"]; // "Joel Spandel"
const char* drumspeed = root["drumspeed"]; // ""
bool heavyFC = root["heavyFC"]; // false
bool lowFC = root["lowFC"]; // false
bool lightCut = root["lightCut"]; // false
bool darkCut = root["darkCut"]; // false
bool drops = root["drops"]; // false
bool oily = root["oily"]; // false
bool uneven = root["uneven"]; // false
bool tipping = root["tipping"]; // false
bool scorching = root["scorching"]; // false
bool divots = root["divots"]; // false
int whole_color = root["whole_color"]; // 0
int ground_color = root["ground_color"]; // 0
const char* color_system = root["color_system"]; // ""
const char* volumeCalcWeightIn = root["volumeCalcWeightIn"]; // ""
const char* volumeCalcWeightOut = root["volumeCalcWeightOut"]; // ""
const char* roastdate = root["roastdate"]; // "Mon Aug 13 2018"
const char* roastisodate = root["roastisodate"]; // "2018-08-13"
const char* roasttime = root["roasttime"]; // "12:47:01"
long roastepoch = root["roastepoch"]; // 1534164421
int roasttzoffset = root["roasttzoffset"]; // 0
int roastbatchnr = root["roastbatchnr"]; // 0
const char* roastbatchprefix = root["roastbatchprefix"]; // ""
int roastbatchpos = root["roastbatchpos"]; // 1
const char* beansize = root["beansize"]; // "0.0"

JsonArray& etypes = root["etypes"];
const char* etypes0 = etypes[0]; // "Wind"
const char* etypes1 = etypes[1]; // "Drum"
const char* etypes2 = etypes[2]; // "\\u963b\\u5c3c"
const char* etypes3 = etypes[3]; // "Target"

const char* roastingnotes = root["roastingnotes"]; // ""
const char* cuppingnotes = root["cuppingnotes"]; // ""

JsonArray& phases = root["phases"];
int phases0 = phases[0]; // 93
int phases1 = phases[1]; // 149
int phases2 = phases[2]; // 199
int phases3 = phases[3]; // 232

int zmax = root["zmax"]; // 35
int zmin = root["zmin"]; // -5
int ymax = root["ymax"]; // 250
int ymin = root["ymin"]; // 0
int xmin = root["xmin"]; // -60
float xmax = root["xmax"]; // 939.088
int ambientTemp = root["ambientTemp"]; // 0
int ambient_humidity = root["ambient_humidity"]; // 0
int moisture_greens = root["moisture_greens"]; // 0
int greens_temp = root["greens_temp"]; // 0
int moisture_roasted = root["moisture_roasted"]; // 0

const char* externalprogram = root["externalprogram"]; // ""
const char* externaloutprogram = root["externaloutprogram"]; // ""

const char* backgroundpath = root["backgroundpath"]; // "C:/Users/Justin/Downloads/2-2016053103214901.alog"
bool oversampling = root["oversampling"]; // true

JsonArray& svValues = root["svValues"];
int svValues0 = svValues[0]; // 0
int svValues1 = svValues[1]; // 0
int svValues2 = svValues[2]; // 0
int svValues3 = svValues[3]; // 0

JsonArray& svRamps = root["svRamps"];
int svRamps0 = svRamps[0]; // 0
int svRamps1 = svRamps[1]; // 0
int svRamps2 = svRamps[2]; // 0
int svRamps3 = svRamps[3]; // 0

JsonArray& svSoaks = root["svSoaks"];
int svSoaks0 = svSoaks[0]; // 0
int svSoaks1 = svSoaks[1]; // 0
int svSoaks2 = svSoaks[2]; // 0
int svSoaks3 = svSoaks[3]; // 0

const char* devices0 = root["devices"][0]; // "MODBUS"

JsonObject& computed = root["computed"];
const char* computed_dryphaseeval = computed["dryphaseeval"]; // "\\u8349\\u9752\\u5473"
const char* computed_midphaseeval = computed["midphaseeval"]; // "\\u70e4\\u9eb5\\u5305\\u5473"
const char* computed_finishphaseeval = computed["finishphaseeval"]; // "\\u9178"
const char* computed_coolphaseeval = computed["coolphaseeval"]; // "\\u58d3\\u88c2"
int computed_volumein = computed["volumein"]; // 0
int computed_volumeout = computed["volumeout"]; // 0
int computed_weightin = computed["weightin"]; // 0
int computed_weightout = computed["weightout"]; // 0
