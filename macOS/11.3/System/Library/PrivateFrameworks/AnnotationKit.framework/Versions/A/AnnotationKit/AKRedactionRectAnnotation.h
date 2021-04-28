/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation {

	char _isOpaque;
	char _isHighlighted;

}

@property (assign) char isOpaque;                   //@synthesize isOpaque=_isOpaque - In the implementation block
@property (assign) char isHighlighted;              //@synthesize isHighlighted=_isHighlighted - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(char)isOpaque;
-(char)isHighlighted;
-(void)setIsHighlighted:(char)arg1 ;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(char)shouldBurnIn;
-(void)setIsOpaque:(char)arg1 ;
@end
