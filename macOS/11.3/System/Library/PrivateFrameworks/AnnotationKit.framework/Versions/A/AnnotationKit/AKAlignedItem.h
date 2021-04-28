/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSInputAlignmentItem.h>

@class NSString;

@interface AKAlignedItem : NSObject <NSInputAlignmentItem> {

	CGPoint _pointInWindow;

}

@property (assign) CGPoint pointInWindow;                           //@synthesize pointInWindow=_pointInWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)representativeGuides;
-(CGPoint)pointInWindow;
-(void)alignmentControllerMoveItemByDistance:(CGPoint)arg1 ;
-(void)setPointInWindow:(CGPoint)arg1 ;
@end

