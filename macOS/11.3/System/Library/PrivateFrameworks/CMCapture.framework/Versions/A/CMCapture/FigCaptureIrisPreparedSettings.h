/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying> {

	long long _settingsID;
	unsigned _processedOutputFormat;
	unsigned _rawOutputFormat;
	unsigned _outputWidth;
	unsigned _outputHeight;
	unsigned _bracketedImageCount;
	int _qualityPrioritization;
	int _HDRMode;
	int _digitalFlashMode;
	NSArray* _bravoConstituentImageDeliveryDeviceTypes;

}

@property (assign,nonatomic) long long settingsID;                                          //@synthesize settingsID=_settingsID - In the implementation block
@property (assign,nonatomic) unsigned processedOutputFormat;                                //@synthesize processedOutputFormat=_processedOutputFormat - In the implementation block
@property (assign,nonatomic) unsigned rawOutputFormat;                                      //@synthesize rawOutputFormat=_rawOutputFormat - In the implementation block
@property (assign,nonatomic) unsigned outputWidth;                                          //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) unsigned outputHeight;                                         //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) unsigned bracketedImageCount;                                  //@synthesize bracketedImageCount=_bracketedImageCount - In the implementation block
@property (assign,nonatomic) int qualityPrioritization;                                     //@synthesize qualityPrioritization=_qualityPrioritization - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                   //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) int digitalFlashMode;                                          //@synthesize digitalFlashMode=_digitalFlashMode - In the implementation block
@property (nonatomic,copy) NSArray * bravoConstituentImageDeliveryDeviceTypes;              //@synthesize bravoConstituentImageDeliveryDeviceTypes=_bravoConstituentImageDeliveryDeviceTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(long long)settingsID;
-(void)setSettingsID:(long long)arg1 ;
-(void)setOutputWidth:(unsigned)arg1 ;
-(void)setOutputHeight:(unsigned)arg1 ;
-(void)setDigitalFlashMode:(int)arg1 ;
-(void)setHDRMode:(int)arg1 ;
-(int)digitalFlashMode;
-(int)HDRMode;
-(unsigned)rawOutputFormat;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(unsigned)outputWidth;
-(unsigned)outputHeight;
-(void)setQualityPrioritization:(int)arg1 ;
-(int)qualityPrioritization;
-(void)setBravoConstituentImageDeliveryDeviceTypes:(NSArray *)arg1 ;
-(unsigned)bracketedImageCount;
-(void)setBracketedImageCount:(unsigned)arg1 ;
-(unsigned)processedOutputFormat;
-(void)setProcessedOutputFormat:(unsigned)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)bravoConstituentImageDeliveryDeviceTypes;
-(id)figCaptureStillImageSettingsRepresentation;
@end

