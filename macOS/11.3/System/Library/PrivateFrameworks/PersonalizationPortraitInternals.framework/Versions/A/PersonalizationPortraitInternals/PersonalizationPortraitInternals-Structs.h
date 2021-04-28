/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned schemaVersion : 1;
} SCD_Struct_PP1;

typedef struct {
	unsigned algorithm : 1;
	unsigned donationSource : 1;
} SCD_Struct_PP2;

typedef struct {
	unsigned rank : 1;
	unsigned algorithm : 1;
	unsigned donationSource : 1;
	unsigned newItem : 1;
	unsigned userCreated : 1;
} SCD_Struct_PP3;

typedef struct {
	unsigned domain : 1;
	unsigned feedbackDomainStatus : 1;
	unsigned type : 1;
} SCD_Struct_PP4;

typedef struct {
	unsigned resultSizeLog10 : 1;
	unsigned error : 1;
	unsigned exclusionSpec : 1;
	unsigned limitHit : 1;
	unsigned timeLimited : 1;
	unsigned timeSpec : 1;
} SCD_Struct_PP5;

typedef struct priority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>>, PPScoredItemCompareGreater>vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>>@@__compressed_pair<PPScoredItem *__strong *, std::__1::allocator<PPScoredItem *>>@PPScoredItemCompareGreater* riority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>>, PPScoredItemCompareGreater>Ref;

typedef struct type {
	unsigned char __lx[32];
} type;

typedef struct _compressed_pair<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>> *, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>> {
	vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>> __value_;
} compressed_pair<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>> *, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>>;

typedef struct unique_ptr<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>> {
	compressed_pair<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>> *, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>> __ptr_;
} unique_ptr<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>>;

typedef struct _compressed_pair<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>>> {
	vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>> __value_;
} compressed_pair<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>>>;

typedef struct unique_ptr<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>>> {
	compressed_pair<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>>> __ptr_;
} unique_ptr<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>>>;

typedef struct _compressed_pair<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>> {
	vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>> __value_;
} compressed_pair<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>>;

typedef struct unique_ptr<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>> {
	compressed_pair<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>> __ptr_;
} unique_ptr<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>>;

typedef struct _compressed_pair<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>> *, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>> {
	vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>> __value_;
} compressed_pair<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>> *, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>>;

typedef struct unique_ptr<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>> {
	compressed_pair<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>> *, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>> __ptr_;
} unique_ptr<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>>;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
} SCD_Struct_PP16;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_PP18;

typedef struct __DDScanner* DDScannerRef;

typedef struct _compressed_pair<std::__1::vector<float, std::__1::allocator<float>> *, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float>>>> {
	vector<float, std::__1::allocator<float>> __value_;
} compressed_pair<std::__1::vector<float, std::__1::allocator<float>> *, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float>>>>;

typedef struct unique_ptr<std::__1::vector<float, std::__1::allocator<float>>, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float>>>> {
	compressed_pair<std::__1::vector<float, std::__1::allocator<float>> *, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float>>>> __ptr_;
} unique_ptr<std::__1::vector<float, std::__1::allocator<float>>, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float>>>>;

typedef struct _compressed_pair<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>>> {
	vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>> __value_;
} compressed_pair<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>>>;

typedef struct unique_ptr<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>>> {
	compressed_pair<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>> *, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>>> __ptr_;
} unique_ptr<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>>>;

typedef struct header_s {
	unsigned qidCount;
	unsigned topicCount;
	unsigned nonzeroCount;
	unsigned payloadLen;
} header_s;

typedef const struct PPCompactStringArray* PPCompactStringArrayRef;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_PP27;

typedef struct {
	unsigned domain : 1;
	unsigned interval : 1;
	unsigned source : 1;
	unsigned isFirstDonation : 1;
} SCD_Struct_PP28;

