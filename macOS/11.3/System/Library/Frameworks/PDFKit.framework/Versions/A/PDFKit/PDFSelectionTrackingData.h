/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFSelection, PDFPage, PDFAnnotation, PDFScannerResult;

@interface PDFSelectionTrackingData : NSObject {

	PDFSelection* extendingSelection;
	int selectionMode;
	PDFPage* startPage;
	CGPoint startPoint;
	CGRect marquee;
	char highlighted;
	PDFAnnotation* annotation;
	PDFScannerResult* pdfResult;

}

@property (nonatomic,retain) PDFSelection * extendingSelection; 
@property (assign,nonatomic) int selectionMode; 
@property (assign,nonatomic,__weak) PDFPage * startPage; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGRect marquee; 
@property (assign,nonatomic) char highlighted; 
@property (assign,nonatomic,__weak) PDFAnnotation * annotation; 
@property (assign,nonatomic,__weak) PDFScannerResult * pdfResult; 
-(void)setHighlighted:(char)arg1 ;
-(char)highlighted;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setSelectionMode:(int)arg1 ;
-(int)selectionMode;
-(CGPoint)startPoint;
-(PDFAnnotation *)annotation;
-(void)setAnnotation:(PDFAnnotation *)arg1 ;
-(PDFScannerResult *)pdfResult;
-(PDFSelection *)extendingSelection;
-(void)setExtendingSelection:(PDFSelection *)arg1 ;
-(PDFPage *)startPage;
-(void)setStartPage:(PDFPage *)arg1 ;
-(CGRect)marquee;
-(void)setMarquee:(CGRect)arg1 ;
-(void)setPdfResult:(PDFScannerResult *)arg1 ;
@end

