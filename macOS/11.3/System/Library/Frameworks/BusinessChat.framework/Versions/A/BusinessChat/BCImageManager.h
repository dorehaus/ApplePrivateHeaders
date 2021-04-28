/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/Versions/A/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChat/BusinessChat-Structs.h>
#import <libobjc.A.dylib/BCImageManagerProtocol.h>

@protocol BCNetworkProviderProtocol;
@class NSString;

@interface BCImageManager : NSObject <BCImageManagerProtocol> {

	id<BCNetworkProviderProtocol> _networkProvider;

}

@property (nonatomic,readonly) id<BCNetworkProviderProtocol> networkProvider;              //@synthesize networkProvider=_networkProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)fetchBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchNavBarBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id<BCNetworkProviderProtocol>)networkProvider;
-(void)_fetchBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchNavBarBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithNetworkProvider:(id)arg1 ;
@end

