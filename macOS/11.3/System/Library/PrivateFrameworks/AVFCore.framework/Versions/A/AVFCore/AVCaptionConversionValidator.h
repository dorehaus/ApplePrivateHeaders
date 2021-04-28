/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSArray;

@interface AVCaptionConversionValidator : NSObject {

	void* _validatorInternal;

}

@property (readonly) long long status; 
@property (readonly) NSArray * captions; 
@property (readonly) SCD_Struct_CM5 timeRange; 
@property (readonly) NSArray * warnings; 
+(id)captionConversionValidatorWithCaptions:(id)arg1 timeRange:(SCD_Struct_CM5)arg2 conversionSettings:(id)arg3 ;
+(id)mutableCaptionArray;
-(void)dealloc;
-(long long)status;
-(NSArray *)warnings;
-(SCD_Struct_CM5)timeRange;
-(NSArray *)captions;
-(id)initWithCaptions:(id)arg1 timeRange:(SCD_Struct_CM5)arg2 conversionSettings:(id)arg3 ;
-(char)_isConversionToClosedCaptions:(id)arg1 ;
-(void)_completeValidation;
-(void)stopValidating;
-(void)_issueWarningForFigDictionary:(CFDictionaryRef)arg1 ;
-(void)validateCaptionConversionWithWarningHandler:(/*^block*/id)arg1 ;
@end

