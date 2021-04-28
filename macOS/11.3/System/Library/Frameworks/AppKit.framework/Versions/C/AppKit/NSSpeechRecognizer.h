/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSArray, NSString;

@interface NSSpeechRecognizer : NSObject {

	id _privateNSSpeechRecognizerVars;

}

@property (__weak) id<NSSpeechRecognizerDelegate> delegate; 
@property (copy) NSArray * commands; 
@property (copy) NSString * displayedCommandsTitle; 
@property (assign) char listensInForegroundOnly; 
@property (assign) char blocksOtherRecognizers; 
-(void)dealloc;
-(id)init;
-(id<NSSpeechRecognizerDelegate>)delegate;
-(void)setDelegate:(id<NSSpeechRecognizerDelegate>)arg1 ;
-(void)stopListening;
-(void)_processRecognitionResult:(RXLanguageObjectRef)arg1 ;
-(void)_updateCommandDisplayWithRecognizer;
-(void)startListening;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)displayedCommandsTitle;
-(void)setDisplayedCommandsTitle:(NSString *)arg1 ;
-(char)listensInForegroundOnly;
-(void)setListensInForegroundOnly:(char)arg1 ;
-(char)blocksOtherRecognizers;
-(void)setBlocksOtherRecognizers:(char)arg1 ;
@end

