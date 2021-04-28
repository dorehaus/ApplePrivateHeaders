/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GCControllerPlayerIndicator.h>

@protocol GCControllerPlayerIndicator;
@class NSString;

@interface GCLocalPlayerIndicator : NSObject <GCControllerPlayerIndicator> {

	long long _playerIndex;
	id<GCControllerPlayerIndicator> _systemPlayerIndicatorProxy;

}

@property (nonatomic,readonly) id<GCControllerPlayerIndicator> systemPlayerIndicatorProxy;              //@synthesize systemPlayerIndicatorProxy=_systemPlayerIndicatorProxy - In the implementation block
@property (assign) long long playerIndex;                                                               //@synthesize playerIndex=_playerIndex - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setController:(id)arg1 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(id)initWithInitialValue:(long long)arg1 systemPlayerIndicatorProxy:(id)arg2 ;
-(id<GCControllerPlayerIndicator>)systemPlayerIndicatorProxy;
@end

