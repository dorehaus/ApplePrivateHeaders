/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderOutput/SCROHandler.h>
#import <libobjc.A.dylib/SCROSBrailleDisplayManagerDelegate.h>

@class SCROBrailleDisplayManager, NSString;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate> {

	SCROBrailleDisplayManager* _brailleDisplayManager;
	char _wantsInputCallbacks;
	char _wantsDidDisplayCallbacks;
	SCD_Struct_SC8 _callbacks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)handleBrailleKeypress:(id)arg1 ;
-(void)handleBrailleReplaceTextRange:(NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3 ;
-(void)handleUserEventOccured;
-(void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(char)arg2 ;
-(void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(char)arg2 ;
-(void)handleBrailleKeyWillMemorize:(id)arg1 ;
-(void)handleBrailleKeyMemorize:(id)arg1 ;
-(void)handleBrailleDidDisplay:(id)arg1 ;
-(void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4 ;
-(void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4 ;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg1 ;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg1 ;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1 ;
-(void)handleBrailleTableFailedToLoad:(id)arg1 ;
-(void)handleDisplayModeChanged:(id)arg1 ;
-(void)handleBrailleDriverDidLoad;
-(void)configurationDidChange;
-(void)handleBrailleDriverDisconnected;
-(void)handleStartEditing;
-(void)handleCopyStringToClipboard:(id)arg1 ;
-(void)handlePlayBorderHitSound;
-(void)handlePlayCommandNotSupportedSound;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(char)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(char)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(char)arg4 ;
-(int)handlePerformActionForKey:(int)arg1 trusted:(char)arg2 ;
-(id)initWithBrailleDisplayManager:(id)arg1 ;
@end

