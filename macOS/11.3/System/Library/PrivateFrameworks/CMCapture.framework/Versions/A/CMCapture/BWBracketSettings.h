/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface BWBracketSettings : NSObject <NSSecureCoding> {

	int _bracketingMode;
	char _providePreBracketedEV0;
	char _lensStabilizationEnabledForClientBracket;
	NSArray* _exposureValues;
	NSArray* _manualExposureBracketedCaptureParams;
	NSDictionary* _oisBracketedCaptureParams;

}

@property (nonatomic,readonly) int bracketingMode;                                       //@synthesize bracketingMode=_bracketingMode - In the implementation block
@property (nonatomic,readonly) int bracketFrameCount; 
@property (assign,nonatomic) char providePreBracketedEV0;                                //@synthesize providePreBracketedEV0=_providePreBracketedEV0 - In the implementation block
@property (assign,nonatomic) char lensStabilizationEnabledForClientBracket;              //@synthesize lensStabilizationEnabledForClientBracket=_lensStabilizationEnabledForClientBracket - In the implementation block
@property (nonatomic,copy) NSArray * exposureValues;                                     //@synthesize exposureValues=_exposureValues - In the implementation block
@property (nonatomic,copy) NSArray * manualExposureBracketedCaptureParams;               //@synthesize manualExposureBracketedCaptureParams=_manualExposureBracketedCaptureParams - In the implementation block
@property (nonatomic,copy) NSDictionary * oisBracketedCaptureParams;                     //@synthesize oisBracketedCaptureParams=_oisBracketedCaptureParams - In the implementation block
+(char)supportsSecureCoding;
+(id)bracketSettingsForBracketingMode:(int)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)exposureValues;
-(NSDictionary *)oisBracketedCaptureParams;
-(char)providePreBracketedEV0;
-(void)setProvidePreBracketedEV0:(char)arg1 ;
-(void)setExposureValues:(NSArray *)arg1 ;
-(void)setOisBracketedCaptureParams:(NSDictionary *)arg1 ;
-(char)lensStabilizationEnabledForClientBracket;
-(int)bracketingMode;
-(NSArray *)manualExposureBracketedCaptureParams;
-(void)setLensStabilizationEnabledForClientBracket:(char)arg1 ;
-(void)setManualExposureBracketedCaptureParams:(NSArray *)arg1 ;
-(int)bracketFrameCount;
-(id)initWithBracketingMode:(int)arg1 ;
-(id)classesForExposureValues;
-(id)classesForManualExposureBracketedCaptureParams;
-(id)classesForOisBracketedCaptureParams;
@end

