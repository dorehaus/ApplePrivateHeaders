/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGDSuggestManagerInterface : NSObject
+(void)initialize;
+(id)xpcInterface;
+(void)_registerWhitelistBlock:(/*^block*/id)arg1 forProtocol:(id)arg2 ;
+(id)xpcInterfaceForProtocol:(id)arg1 ;
+(void)_addSGXPCResponseToReplyWhitelistForMethods:(objc_method_description*)arg1 count:(unsigned)arg2 interface:(id)arg3 ;
+(void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2 ;
+(void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3 ;
+(void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3 ;
+(void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3 ;
+(id)realtimeSuggestionsClasses;
@end

