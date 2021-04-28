/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMCluster.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVB17221AEMSensorFormat, AVB17221AEMSamplingRate, NSArray;

@interface AVB17221AEMSensorCluster : AVB17221AEMCluster <NSCopying> {

	AVB17221AEMSensorFormat* currentSensorFormat;
	AVB17221AEMSamplingRate* currentSamplingRate;
	NSArray* formats;
	NSArray* samplingRates;

}

@property (copy) AVB17221AEMSensorFormat * currentSensorFormat; 
@property (copy) AVB17221AEMSamplingRate * currentSamplingRate; 
@property (copy) NSArray * formats; 
@property (copy) NSArray * samplingRates; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned long long)setDescriptor:(/*function pointer*/void**)arg1 ;
-(NSArray *)samplingRates;
-(NSArray *)formats;
-(id)plistRepresentation;
-(void)setFormats:(NSArray *)arg1 ;
-(char)updateWithDescriptor:(/*function pointer*/void**)arg1 descriptorLength:(unsigned short)arg2 ;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2 ;
-(void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2 ;
-(id)xmlKey;
-(char)isExpectedDescriptorType:(unsigned short)arg1 ;
-(id)objectLogName;
-(void)setCurrentSamplingRate:(AVB17221AEMSamplingRate *)arg1 ;
-(void)setSamplingRates:(NSArray *)arg1 ;
-(AVB17221AEMSamplingRate *)currentSamplingRate;
-(AVB17221AEMSensorFormat *)currentSensorFormat;
-(void)setCurrentSensorFormat:(AVB17221AEMSensorFormat *)arg1 ;
@end

