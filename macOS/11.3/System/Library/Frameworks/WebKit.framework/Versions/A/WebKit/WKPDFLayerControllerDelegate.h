/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/PDFLayerControllerDelegate.h>

@class NSString;

@interface WKPDFLayerControllerDelegate : NSObject <PDFLayerControllerDelegate> {

	PDFPlugin* _pdfPlugin;

}

@property (assign) PDFPlugin* pdfPlugin;                            //@synthesize pdfPlugin=_pdfPlugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showDefinitionForAttributedString:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)initWithPDFPlugin:(PDFPlugin*)arg1 ;
-(PDFPlugin*)pdfPlugin;
-(void)setPdfPlugin:(PDFPlugin*)arg1 ;
-(void)updateScrollPosition:(CGPoint)arg1 ;
-(void)writeItemsToPasteboard:(id)arg1 withTypes:(id)arg2 ;
-(void)performWebSearch:(id)arg1 ;
-(void)performSpotlightSearch:(id)arg1 ;
-(void)openWithNativeApplication;
-(void)saveToPDF;
-(void)pdfLayerController:(id)arg1 didChangeActiveAnnotation:(id)arg2 ;
-(void)pdfLayerController:(id)arg1 clickedLinkWithURL:(id)arg2 ;
-(void)pdfLayerController:(id)arg1 didChangeContentScaleFactor:(double)arg2 ;
-(void)pdfLayerController:(id)arg1 didChangeDisplayMode:(int)arg2 ;
-(void)pdfLayerController:(id)arg1 didChangeSelection:(id)arg2 ;
-(void)setMouseCursor:(long long)arg1 ;
-(void)didChangeAnnotationState;
@end

