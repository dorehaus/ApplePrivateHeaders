/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/IMKDecorator.h>
#import <libobjc.A.dylib/IMKInputMethod.h>

@class NSString;

@interface IMKLoggingInputMethod : IMKDecorator <IMKInputMethod>

@property (nonatomic,__weak,readonly) id<IMKKeyboard> attachedKeyboard; 
@property (nonatomic,retain) id<IMKTextDocument> attachedTextDocument; 
@property (nonatomic,retain) id<IMKCandidateEngine> candidateEngine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)didPressKey:(id)arg1 whileInKeyboardState:(id)arg2 ;
-(char)keyboard:(id)arg1 didChange:(id)arg2 to:(id)arg3 ;
-(char)didReleaseKey:(id)arg1 whileInKeyboardState:(id)arg2 ;
-(void)composeText:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)setCandidateEngine:(id<IMKCandidateEngine>)arg1 ;
-(void)commitComposition;
-(char)didAcceptCandidate:(id)arg1 ;
-(id<IMKTextDocument>)attachedTextDocument;
-(id<IMKKeyboard>)attachedKeyboard;
-(void)setAttachedTextDocument:(id<IMKTextDocument>)arg1 ;
-(id<IMKCandidateEngine>)candidateEngine;
@end

