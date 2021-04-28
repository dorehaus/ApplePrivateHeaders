/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface RMStatusPublisherDescription : NSObject {

	NSArray* _keyPaths;
	NSString* _principalClassName;

}

@property (nonatomic,copy,readonly) NSArray * keyPaths;                         //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy,readonly) NSString * principalClassName;              //@synthesize principalClassName=_principalClassName - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)keyPaths;
-(id)initWithKeyPaths:(id)arg1 principalClassName:(id)arg2 ;
-(NSString *)principalClassName;
@end

