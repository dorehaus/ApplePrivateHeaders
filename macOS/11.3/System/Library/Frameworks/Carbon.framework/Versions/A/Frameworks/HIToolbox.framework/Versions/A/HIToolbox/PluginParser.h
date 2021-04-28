/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSMutableDictionary;

@interface PluginParser : NSObject {

	NSArray* _linesOfFile;
	NSDictionary* _keysAndEncodings;
	NSMutableDictionary* _dict;

}
-(void)setKeysAndEncoding:(id)arg1 ;
-(char)openCodeFile:(id)arg1 withEncoding:(unsigned)arg2 ;
-(id)linesOfFile;
-(id)tokens:(id)arg1 ;
-(id)key:(id)arg1 ;
-(id)keyForIndex:(int)arg1 ;
-(void)addEntries:(id)arg1 forKey:(id)arg2 ;
-(char)isComment:(id)arg1 delimiter:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(id)data:(id)arg1 ;
-(void)addEntry:(id)arg1 forKey:(id)arg2 ;
-(int)keyToIndex:(id)arg1 ;
@end
