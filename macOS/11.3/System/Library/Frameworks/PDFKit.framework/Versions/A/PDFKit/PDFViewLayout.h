/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFViewLayoutPrivate, PDFDocument;

@interface PDFViewLayout : NSObject {

	PDFViewLayoutPrivate* _private;

}

@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic,__weak) PDFDocument * document; 
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(PDFDocument *)document;
-(void)setDocument:(PDFDocument *)arg1 ;
-(CGRect)boundsForPage:(id)arg1 ;
-(CGSize)contentSizeWithCurrentPage:(id)arg1 ;
-(id)pageNearestPoint:(CGPoint)arg1 currentPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(void)invalidateInternalDocumentGeometry;
-(void)generateInternalDocumentGeometry;
-(long long)functionalDisplayMode;
-(id)facingPageForPage:(id)arg1 ;
-(NSRange)visiblePageRangeInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(id)visiblePagesInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
@end
