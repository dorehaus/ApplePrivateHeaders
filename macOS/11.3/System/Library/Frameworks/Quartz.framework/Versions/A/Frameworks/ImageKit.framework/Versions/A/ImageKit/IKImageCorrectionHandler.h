/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKScanUIControllerAdvanced, NSMutableArray, NSArray;

@interface IKImageCorrectionHandler : NSObject {

	IKScanUIControllerAdvanced* _scanUIController;
	NSMutableArray* _imageCorrections;
	long long _currentOverviewImageMode;
	int _imageCorrectionMode;
	char _manualCorrectionEnabled;
	char _textModeDitheringEnabled;

}

@property (assign) IKScanUIControllerAdvanced * scanUIController;              //@synthesize scanUIController=_scanUIController - In the implementation block
@property (assign,nonatomic) char textModeDitheringEnabled;                    //@synthesize textModeDitheringEnabled=_textModeDitheringEnabled - In the implementation block
@property (assign) char manualCorrectionEnabled;                               //@synthesize manualCorrectionEnabled=_manualCorrectionEnabled - In the implementation block
@property (readonly) NSArray * imageCorrections;                               //@synthesize imageCorrections=_imageCorrections - In the implementation block
-(IKScanUIControllerAdvanced *)scanUIController;
-(void)setScanUIController:(IKScanUIControllerAdvanced *)arg1 ;
-(CGImageRef)copyCorrectedImageFromImage:(CGImageRef)arg1 ciContext:(id)arg2 cgContext:(CGContextRef)arg3 requestedBitDepth:(unsigned long long)arg4 ;
-(CGContextRef)createContextForCGImage:(CGImageRef)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 alphaInfo:(unsigned)arg4 data:(void*)arg5 ;
-(id)imageCorrectionInfo;
-(CGImageRef)copyCorrectedImageFromImage:(CGImageRef)arg1 requestedBitDepth:(unsigned long long)arg2 ;
-(char)willApplyImageCorrection;
-(void)dumpFilterArray;
-(void)resetImageCorrection;
-(void)imageCorrectionChanged;
-(void)setupImageCorrectionForTextMode;
-(id)imageCorrectionForName:(id)arg1 ;
-(void)setupImageCorrectionForGrayMode;
-(void)setupImageCorrectionForColorMode;
-(void)setManualCorrectionEnabled:(char)arg1 ;
-(void)setupImageCorrection:(char)arg1 ;
-(void)setTextModeDitheringEnabled:(char)arg1 ;
-(NSArray *)imageCorrections;
-(char)textModeDitheringEnabled;
-(char)manualCorrectionEnabled;
-(void)dealloc;
-(id)init;
@end

