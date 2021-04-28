/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/Versions/A/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class USKToken, USKObjectPath, NSDictionary;

@interface USKObject : NSObject {

	USKToken* _name;
	USKObjectPath* _path;

}

@property (nonatomic,retain,readonly) USKToken * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) USKObjectPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
-(USKToken *)name;
-(USKObjectPath *)path;
-(NSDictionary *)metadata;
@end

