/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUICFQueryResult : NSObject {

	char _allowCallForDestinationID;
	char _fromBlockList;

}

@property (assign,nonatomic) char allowCallForDestinationID;                         //@synthesize allowCallForDestinationID=_allowCallForDestinationID - In the implementation block
@property (assign,getter=isFromBlockList,nonatomic) char fromBlockList;              //@synthesize fromBlockList=_fromBlockList - In the implementation block
-(id)description;
-(char)isFromBlockList;
-(char)allowCallForDestinationID;
-(void)setAllowCallForDestinationID:(char)arg1 ;
-(void)setFromBlockList:(char)arg1 ;
@end
