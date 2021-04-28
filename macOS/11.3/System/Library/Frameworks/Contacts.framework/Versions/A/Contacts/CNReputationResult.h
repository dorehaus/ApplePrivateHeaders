/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNReputationHandle;

@interface CNReputationResult : NSObject {

	CNReputationHandle* _handle;
	long long _score;

}

@property (copy,readonly) CNReputationHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (readonly) long long score;                               //@synthesize score=_score - In the implementation block
+(id)descriptionForScore:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CNReputationHandle *)handle;
-(long long)score;
-(id)initWithHandle:(id)arg1 score:(long long)arg2 ;
@end

