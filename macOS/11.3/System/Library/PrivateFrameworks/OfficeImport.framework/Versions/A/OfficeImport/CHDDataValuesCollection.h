/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValuesCollection : NSObject {

	CFDataRef mPackedValues;
	unsigned long long mDataValueCount;
	CFDictionaryRef mIndexToDataValueMap;
	BOOL mContainsStringValue;

}
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)cleanup;
-(CHDDataPoint*)dataPointAtIndex:(unsigned long long)arg1 ;
-(BOOL)addDataPoint:(CHDDataPoint*)arg1 ;
-(id)dataValueAtIndex:(unsigned long long)arg1 ;
-(void)finishReading;
-(id)initWithDataPointCount:(unsigned long long)arg1 ;
-(void)setupBufferForValues:(unsigned long long)arg1 ;
-(CHDDataPoint*)dataPointWithIndex:(unsigned long long)arg1 ;
-(void)resetWithDataPointCount:(unsigned long long)arg1 ;
-(BOOL)addDataValue:(id)arg1 ;
-(id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2 ;
-(id)dataValueWithIndex:(unsigned long long)arg1 ;
-(unsigned long long)maxDataPointIndex;
-(BOOL)containsStringValue;
@end

