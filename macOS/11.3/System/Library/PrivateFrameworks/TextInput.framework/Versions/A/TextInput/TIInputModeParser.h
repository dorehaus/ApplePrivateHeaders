/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSCharacterSet;

@interface TIInputModeParser : NSObject {

	NSMutableDictionary* _inputModeDicts;
	NSCharacterSet* _invalidCharacterSet;

}
+(id)sharedInstance;
-(id)init;
-(id)parseInputMode:(id)arg1 ;
-(id)stringByReplacingInvalidCharactersWithUnderscores:(id)arg1 ;
@end

