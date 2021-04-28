/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVB17221AEMSamplingRate;

@interface AVB17221AEMSamplingRateRange : NSObject <NSCopying> {

	AVB17221AEMSamplingRate* minimumRate;
	AVB17221AEMSamplingRate* maximumRate;

}

@property (copy) AVB17221AEMSamplingRate * minimumRate; 
@property (copy) AVB17221AEMSamplingRate * maximumRate; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)plistRepresentation;
-(AVB17221AEMSamplingRate *)minimumRate;
-(AVB17221AEMSamplingRate *)maximumRate;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(void)setMinimumRate:(AVB17221AEMSamplingRate *)arg1 ;
-(void)setMaximumRate:(AVB17221AEMSamplingRate *)arg1 ;
@end

