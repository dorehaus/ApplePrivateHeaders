/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLXPCProxyCreatingPLXPCAsyncProxyCreating;
@interface PLAssetsdBaseClient : NSObject {

	id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> _proxyFactory;

}

@property (readonly) id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
-(id<PLXPCProxyCreating><PLXPCAsyncProxyCreating>)proxyFactory;
@end

