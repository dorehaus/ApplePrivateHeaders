/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject {

	NSError* _error;
	char _failed;
	NSArray* _updateItems;

}

@property (readonly) NSError * error; 
@property (getter=isFailed,readonly) char failed; 
@property (readonly) NSArray * updateItems; 
-(void)dealloc;
-(id)description;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
-(NSArray *)updateItems;
-(char)isFailed;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyUpdateItemDictionaries;
-(void)setUpdateItemsWithItemDictionaries:(id)arg1 ;
@end

