/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/Versions/A/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFResolver <NSObject>
@required
-(id)currentObjectGraphResolver:(unsigned long long)arg1;
-(void)linkResolverWithLinkBlock:(/*^block*/id)arg1;
-(id)resolveClass:(Class)arg1;
-(id)resolveClass:(Class)arg1 contextBlock:(/*^block*/id)arg2;
-(id)resolveClass:(Class)arg1 name:(id)arg2;
-(id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3;
-(id)resolveProtocol:(id)arg1;
-(id)resolveProtocol:(id)arg1 contextBlock:(/*^block*/id)arg2;
-(id)resolveProtocol:(id)arg1 name:(id)arg2;
-(id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3;
-(id)resolveForKey:(id)arg1;
-(id)resolveForKey:(id)arg1 context:(id)arg2;
-(id)resolveForKey:(id)arg1 context:(id)arg2 error:(id*)arg3;

@end
