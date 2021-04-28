/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSApplication/TSARenderingExporterDelegate.h>

@class TSARenderingExporter, NSString;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter* mRenderingExporter;
	NSString* mPassphraseOpen;
	NSString* mPassphrasePrintCopy;
	char mRequireOpenPassword;
	char mRequireCopyPassword;
	char mRequirePrintPassword;
	int mRenderingQuality;
	int mTaggingCondition;

}

@property (assign) int taggingCondition; 
-(void)setup;
-(void)teardown;
-(double)viewScale;
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(id)initWithRenderingExporter:(id)arg1 ;
-(char)validatePassphrases:(id*)arg1 ;
-(void)setRenderingQuality:(int)arg1 ;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(char)supportsPaging;
-(char)supportsRenderingQuality;
-(int)renderingQuality;
-(int)taggingCondition;
-(void)setTaggingCondition:(int)arg1 ;
@end

