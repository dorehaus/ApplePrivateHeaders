/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVB17221AEMCVFStreamFormat.h>

@interface AVB17221AEMCVFMJPEGStreamForamt : AVB17221AEMCVFStreamFormat

@property (getter=isProgressiveScan) char progressiveScan; 
@property (assign) unsigned char type; 
@property (assign) unsigned char width; 
@property (assign) unsigned char height; 
+(id)keyPathsForValuesAffectingWidth;
+(id)keyPathsForValuesAffectingProgressiveScan;
+(id)keyPathsForValuesAffectingType;
+(id)keyPathsForValuesAffectingHeight;
-(id)init;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(void)setWidth:(unsigned char)arg1 ;
-(void)setHeight:(unsigned char)arg1 ;
-(unsigned char)width;
-(unsigned char)height;
-(unsigned)maximumPDUSize;
-(void)setProgressiveScan:(char)arg1 ;
-(char)isProgressiveScan;
@end
