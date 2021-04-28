/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned startTimestamp : 1;
	unsigned stopTimestamp : 1;
	unsigned collectionType : 1;
} SCD_Struct_CL1;

typedef struct {
	unsigned age : 1;
	unsigned loiType : 1;
	unsigned routineMode : 1;
	unsigned serverHash : 1;
} SCD_Struct_CL2;

typedef struct {
	unsigned outdoorConfidence : 1;
	unsigned mapMatchRoadType : 1;
	unsigned isCalibratedBarometricAlt : 1;
	unsigned isMapMatched : 1;
	unsigned isOutdoorContext : 1;
} SCD_Struct_CL3;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_CL4;

typedef struct {
	unsigned latitudeDeg : 1;
	unsigned longitudeDeg : 1;
	unsigned timeSinceLastSignificantLocationVisitExitS : 1;
	unsigned timestampOfCalibrationS : 1;
	unsigned altitudeHAEM : 1;
	unsigned altitudeHAEUncM : 1;
	unsigned calibratedPressurePa : 1;
	unsigned calibratedPressureUncPa : 1;
	unsigned devicePressurePa : 1;
	unsigned devicePressureUncPa : 1;
	unsigned horizontalUncM : 1;
	unsigned referenceAltM : 1;
	unsigned referenceAltUncM : 1;
	unsigned reliability : 1;
	unsigned speedMps : 1;
	unsigned speedUncMps : 1;
} SCD_Struct_CL5;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CL6;

typedef struct {
	unsigned arfcn : 1;
	unsigned ecn0 : 1;
	unsigned psc : 1;
	unsigned rat : 1;
	unsigned rscp : 1;
	unsigned serverHash : 1;
	unsigned transmit : 1;
	unsigned isLimitedService : 1;
} SCD_Struct_CL7;

typedef struct {
	unsigned firstStepTime : 1;
	unsigned timestamp : 1;
	unsigned activeTime : 1;
	unsigned distance : 1;
	unsigned floorsAscended : 1;
	unsigned floorsDescended : 1;
	unsigned numberOfSteps : 1;
} SCD_Struct_CL8;

typedef struct {
	unsigned age : 1;
	unsigned hidden : 1;
} SCD_Struct_CL9;

typedef struct {
	unsigned applicableTimeSec : 1;
	unsigned d2vtecDphi2 : 1;
	unsigned d2vtecDtheta2 : 1;
	unsigned d2vtecDthetaphi : 1;
	unsigned dvtecDphi : 1;
	unsigned dvtecDtheta : 1;
	unsigned estimatorAgeSec : 1;
	unsigned geodeticAltitudeM : 1;
	unsigned hmaxKm : 1;
	unsigned latitudeDeg : 1;
	unsigned longitudeDeg : 1;
	unsigned pd2vtecDphi2D2vtecDphi2 : 1;
	unsigned pd2vtecDtheta2D2vtecDtheta2 : 1;
	unsigned pd2vtecDthetadphiD2vtecDthetadphi : 1;
	unsigned pdvtecDphiDvtecDphi : 1;
	unsigned pdvtecDthetaDvtecDtheta : 1;
	unsigned phmaxHmaxKm2 : 1;
	unsigned pvtec0Vtec0 : 1;
	unsigned vtec0 : 1;
} SCD_Struct_CL10;

typedef struct {
	unsigned altitude : 1;
	unsigned context : 1;
	unsigned course : 1;
	unsigned courseAccuracy : 1;
	unsigned floor : 1;
	unsigned horzUncSemiMaj : 1;
	unsigned horzUncSemiMajAz : 1;
	unsigned horzUncSemiMin : 1;
	unsigned modeIndicator : 1;
	unsigned motionActivityConfidence : 1;
	unsigned motionActivityType : 1;
	unsigned provider : 1;
	unsigned speed : 1;
	unsigned speedAccuracy : 1;
	unsigned verticalAccuracy : 1;
	unsigned isFromLocationController : 1;
	unsigned motionVehicleConnected : 1;
	unsigned motionVehicleConnectedStateChanged : 1;
} SCD_Struct_CL11;

typedef struct {
	unsigned cellLatitude : 1;
	unsigned cellLongitude : 1;
	unsigned bandInfo : 1;
	unsigned bandwidth : 1;
	unsigned deploymentType : 1;
	unsigned downlinkBandwidth : 1;
	unsigned ecn0 : 1;
	unsigned latency : 1;
	unsigned pid : 1;
	unsigned rscp : 1;
	unsigned rssi : 1;
	unsigned serverHash : 1;
	unsigned uarfcn : 1;
	unsigned isLimitedService : 1;
	unsigned isStalled : 1;
} SCD_Struct_CL12;

typedef struct {
	unsigned cellLatitude : 1;
	unsigned cellLongitude : 1;
	unsigned ci : 1;
	unsigned bandInfo : 1;
	unsigned bandwidth : 1;
	unsigned downlinkBandwidth : 1;
	unsigned ecn0 : 1;
	unsigned gscn : 1;
	unsigned latency : 1;
	unsigned mcc : 1;
	unsigned mnc : 1;
	unsigned nrarfcn : 1;
	unsigned pid : 1;
	unsigned rscp : 1;
	unsigned rssi : 1;
	unsigned scs : 1;
	unsigned serverHash : 1;
	unsigned tac : 1;
	unsigned isLimitedService : 1;
	unsigned isStalled : 1;
} SCD_Struct_CL13;

typedef struct {
	double list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CL14;

typedef struct {
	unsigned prbCoarseIndoorSaysIndoor : 1;
	unsigned prbGpsSaysIndoor : 1;
	unsigned prbInjectionGainRetryLimitOk : 1;
	unsigned prbInjectionOccupancyRetryLimitOk : 1;
	unsigned prbInlierEstimate : 1;
	unsigned prbLocalizerIoWrapperSaysWifiOk : 1;
	unsigned prbOnFloorsEstimate : 1;
	unsigned prbParticleFilterSaysYield : 1;
	unsigned prbPipelinedSaysYield : 1;
	unsigned prbWifiSaysIndoor : 1;
	unsigned pfYieldStatusBeforeCalculatePose : 1;
	unsigned yieldStatusBeforeCalculatePose : 1;
	unsigned yieldType : 1;
} SCD_Struct_CL15;

typedef struct {
	char list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CL16;

