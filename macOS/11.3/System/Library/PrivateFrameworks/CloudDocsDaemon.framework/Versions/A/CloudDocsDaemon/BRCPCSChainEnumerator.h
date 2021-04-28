/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class BRCPrivateClientZone, NSMutableArray, NSError;

@interface BRCPCSChainEnumerator : NSEnumerator {

	unsigned long long _maxPathDepth;
	BRCPrivateClientZone* _clientZone;
	NSMutableArray* _stack;
	NSError* _error;

}
-(id)nextObject;
-(id)error;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
@end

