/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PreferencePanesSupport.framework/Versions/A/PreferencePanesSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface AccountsPrefFormatter : NSFormatter {

	long long _maxLength;
	NSCharacterSet* _characterSet;

}
+(id)maxLengthFormatter:(long long)arg1 ;
+(id)unixNameFormatter;
+(id)passwordFormatter;
+(id)asciiSet;
+(id)hexSet;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(char)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithMaxLength:(long long)arg1 ;
-(id)initWithCharacterSet:(id)arg1 withMaxLength:(long long)arg2 ;
@end
