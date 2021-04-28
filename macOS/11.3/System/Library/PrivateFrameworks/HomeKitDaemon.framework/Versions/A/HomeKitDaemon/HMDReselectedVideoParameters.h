/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoAttributes, HMDReselectedRTPParameters;

@interface HMDReselectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDVideoAttributes* _videoAttributes;
	HMDReselectedRTPParameters* _rtpParameters;

}

@property (nonatomic,copy,readonly) HMDVideoAttributes * videoAttributes;                    //@synthesize videoAttributes=_videoAttributes - In the implementation block
@property (nonatomic,copy,readonly) HMDReselectedRTPParameters * rtpParameters;              //@synthesize rtpParameters=_rtpParameters - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDVideoAttributes *)videoAttributes;
-(char)_parseFromTLVData;
-(id)tlvData;
-(HMDReselectedRTPParameters *)rtpParameters;
-(id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2 ;
@end
