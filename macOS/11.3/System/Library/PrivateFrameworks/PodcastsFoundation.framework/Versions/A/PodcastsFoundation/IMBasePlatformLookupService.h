/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService {

	NSString* _protocolVersion;

}

@property (nonatomic,retain) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(id)init;
-(NSString *)protocolVersion;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(id)urlRequest;
-(id)baseUrl;
-(void)performRequest:(/*^block*/id)arg1 ;
-(id)platformAction;
@end
