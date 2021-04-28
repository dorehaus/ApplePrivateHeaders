/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCExtendedGamepad.h>

@class GCControllerButtonInput, GCControllerDirectionPad;

@interface GCDualShockGamepad : GCExtendedGamepad {

	GCControllerButtonInput* _touchpadButton;
	GCControllerDirectionPad* _touchpadPrimary;
	GCControllerDirectionPad* _touchpadSecondary;

}

@property (nonatomic,readonly) GCControllerButtonInput * touchpadButton;                  //@synthesize touchpadButton=_touchpadButton - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadPrimary;                //@synthesize touchpadPrimary=_touchpadPrimary - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadSecondary;              //@synthesize touchpadSecondary=_touchpadSecondary - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)initializeExtraControllerElements;
-(GCControllerButtonInput *)touchpadButton;
-(GCControllerDirectionPad *)touchpadPrimary;
-(GCControllerDirectionPad *)touchpadSecondary;
-(void)_activateExtendedSupport;
@end
