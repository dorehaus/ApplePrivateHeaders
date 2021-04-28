/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTextView.h>

@protocol ACUIPasscodeControlTextEditorDelegate;
@interface ACUIPasscodeControlTextEditor : NSTextView {

	id<ACUIPasscodeControlTextEditorDelegate> _pasteDelegate;

}

@property (assign,nonatomic) id<ACUIPasscodeControlTextEditorDelegate> pasteDelegate;              //@synthesize pasteDelegate=_pasteDelegate - In the implementation block
-(void)dealloc;
-(void)paste:(id)arg1 ;
-(id<ACUIPasscodeControlTextEditorDelegate>)pasteDelegate;
-(void)setPasteDelegate:(id<ACUIPasscodeControlTextEditorDelegate>)arg1 ;
@end

