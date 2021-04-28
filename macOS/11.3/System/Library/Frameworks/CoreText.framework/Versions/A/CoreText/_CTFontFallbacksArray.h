/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	TUnfairLock _lock;
	const TBaseFont* _baseFont;
	const TTraitsValues* _refTraits;
	unsigned long long _count;
	NSMutableArray* _cascade;
	NSMutableArray* _fallbacks;
	unsigned long long _hash;
	int _uiUse;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CT5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
@end

