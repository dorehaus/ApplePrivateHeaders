/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKDisplayTraitCollection : NSObject <NSSecureCoding> {

	double _canvasScale;
	CGSize _canvasSize;

}

@property (assign,nonatomic) CGSize canvasSize;               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) double canvasScale;              //@synthesize canvasScale=_canvasScale - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(id)initWithDefaultTraits;
-(double)canvasScale;
-(void)setCanvasScale:(double)arg1 ;
@end
