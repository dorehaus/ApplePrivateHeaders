/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVB17221AEMStandardStreamFormat.h>

@class AVB17221AEMSamplingRate;

@interface AVB17221AEMCRFStreamFormat : AVB17221AEMStandardStreamFormat

@property (assign) unsigned char type; 
@property (assign) unsigned short timestampInterval; 
@property (assign) unsigned char timestampsPerPDU; 
@property (nonatomic,copy) AVB17221AEMSamplingRate * samplingRate; 
+(id)keyPathsForValuesAffectingType;
+(id)keyPathsForValuesAffectingTimestampInterval;
+(id)keyPathsForValuesAffectingTimestampsPerPDU;
-(id)init;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(void)setSamplingRate:(AVB17221AEMSamplingRate *)arg1 ;
-(AVB17221AEMSamplingRate *)samplingRate;
-(char)isClockFormat;
-(unsigned)maximumPDUSize;
-(unsigned)maximumPayloadSize;
-(unsigned short)maximumIntervalFrames;
-(unsigned char)timestampsPerPDU;
-(void)setTimestampInterval:(unsigned short)arg1 ;
-(unsigned short)timestampInterval;
-(void)setTimestampsPerPDU:(unsigned char)arg1 ;
@end
