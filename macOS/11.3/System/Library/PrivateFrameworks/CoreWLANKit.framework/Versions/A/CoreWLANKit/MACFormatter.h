/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLANKit/CoreWLANKit-Structs.h>
#import <CoreWLANKit/APFormatter.h>

@class NSCharacterSet, NSString;

@interface MACFormatter : APFormatter {

	NSCharacterSet* _possibleSeparators;
	NSCharacterSet* _possibleSeparatorsInvertedSet;
	NSString* _userPreferredSeparator;

}
+(id)macFormatter;
+(id)macAddressSet;
+(id)sharedMACFormatter;
+(char)parseMACAddress:(const char*)arg1 intoHexString:(char*)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)setPossibleSeparators:(id)arg1 ;
-(id)possibleSeparators;
-(void)setPossibleSeparatorsInvertedSet:(id)arg1 ;
-(void)setUserPreferredSeparator:(id)arg1 ;
-(id)possibleSeparatorsInvertedSet;
-(id)userPreferredSeparator;
@end
