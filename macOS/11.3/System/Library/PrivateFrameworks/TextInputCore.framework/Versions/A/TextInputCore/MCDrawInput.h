/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@interface MCDrawInput : MCKeyboardInput {

	int _drawHand;
	RefPtr<TI::Favonius::KeyboardLayout>* _keyboardLayout;
	CGRect _currentLayoutCharacterKeysFrame;
	PathResampler* _resampler;

}

@property (nonatomic,readonly) PathResampler* resampler;                                          //@synthesize resampler=_resampler - In the implementation block
@property (assign,nonatomic) int drawHand;                                                        //@synthesize drawHand=_drawHand - In the implementation block
@property (nonatomic,readonly) RefPtr<TI::Favonius::KeyboardLayout>* keyboardLayout;              //@synthesize keyboardLayout=_keyboardLayout - In the implementation block
@property (nonatomic,readonly) CGRect currentLayoutCharacterKeysFrame;                            //@synthesize currentLayoutCharacterKeysFrame=_currentLayoutCharacterKeysFrame - In the implementation block
@property (nonatomic,readonly) char isCompleting; 
@property (nonatomic,readonly) char isComplete; 
@property (nonatomic,readonly) char isDrawing; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(char)isComplete;
-(char)isDrawing;
-(RefPtr<TI::Favonius::KeyboardLayout>*)keyboardLayout;
-(char)isCompleting;
-(CGRect)currentLayoutCharacterKeysFrame;
-(char)canComposeNew:(id)arg1 ;
-(void)composeNew:(id)arg1 ;
-(id)initWithKeyboardLayout:(const RefPtr<TI::Favonius::KeyboardLayout>*)arg1 ;
-(id)initWithKeyboardLayout:(const RefPtr<TI::Favonius::KeyboardLayout>*)arg1 currentLayoutCharacterKeysFrame:(CGRect)arg2 ;
-(Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0>*)copyLayoutKeys;
-(char)_canCompose;
-(void)composeWith:(id)arg1 ;
-(void)_appendAndResampleWithPoint:(CGPoint)arg1 timestamp:(double)arg2 force:(double)arg3 radius:(double)arg4 shouldFinalize:(char)arg5 ;
-(void)_updateSampledInputs;
-(void)_updateSampledInputsWithResampler:(const PathResampler*)arg1 permanentlyFinalized:(char)arg2 ;
-(PathResampler*)resampler;
-(int)drawHand;
-(void)setDrawHand:(int)arg1 ;
@end

