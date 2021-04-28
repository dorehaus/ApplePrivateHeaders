/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_PM0;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_PM1;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned timestamp : 1;
	unsigned weightsL2norm : 1;
	unsigned weightsScaleFactor : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW5;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW6;

typedef struct {
	float list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW7;

typedef struct {
	unsigned long long s[2];
} SCD_Struct_PM8;

typedef struct {
	unsigned columnLength : 1;
	unsigned rowLength : 1;
} SCD_Struct_AW9;

typedef struct {
	unsigned bucketSize : 1;
	unsigned columnLength : 1;
	unsigned minValue : 1;
	unsigned rowLength : 1;
} SCD_Struct_AW10;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	float gaussianScaleFactor;
	float laplaceScaleFactor;
} SCD_Struct_PM12;

typedef struct {
	unsigned falseNegatives : 1;
	unsigned falsePositives : 1;
	unsigned trueNegatives : 1;
	unsigned truePositives : 1;
	unsigned f1 : 1;
	unsigned rmse : 1;
	unsigned secsToExecute : 1;
} SCD_Struct_AW13;

typedef struct sparse_m_float* sparse_m_floatRef;

