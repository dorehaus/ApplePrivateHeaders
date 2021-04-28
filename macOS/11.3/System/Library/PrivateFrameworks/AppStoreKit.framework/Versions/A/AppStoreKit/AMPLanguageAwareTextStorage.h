/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <libobjc.A.dylib/AMPWritingDirectionContentProtocol.h>

@class NSTextStorage;

@interface AMPLanguageAwareTextStorage : NSObject <NSTextStorageDelegate, AMPWritingDirectionContentProtocol> {

	 textStorage;
	 originalTextStorageDelegate;
	 languageAwareString;

}

@property (retain,nonatomic) NSTextStorage * textStorage; 
-(id)init;
-(NSTextStorage *)textStorage;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(id)initWithTextStorage:(id)arg1 ;
-(id)writingDirectionsQuantities;
-(long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(unsigned long long)arg4 cacheLayoutInfo:(char)arg5 ;
@end
