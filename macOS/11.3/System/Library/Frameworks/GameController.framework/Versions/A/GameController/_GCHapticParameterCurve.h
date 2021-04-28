/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSMutableArray;

@interface _GCHapticParameterCurve : NSObject {

	NSMutableArray* _curve;

}

@property (nonatomic,retain) NSMutableArray * curve;              //@synthesize curve=_curve - In the implementation block
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
-(NSMutableArray *)curve;
-(void)setCurve:(NSMutableArray *)arg1 ;
@end

