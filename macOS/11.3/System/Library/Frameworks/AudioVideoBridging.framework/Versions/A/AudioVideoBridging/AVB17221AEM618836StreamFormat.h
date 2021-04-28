/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVB17221AEM61883StreamFormat.h>

@interface AVB17221AEM618836StreamFormat : AVB17221AEM61883StreamFormat

@property (readonly) unsigned char fdfEvt; 
@property (assign) unsigned char fdfSfc; 
@property (assign) unsigned char dbs; 
@property (getter=isBlockingMode) char blockingMode; 
@property (getter=isNonblockingMode) char nonblockingMode; 
@property (assign) char upTo; 
@property (getter=isSynchronousClock) char synchronousClock; 
+(id)keyPathsForValuesAffectingFdfEvt;
+(id)keyPathsForValuesAffectingFdfSfc;
+(id)keyPathsForValuesAffectingDbs;
+(id)keyPathsForValuesAffectingBlockingMode;
+(id)keyPathsForValuesAffectingNonblockingMode;
+(id)keyPathsForValuesAffectingUpTo;
+(id)keyPathsForValuesAffectingSynchronousClock;
-(id)init;
-(unsigned char)dbs;
-(void)setDbs:(unsigned char)arg1 ;
-(void)setSamplingRate:(id)arg1 ;
-(id)samplingRate;
-(unsigned short)numberOfAudioChannels;
-(void)setBlockingMode:(char)arg1 ;
-(char)isSupportedAudioFormat;
-(void)setUpTo:(char)arg1 ;
-(char)isAudioFormat;
-(char)isCompatibleAsListenerForFormat:(id)arg1 ;
-(unsigned)maximumPDUSize;
-(unsigned)maximumPayloadSize;
-(unsigned short)maximumIntervalFrames;
-(char)isPotentiallyCompatibleAsListenerForFormat:(id)arg1 ;
-(unsigned char)fdfEvt;
-(unsigned char)fdfSfc;
-(char)isBlockingMode;
-(char)isSynchronousClock;
-(char)isNonblockingMode;
-(void)setFdfSfc:(unsigned char)arg1 ;
-(char)upTo;
-(void)setFdfEvt:(unsigned char)arg1 ;
-(void)setNonblockingMode:(char)arg1 ;
-(void)setSynchronousClock:(char)arg1 ;
@end

