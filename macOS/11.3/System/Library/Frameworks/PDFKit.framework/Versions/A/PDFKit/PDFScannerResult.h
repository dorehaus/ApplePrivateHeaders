/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFScannerResultPrivate;

@interface PDFScannerResult : NSObject {

	PDFScannerResultPrivate* _private;

}
-(CGRect)bounds;
-(char)containsPoint:(CGPoint)arg1 ;
-(id)rects;
-(void)setButtonPressed:(char)arg1 ;
-(char)pointIsOnButton:(CGPoint)arg1 ;
-(DDHighlightRef)highlightRef;
-(id)ddResult;
-(void)setHighlightRef:(DDHighlightRef)arg1 ;
-(char)pointIsOnButton:(CGPoint)arg1 onPageLayer:(id)arg2 ;
-(char)resultIsPastDate;
-(char)hasActionsForResult;
-(char)containsPoint:(CGPoint)arg1 onPageLayer:(id)arg2 ;
-(id)initWithDDScannerResult:(id)arg1 foundOnPage:(id)arg2 ;
@end

