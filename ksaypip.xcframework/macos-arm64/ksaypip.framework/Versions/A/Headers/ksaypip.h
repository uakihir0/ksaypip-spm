#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KsaypipCoreAcceptedFriendship, KsaypipCoreAcceptedFriendshipCompanion, KsaypipCoreAppsListRequest, KsaypipCoreAppsRevokeRequest, KsaypipCoreAsideWidgetItem, KsaypipCoreAsideWidgetItemCompanion, KsaypipCoreAsideWidgets, KsaypipCoreAsideWidgetsCompanion, KsaypipCoreAuthorizedApp, KsaypipCoreAuthorizedAppCompanion, KsaypipCoreAuthorizedAppList, KsaypipCoreAuthorizedAppListCompanion, KsaypipCoreBlocksBlockRequest, KsaypipCoreConversation, KsaypipCoreConversationCompanion, KsaypipCoreConversationDigest, KsaypipCoreConversationDigestCompanion, KsaypipCoreConversationDigestList, KsaypipCoreConversationDigestListCompanion, KsaypipCoreConversationList, KsaypipCoreConversationListCompanion, KsaypipCoreConversationsConversationRequest, KsaypipCoreConversationsLeaveRequest, KsaypipCoreConversationsListRequest, KsaypipCoreConversationsReadRequest, KsaypipCoreConversationsReplyRequest, KsaypipCoreCreatedReport, KsaypipCoreCreatedReportCompanion, KsaypipCoreFeed, KsaypipCoreFeedCompanion, KsaypipCoreFeedFeedRequest, KsaypipCoreFeedFriendsRequest, KsaypipCoreFeedSearchRequest, KsaypipCoreFeedTagRequest, KsaypipCoreFeedTalkRequest, KsaypipCoreFeedTrendsRequest, KsaypipCoreFeedbackSendRequest, KsaypipCoreFriendRequest, KsaypipCoreFriendRequestCompanion, KsaypipCoreFriendRequestList, KsaypipCoreFriendRequestListCompanion, KsaypipCoreFriendRequestState, KsaypipCoreFriendRequestStateCompanion, KsaypipCoreFriendRequestsAcceptRequest, KsaypipCoreFriendRequestsDeclineRequest, KsaypipCoreFriendRequestsListRequest, KsaypipCoreFriendRequestsRequestRequest, KsaypipCoreLabel, KsaypipCoreLabelCompanion, KsaypipCoreLinkPreview, KsaypipCoreLinkPreviewCompanion, KsaypipCoreLinksImageRequest, KsaypipCoreLinksPreviewRequest, KsaypipCoreMark, KsaypipCoreMarkCompanion, KsaypipCoreMe, KsaypipCoreMeArrangeAsideWidgetsRequest, KsaypipCoreMeCompanion, KsaypipCoreMeMeRequest, KsaypipCoreMePinSubjectRequest, KsaypipCoreMePostsRequest, KsaypipCoreMeReorderPinnedSubjectsRequest, KsaypipCoreMeUnpinSubjectRequest, KsaypipCoreMeUpdateProfileRequest, KsaypipCoreMedia, KsaypipCoreMediaAlt, KsaypipCoreMediaAltCompanion, KsaypipCoreMediaBytesRequest, KsaypipCoreMediaCompanion, KsaypipCoreMediaSetAltRequest, KsaypipCoreMediaUploadRequest, KsaypipCoreMute, KsaypipCoreMuteCompanion, KsaypipCoreMuteList, KsaypipCoreMuteListCompanion, KsaypipCoreMutesListRequest, KsaypipCoreMutesMuteRequest, KsaypipCoreMutesUnmuteRequest, KsaypipCoreNotification, KsaypipCoreNotificationCompanion, KsaypipCoreNotificationList, KsaypipCoreNotificationListCompanion, KsaypipCoreNotificationReaction, KsaypipCoreNotificationReactionCompanion, KsaypipCoreNotificationsListRequest, KsaypipCoreNotificationsReadRequest, KsaypipCoreParticipant, KsaypipCoreParticipantCompanion, KsaypipCorePerson, KsaypipCorePersonCompanion, KsaypipCorePinnedSubjects, KsaypipCorePinnedSubjectsCompanion, KsaypipCorePost, KsaypipCorePostCompanion, KsaypipCorePostConversations, KsaypipCorePostConversationsCompanion, KsaypipCorePostLastReply, KsaypipCorePostLastReplyCompanion, KsaypipCorePostReaction, KsaypipCorePostReactionCompanion, KsaypipCorePostReactions, KsaypipCorePostReactionsCompanion, KsaypipCorePostReactors, KsaypipCorePostReactorsCompanion, KsaypipCorePostsConversationsRequest, KsaypipCorePostsCreateRequest, KsaypipCorePostsDeleteRequest, KsaypipCorePostsPostRequest, KsaypipCorePostsReactRequest, KsaypipCorePostsReactionsRequest, KsaypipCorePostsRemoveWantsTalkRequest, KsaypipCorePostsStartConversationRequest, KsaypipCorePostsUnreactRequest, KsaypipCoreProfile, KsaypipCoreProfileCompanion, KsaypipCoreQuotedPost, KsaypipCoreQuotedPostCompanion, KsaypipCoreReactionWithPeople, KsaypipCoreReactionWithPeopleCompanion, KsaypipCoreRelationship, KsaypipCoreRelationshipCompanion, KsaypipCoreRelationshipList, KsaypipCoreRelationshipListCompanion, KsaypipCoreRelationshipSummary, KsaypipCoreRelationshipSummaryCompanion, KsaypipCoreRelationshipsListRequest, KsaypipCoreRelationshipsRelationshipRequest, KsaypipCoreRelationshipsSetLabelRequest, KsaypipCoreRelationshipsTerminateRequest, KsaypipCoreReply, KsaypipCoreReplyCompanion, KsaypipCoreReportsReportRequest, KsaypipCoreResponse<T>, KsaypipCoreResponseUnit, KsaypipCoreTrend, KsaypipCoreTrendCompanion, KsaypipCoreTrendList, KsaypipCoreTrendListCompanion, KsaypipCoreUserPage, KsaypipCoreUserPageCompanion, KsaypipCoreUsersUserRequest, KsaypipCoreWordMute, KsaypipCoreWordMuteCompanion, KsaypipCoreWordMuteList, KsaypipCoreWordMuteListCompanion, KsaypipCoreWordMutesForgetRequest, KsaypipCoreWordMutesListRequest, KsaypipCoreWordMutesMuteRequest, KsaypipCoreWordMutesWindowRequest, KsaypipKotlinArray<T>, KsaypipKotlinByteArray, KsaypipKotlinByteIterator, KsaypipKotlinException, KsaypipKotlinIllegalStateException, KsaypipKotlinNothing, KsaypipKotlinRuntimeException, KsaypipKotlinThrowable, KsaypipKotlinx_serialization_coreSerialKind, KsaypipKotlinx_serialization_coreSerializersModule, KsaypipKsaypipFactory;

@protocol KsaypipCoreAppsResource, KsaypipCoreBlocksResource, KsaypipCoreConversationsResource, KsaypipCoreFeedResource, KsaypipCoreFeedbackResource, KsaypipCoreFriendRequestsResource, KsaypipCoreLinksResource, KsaypipCoreMeResource, KsaypipCoreMediaResource, KsaypipCoreMutesResource, KsaypipCoreNotificationsResource, KsaypipCorePostsResource, KsaypipCoreRelationshipsResource, KsaypipCoreReportsResource, KsaypipCoreSaypip, KsaypipCoreUsersResource, KsaypipCoreWordMutesResource, KsaypipKotlinAnnotation, KsaypipKotlinIterator, KsaypipKotlinKAnnotatedElement, KsaypipKotlinKClass, KsaypipKotlinKClassifier, KsaypipKotlinKDeclarationContainer, KsaypipKotlinx_serialization_coreCompositeDecoder, KsaypipKotlinx_serialization_coreCompositeEncoder, KsaypipKotlinx_serialization_coreDecoder, KsaypipKotlinx_serialization_coreDeserializationStrategy, KsaypipKotlinx_serialization_coreEncoder, KsaypipKotlinx_serialization_coreKSerializer, KsaypipKotlinx_serialization_coreSerialDescriptor, KsaypipKotlinx_serialization_coreSerializationStrategy, KsaypipKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KsaypipBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KsaypipBase (KsaypipBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KsaypipMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KsaypipMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKsaypipKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KsaypipNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KsaypipByte : KsaypipNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KsaypipUByte : KsaypipNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KsaypipShort : KsaypipNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KsaypipUShort : KsaypipNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KsaypipInt : KsaypipNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KsaypipUInt : KsaypipNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KsaypipLong : KsaypipNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KsaypipULong : KsaypipNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KsaypipFloat : KsaypipNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KsaypipDouble : KsaypipNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KsaypipBoolean : KsaypipNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * The one object a JavaScript or Swift consumer needs: the client, and the OAuth factory beside
 * it through the `auth` module's own export.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KsaypipFactory")))
@interface KsaypipKsaypipFactory : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The one object a JavaScript or Swift consumer needs: the client, and the OAuth factory beside
 * it through the `auth` module's own export.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ksaypipFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipKsaypipFactory *shared __attribute__((swift_name("shared")));
- (id<KsaypipCoreSaypip>)instanceUri:(NSString *)uri accessToken:(NSString *)accessToken __attribute__((swift_name("instance(uri:accessToken:)")));
@end


/**
 * The Saypip API, one deployment and one reader's view of it.
 *
 * Every read and write here is a bearer-token call, so an application is expected to have been
 * authorized through the `auth` module and to hold an access token. Nothing on this interface can
 * reach the cookie-only blocks — the admin area, `GET /me/sign-in`, `DELETE /me`, the push
 * endpoints and the realtime socket — because a token reaches none of them.
 */
__attribute__((swift_name("CoreSaypip")))
@protocol KsaypipCoreSaypip
@required
- (NSString *)accessToken __attribute__((swift_name("accessToken()")));
- (id<KsaypipCoreAppsResource>)apps __attribute__((swift_name("apps()")));
- (id<KsaypipCoreBlocksResource>)blocks __attribute__((swift_name("blocks()")));
- (id<KsaypipCoreConversationsResource>)conversations __attribute__((swift_name("conversations()")));
- (id<KsaypipCoreFeedResource>)feed __attribute__((swift_name("feed()")));
- (id<KsaypipCoreFeedbackResource>)feedback __attribute__((swift_name("feedback()")));
- (id<KsaypipCoreFriendRequestsResource>)friendRequests __attribute__((swift_name("friendRequests()")));
- (id<KsaypipCoreLinksResource>)links __attribute__((swift_name("links()")));
- (id<KsaypipCoreMeResource>)me __attribute__((swift_name("me()")));
- (id<KsaypipCoreMediaResource>)media __attribute__((swift_name("media()")));
- (id<KsaypipCoreMutesResource>)mutes __attribute__((swift_name("mutes()")));
- (id<KsaypipCoreNotificationsResource>)notifications __attribute__((swift_name("notifications()")));
- (id<KsaypipCorePostsResource>)posts __attribute__((swift_name("posts()")));
- (id<KsaypipCoreRelationshipsResource>)relationships __attribute__((swift_name("relationships()")));
- (id<KsaypipCoreReportsResource>)reports __attribute__((swift_name("reports()")));
- (NSString *)uri __attribute__((swift_name("uri()")));
- (id<KsaypipCoreUsersResource>)users __attribute__((swift_name("users()")));
- (id<KsaypipCoreWordMutesResource>)wordMutes __attribute__((swift_name("wordMutes()")));
@end

__attribute__((swift_name("CoreAppsResource")))
@protocol KsaypipCoreAppsResource
@required

/**
 * The applications this reader has authorized, with what each may do.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KsaypipCoreAppsListRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreAuthorizedAppList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreAuthorizedAppList *> *)listBlockingRequest:(KsaypipCoreAppsListRequest *)request __attribute__((swift_name("listBlocking(request:)")));

/**
 * End one application's access: consent and tokens go together.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)revokeRequest:(KsaypipCoreAppsRevokeRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("revoke(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)revokeBlockingRequest:(KsaypipCoreAppsRevokeRequest *)request __attribute__((swift_name("revokeBlocking(request:)")));
@end

__attribute__((swift_name("CoreBlocksResource")))
@protocol KsaypipCoreBlocksResource
@required

/**
 * Block is forget plus avoid, without telling the blocked person.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)blockRequest:(KsaypipCoreBlocksBlockRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("block(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)blockBlockingRequest:(KsaypipCoreBlocksBlockRequest *)request __attribute__((swift_name("blockBlocking(request:)")));
@end

__attribute__((swift_name("CoreConversationsResource")))
@protocol KsaypipCoreConversationsResource
@required

/**
 * One conversation, and a page of its replies from the newest end.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationRequest:(KsaypipCoreConversationsConversationRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreConversation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversation(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreConversation *> *)conversationBlockingRequest:(KsaypipCoreConversationsConversationRequest *)request __attribute__((swift_name("conversationBlocking(request:)")));

/**
 * Leave one conversation. Either seat may; its replies go with it.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)leaveRequest:(KsaypipCoreConversationsLeaveRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("leave(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)leaveBlockingRequest:(KsaypipCoreConversationsLeaveRequest *)request __attribute__((swift_name("leaveBlocking(request:)")));

/**
 * The viewer's own conversations, paged; newest word first.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KsaypipCoreConversationsListRequest *)request completionHandler_:(void (^)(KsaypipCoreResponse<KsaypipCoreConversationDigestList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler_:)")));
- (KsaypipCoreResponse<KsaypipCoreConversationDigestList *> *)listBlockingRequest_:(KsaypipCoreConversationsListRequest *)request __attribute__((swift_name("listBlocking(request_:)")));

/**
 * Move your own reading mark to now.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRequest:(KsaypipCoreConversationsReadRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("read(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)readBlockingRequest:(KsaypipCoreConversationsReadRequest *)request __attribute__((swift_name("readBlocking(request:)")));

/**
 * Reply in a conversation. Participants only.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)replyRequest:(KsaypipCoreConversationsReplyRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreReply *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reply(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreReply *> *)replyBlockingRequest:(KsaypipCoreConversationsReplyRequest *)request __attribute__((swift_name("replyBlocking(request:)")));
@end

__attribute__((swift_name("CoreFeedResource")))
@protocol KsaypipCoreFeedResource
@required

/**
 * The Global Room, paged; 7-day window, block-filtered.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)feedRequest:(KsaypipCoreFeedFeedRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreFeed *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("feed(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreFeed *> *)feedBlockingRequest:(KsaypipCoreFeedFeedRequest *)request __attribute__((swift_name("feedBlocking(request:)")));

/**
 * Your friends' posts, paged; past the window, and only since each friendship.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)friendsRequest:(KsaypipCoreFeedFriendsRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreFeed *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("friends(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreFeed *> *)friendsBlockingRequest:(KsaypipCoreFeedFriendsRequest *)request __attribute__((swift_name("friendsBlocking(request:)")));

/**
 * The feed filtered by a phrase; the same window and filters, no author narrowing.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchRequest:(KsaypipCoreFeedSearchRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreFeed *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreFeed *> *)searchBlockingRequest:(KsaypipCoreFeedSearchRequest *)request __attribute__((swift_name("searchBlocking(request:)")));

/**
 * The feed filtered to one hashtag, without the `#`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)tagRequest:(KsaypipCoreFeedTagRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreFeed *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("tag(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreFeed *> *)tagBlockingRequest:(KsaypipCoreFeedTagRequest *)request __attribute__((swift_name("tagBlocking(request:)")));

/**
 * The feed narrowed to the posts whose author is asking to be talked to.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)talkRequest:(KsaypipCoreFeedTalkRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreFeed *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("talk(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreFeed *> *)talkBlockingRequest:(KsaypipCoreFeedTalkRequest *)request __attribute__((swift_name("talkBlocking(request:)")));

/**
 * The last trend measurement. Not paged.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)trendsRequest:(KsaypipCoreFeedTrendsRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreTrendList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("trends(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreTrendList *> *)trendsBlockingRequest:(KsaypipCoreFeedTrendsRequest *)request __attribute__((swift_name("trendsBlocking(request:)")));
@end

__attribute__((swift_name("CoreFeedbackResource")))
@protocol KsaypipCoreFeedbackResource
@required

/**
 * Tell us about saypip. Delivered, and stored nowhere.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendRequest:(KsaypipCoreFeedbackSendRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("send(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)sendBlockingRequest:(KsaypipCoreFeedbackSendRequest *)request __attribute__((swift_name("sendBlocking(request:)")));
@end

__attribute__((swift_name("CoreFriendRequestsResource")))
@protocol KsaypipCoreFriendRequestsResource
@required

/**
 * Accept a friend request. Discloses both profiles, but never retroactively.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acceptRequest:(KsaypipCoreFriendRequestsAcceptRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreAcceptedFriendship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("accept(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreAcceptedFriendship *> *)acceptBlockingRequest:(KsaypipCoreFriendRequestsAcceptRequest *)request __attribute__((swift_name("acceptBlocking(request:)")));

/**
 * Decline a friend request. The counterpart is not told.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)declineRequest:(KsaypipCoreFriendRequestsDeclineRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("decline(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)declineBlockingRequest:(KsaypipCoreFriendRequestsDeclineRequest *)request __attribute__((swift_name("declineBlocking(request:)")));

/**
 * Incoming and outgoing pending friend requests.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KsaypipCoreFriendRequestsListRequest *)request completionHandler__:(void (^)(KsaypipCoreResponse<KsaypipCoreFriendRequestList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler__:)")));
- (KsaypipCoreResponse<KsaypipCoreFriendRequestList *> *)listBlockingRequest__:(KsaypipCoreFriendRequestsListRequest *)request __attribute__((swift_name("listBlocking(request__:)")));

/**
 * Ask to become friends. Requires a conversation threshold.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestRequest:(KsaypipCoreFriendRequestsRequestRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreFriendRequest *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreFriendRequest *> *)requestBlockingRequest:(KsaypipCoreFriendRequestsRequestRequest *)request __attribute__((swift_name("requestBlocking(request:)")));
@end

__attribute__((swift_name("CoreLinksResource")))
@protocol KsaypipCoreLinksResource
@required

/**
 * The card's picture, by page address: the only public, cacheable answer here.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)imageRequest:(KsaypipCoreLinksImageRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("image(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipKotlinByteArray *> *)imageBlockingRequest:(KsaypipCoreLinksImageRequest *)request __attribute__((swift_name("imageBlocking(request:)")));

/**
 * What an address in a post leads to. All-null fields are an ordinary answer.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)previewRequest:(KsaypipCoreLinksPreviewRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreLinkPreview *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("preview(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreLinkPreview *> *)previewBlockingRequest:(KsaypipCoreLinksPreviewRequest *)request __attribute__((swift_name("previewBlocking(request:)")));
@end

__attribute__((swift_name("CoreMeResource")))
@protocol KsaypipCoreMeResource
@required

/**
 * The whole arrangement of the right-hand column, sent as one list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)arrangeAsideWidgetsRequest:(KsaypipCoreMeArrangeAsideWidgetsRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreAsideWidgets *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("arrangeAsideWidgets(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreAsideWidgets *> *)arrangeAsideWidgetsBlockingRequest:(KsaypipCoreMeArrangeAsideWidgetsRequest *)request __attribute__((swift_name("arrangeAsideWidgetsBlocking(request:)")));

/**
 * The caller's own account state.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)meRequest:(KsaypipCoreMeMeRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreMe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("me(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreMe *> *)meBlockingRequest:(KsaypipCoreMeMeRequest *)request __attribute__((swift_name("meBlocking(request:)")));

/**
 * Keep one subject in the row over the timeline. Answers with the whole row.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pinSubjectRequest:(KsaypipCoreMePinSubjectRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePinnedSubjects *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pinSubject(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePinnedSubjects *> *)pinSubjectBlockingRequest:(KsaypipCoreMePinSubjectRequest *)request __attribute__((swift_name("pinSubjectBlocking(request:)")));

/**
 * The viewer's own posts, paged. The only post list without a window over it.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postsRequest:(KsaypipCoreMePostsRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreFeed *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("posts(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreFeed *> *)postsBlockingRequest:(KsaypipCoreMePostsRequest *)request __attribute__((swift_name("postsBlocking(request:)")));

/**
 * The whole order of kept subjects, sent as one rearrangement.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reorderPinnedSubjectsRequest:(KsaypipCoreMeReorderPinnedSubjectsRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePinnedSubjects *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reorderPinnedSubjects(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePinnedSubjects *> *)reorderPinnedSubjectsBlockingRequest:(KsaypipCoreMeReorderPinnedSubjectsRequest *)request __attribute__((swift_name("reorderPinnedSubjectsBlocking(request:)")));

/**
 * Let one subject go. Answers with the whole row.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unpinSubjectRequest:(KsaypipCoreMeUnpinSubjectRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePinnedSubjects *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unpinSubject(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePinnedSubjects *> *)unpinSubjectBlockingRequest:(KsaypipCoreMeUnpinSubjectRequest *)request __attribute__((swift_name("unpinSubjectBlocking(request:)")));

/**
 * Own display name, bio, avatar and banner.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateProfileRequest:(KsaypipCoreMeUpdateProfileRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreProfile *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateProfile(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreProfile *> *)updateProfileBlockingRequest:(KsaypipCoreMeUpdateProfileRequest *)request __attribute__((swift_name("updateProfileBlocking(request:)")));
@end

__attribute__((swift_name("CoreMediaResource")))
@protocol KsaypipCoreMediaResource
@required

/**
 * Media bytes, re-checking visibility on every fetch.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bytesRequest:(KsaypipCoreMediaBytesRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bytes(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipKotlinByteArray *> *)bytesBlockingRequest:(KsaypipCoreMediaBytesRequest *)request __attribute__((swift_name("bytesBlocking(request:)")));

/**
 * What the picture shows, until it is attached to a post.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAltRequest:(KsaypipCoreMediaSetAltRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreMediaAlt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAlt(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreMediaAlt *> *)setAltBlockingRequest:(KsaypipCoreMediaSetAltRequest *)request __attribute__((swift_name("setAltBlocking(request:)")));

/**
 * Upload, transcoded on the server, before attaching to a post.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadRequest:(KsaypipCoreMediaUploadRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreMedia *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreMedia *> *)uploadBlockingRequest:(KsaypipCoreMediaUploadRequest *)request __attribute__((swift_name("uploadBlocking(request:)")));
@end

__attribute__((swift_name("CoreMutesResource")))
@protocol KsaypipCoreMutesResource
@required

/**
 * The people this reader is hiding, newest mute first.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KsaypipCoreMutesListRequest *)request completionHandler___:(void (^)(KsaypipCoreResponse<KsaypipCoreMuteList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler___:)")));
- (KsaypipCoreResponse<KsaypipCoreMuteList *> *)listBlockingRequest___:(KsaypipCoreMutesListRequest *)request __attribute__((swift_name("listBlocking(request___:)")));

/**
 * Hide somebody, by identity or by one of their posts, for a window.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)muteRequest:(KsaypipCoreMutesMuteRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mute(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)muteBlockingRequest:(KsaypipCoreMutesMuteRequest *)request __attribute__((swift_name("muteBlocking(request:)")));

/**
 * Stop hiding them. A real delete, idempotent.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unmuteRequest:(KsaypipCoreMutesUnmuteRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unmute(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)unmuteBlockingRequest:(KsaypipCoreMutesUnmuteRequest *)request __attribute__((swift_name("unmuteBlocking(request:)")));
@end

__attribute__((swift_name("CoreNotificationsResource")))
@protocol KsaypipCoreNotificationsResource
@required

/**
 * What happened to you, paged; newest arrival first.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KsaypipCoreNotificationsListRequest *)request completionHandler____:(void (^)(KsaypipCoreResponse<KsaypipCoreNotificationList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler____:)")));
- (KsaypipCoreResponse<KsaypipCoreNotificationList *> *)listBlockingRequest____:(KsaypipCoreNotificationsListRequest *)request __attribute__((swift_name("listBlocking(request____:)")));

/**
 * Mark the reaction lines read. Reply lines are read with their conversations.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRequest:(KsaypipCoreNotificationsReadRequest *)request completionHandler_:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("read(request:completionHandler_:)")));
- (KsaypipCoreResponseUnit *)readBlockingRequest_:(KsaypipCoreNotificationsReadRequest *)request __attribute__((swift_name("readBlocking(request_:)")));
@end

__attribute__((swift_name("CorePostsResource")))
@protocol KsaypipCorePostsResource
@required

/**
 * Conversations rooted at this post, readable by third parties.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsRequest:(KsaypipCorePostsConversationsRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreConversationList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversations(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreConversationList *> *)conversationsBlockingRequest:(KsaypipCorePostsConversationsRequest *)request __attribute__((swift_name("conversationsBlocking(request:)")));

/**
 * Create a post. `replyToPostId` makes it a self-reply.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KsaypipCorePostsCreateRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePost *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePost *> *)createBlockingRequest:(KsaypipCorePostsCreateRequest *)request __attribute__((swift_name("createBlocking(request:)")));

/**
 * Delete one's own post, softly.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KsaypipCorePostsDeleteRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)deleteBlockingRequest:(KsaypipCorePostsDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request:)")));

/**
 * A single post, under the same visibility rules as the feed.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postRequest:(KsaypipCorePostsPostRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePost *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePost *> *)postBlockingRequest:(KsaypipCorePostsPostRequest *)request __attribute__((swift_name("postBlocking(request:)")));

/**
 * Put one picture on a post. Idempotent; answers with the whole bar.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactRequest:(KsaypipCorePostsReactRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePostReactions *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("react(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePostReactions *> *)reactBlockingRequest:(KsaypipCorePostsReactRequest *)request __attribute__((swift_name("reactBlocking(request:)")));

/**
 * Who put each picture on this post, as this viewer sees them. Needs a session.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactionsRequest:(KsaypipCorePostsReactionsRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePostReactors *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactions(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePostReactors *> *)reactionsBlockingRequest:(KsaypipCorePostsReactionsRequest *)request __attribute__((swift_name("reactionsBlocking(request:)")));

/**
 * Take back the ask on one's own post. Idempotent.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeWantsTalkRequest:(KsaypipCorePostsRemoveWantsTalkRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeWantsTalk(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)removeWantsTalkBlockingRequest:(KsaypipCorePostsRemoveWantsTalkRequest *)request __attribute__((swift_name("removeWantsTalkBlocking(request:)")));

/**
 * Start a 1:1 conversation on a post, created with its first reply.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startConversationRequest:(KsaypipCorePostsStartConversationRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreConversation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startConversation(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreConversation *> *)startConversationBlockingRequest:(KsaypipCorePostsStartConversationRequest *)request __attribute__((swift_name("startConversationBlocking(request:)")));

/**
 * Take your own picture back off a post. Idempotent; answers with the whole bar.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unreactRequest:(KsaypipCorePostsUnreactRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCorePostReactions *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unreact(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCorePostReactions *> *)unreactBlockingRequest:(KsaypipCorePostsUnreactRequest *)request __attribute__((swift_name("unreactBlocking(request:)")));
@end

__attribute__((swift_name("CoreRelationshipsResource")))
@protocol KsaypipCoreRelationshipsResource
@required

/**
 * The viewer's own relationships, paged; most recently active first.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KsaypipCoreRelationshipsListRequest *)request completionHandler_____:(void (^)(KsaypipCoreResponse<KsaypipCoreRelationshipList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler_____:)")));
- (KsaypipCoreResponse<KsaypipCoreRelationshipList *> *)listBlockingRequest_____:(KsaypipCoreRelationshipsListRequest *)request __attribute__((swift_name("listBlocking(request_____:)")));

/**
 * A relationship page: label, note, mark, history and conversations.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)relationshipRequest:(KsaypipCoreRelationshipsRelationshipRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("relationship(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreRelationship *> *)relationshipBlockingRequest:(KsaypipCoreRelationshipsRelationshipRequest *)request __attribute__((swift_name("relationshipBlocking(request:)")));

/**
 * Replace the viewer's local label, note and mark. A replacement, not a patch.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setLabelRequest:(KsaypipCoreRelationshipsSetLabelRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreLabel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setLabel(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreLabel *> *)setLabelBlockingRequest:(KsaypipCoreRelationshipsSetLabelRequest *)request __attribute__((swift_name("setLabelBlocking(request:)")));

/**
 * Relationship termination: everything shared is revoked synchronously.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)terminateRequest:(KsaypipCoreRelationshipsTerminateRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("terminate(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)terminateBlockingRequest:(KsaypipCoreRelationshipsTerminateRequest *)request __attribute__((swift_name("terminateBlocking(request:)")));
@end

__attribute__((swift_name("CoreReportsResource")))
@protocol KsaypipCoreReportsResource
@required

/**
 * Report, optionally with evidence. The answer carries the report's own ID.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reportRequest:(KsaypipCoreReportsReportRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreCreatedReport *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("report(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreCreatedReport *> *)reportBlockingRequest:(KsaypipCoreReportsReportRequest *)request __attribute__((swift_name("reportBlocking(request:)")));
@end

__attribute__((swift_name("CoreUsersResource")))
@protocol KsaypipCoreUsersResource
@required

/**
 * A user page as seen by this viewer: the person, a page of their posts, and the
 * relationship where there is one.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)userRequest:(KsaypipCoreUsersUserRequest *)request completionHandler:(void (^)(KsaypipCoreResponse<KsaypipCoreUserPage *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("user(request:completionHandler:)")));
- (KsaypipCoreResponse<KsaypipCoreUserPage *> *)userBlockingRequest:(KsaypipCoreUsersUserRequest *)request __attribute__((swift_name("userBlocking(request:)")));
@end

__attribute__((swift_name("CoreWordMutesResource")))
@protocol KsaypipCoreWordMutesResource
@required

/**
 * Forget one word mute. A real delete, idempotent.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)forgetRequest:(KsaypipCoreWordMutesForgetRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("forget(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)forgetBlockingRequest:(KsaypipCoreWordMutesForgetRequest *)request __attribute__((swift_name("forgetBlocking(request:)")));

/**
 * The words this reader is hiding, spent ones included.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KsaypipCoreWordMutesListRequest *)request completionHandler______:(void (^)(KsaypipCoreResponse<KsaypipCoreWordMuteList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler______:)")));
- (KsaypipCoreResponse<KsaypipCoreWordMuteList *> *)listBlockingRequest______:(KsaypipCoreWordMutesListRequest *)request __attribute__((swift_name("listBlocking(request______:)")));

/**
 * Hide the writing that says one word, for a window.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)muteRequest:(KsaypipCoreWordMutesMuteRequest *)request completionHandler_:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mute(request:completionHandler_:)")));
- (KsaypipCoreResponseUnit *)muteBlockingRequest_:(KsaypipCoreWordMutesMuteRequest *)request __attribute__((swift_name("muteBlocking(request_:)")));

/**
 * Replace the window of an existing word mute, waking a spent one.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setWindowRequest:(KsaypipCoreWordMutesWindowRequest *)request completionHandler:(void (^)(KsaypipCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setWindow(request:completionHandler:)")));
- (KsaypipCoreResponseUnit *)setWindowBlockingRequest:(KsaypipCoreWordMutesWindowRequest *)request __attribute__((swift_name("setWindowBlocking(request:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KsaypipKotlinThrowable : KsaypipBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KsaypipKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KsaypipKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KsaypipKotlinException : KsaypipKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KsaypipKotlinRuntimeException : KsaypipKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KsaypipKotlinIllegalStateException : KsaypipKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KsaypipKotlinCancellationException : KsaypipKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KsaypipKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * The applications this reader has authorized, with what each may do.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsListRequest")))
@interface KsaypipCoreAppsListRequest : KsaypipBase

/**
 * The applications this reader has authorized, with what each may do.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The applications this reader has authorized, with what each may do.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * The applications this reader has authorized, oldest first.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthorizedAppList")))
@interface KsaypipCoreAuthorizedAppList : KsaypipBase

/**
 * The applications this reader has authorized, oldest first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The applications this reader has authorized, oldest first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreAuthorizedAppListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreAuthorizedApp *> *items __attribute__((swift_name("items")));
@end


/**
 * A successful answer together with how it arrived.
 *
 * The payload is the schema the endpoint declares; [json] is the body as it came, for a caller
 * that wants a field this library does not model.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KsaypipCoreResponse<T> : KsaypipBase
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable data __attribute__((swift_name("data")));
@property NSString * _Nullable json __attribute__((swift_name("json")));
@property int32_t status __attribute__((swift_name("status")));
@end


/**
 * End one application's access: the consent and every token it authorized go together.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsRevokeRequest")))
@interface KsaypipCoreAppsRevokeRequest : KsaypipBase

/**
 * End one application's access: the consent and every token it authorized go together.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * End one application's access: the consent and every token it authorized go together.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable consentId __attribute__((swift_name("consentId")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@end


/**
 * A successful answer with no resource behind it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseUnit")))
@interface KsaypipCoreResponseUnit : KsaypipBase

/**
 * A successful answer with no resource behind it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A successful answer with no resource behind it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable json __attribute__((swift_name("json")));
@property int32_t status __attribute__((swift_name("status")));
@end


/**
 * Block is forget plus avoid: everything termination does, plus keeping the two apart, without
 * telling the blocked person they were blocked.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksBlockRequest")))
@interface KsaypipCoreBlocksBlockRequest : KsaypipBase

/**
 * Block is forget plus avoid: everything termination does, plus keeping the two apart, without
 * telling the blocked person they were blocked.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Block is forget plus avoid: everything termination does, plus keeping the two apart, without
 * telling the blocked person they were blocked.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable identity __attribute__((swift_name("identity")));
@end


/**
 * One conversation, and a page of its replies from the newest end.
 *
 * `cursor` here asks for the replies written *before* this page; the first page is the newest
 * lines.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsConversationRequest")))
@interface KsaypipCoreConversationsConversationRequest : KsaypipBase

/**
 * One conversation, and a page of its replies from the newest end.
 *
 * `cursor` here asks for the replies written *before* this page; the first page is the newest
 * lines.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One conversation, and a page of its replies from the newest end.
 *
 * `cursor` here asks for the replies written *before* this page; the first page is the newest
 * lines.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable conversationId __attribute__((swift_name("conversationId")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * A conversation and a page of what was said in it, oldest of the page first.
 *
 * The one paged list in this API whose cursor goes backwards in time: a conversation is read
 * oldest-first, so the first page is the newest lines and `olderRepliesCursor` asks for what was
 * said before them.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation")))
@interface KsaypipCoreConversation : KsaypipBase

/**
 * A conversation and a page of what was said in it, oldest of the page first.
 *
 * The one paged list in this API whose cursor goes backwards in time: a conversation is read
 * oldest-first, so the first page is the newest lines and `olderRepliesCursor` asks for what was
 * said before them.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A conversation and a page of what was said in it, oldest of the page first.
 *
 * The one paged list in this API whose cursor goes backwards in time: a conversation is read
 * oldest-first, so the first page is the newest lines and `olderRepliesCursor` asks for what was
 * said before them.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreConversationCompanion *companion __attribute__((swift_name("companion")));

/** False for third parties, who are offered their own conversation on the post instead. */
@property BOOL canReply __attribute__((swift_name("canReply")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isMine __attribute__((swift_name("isMine")));
@property NSString *lastReplyAt __attribute__((swift_name("lastReplyAt")));

/** Pass as `cursor` for the replies written before this page. Null at the beginning. */
@property NSString * _Nullable olderRepliesCursor __attribute__((swift_name("olderRepliesCursor")));

/** The post the conversation hangs off. Null where the post was deleted. */
@property KsaypipCorePost * _Nullable originPost __attribute__((swift_name("originPost")));
@property KsaypipKotlinArray<KsaypipCoreParticipant *> *participants __attribute__((swift_name("participants")));
@property NSString *postId __attribute__((swift_name("postId")));
@property KsaypipKotlinArray<KsaypipCoreReply *> *replies __attribute__((swift_name("replies")));
@end


/**
 * Leave one conversation. Either seat may; its replies go with it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsLeaveRequest")))
@interface KsaypipCoreConversationsLeaveRequest : KsaypipBase

/**
 * Leave one conversation. Either seat may; its replies go with it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Leave one conversation. Either seat may; its replies go with it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable conversationId __attribute__((swift_name("conversationId")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@end


/**
 * The viewer's own conversations, paged; newest word first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsListRequest")))
@interface KsaypipCoreConversationsListRequest : KsaypipBase

/**
 * The viewer's own conversations, paged; newest word first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The viewer's own conversations, paged; newest word first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * A page of the viewer's own conversations, newest word first.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationDigestList")))
@interface KsaypipCoreConversationDigestList : KsaypipBase

/**
 * A page of the viewer's own conversations, newest word first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A page of the viewer's own conversations, newest word first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreConversationDigestListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreConversationDigest *> *items __attribute__((swift_name("items")));
@property NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@end


/**
 * Move your own reading mark to now. Participants only.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsReadRequest")))
@interface KsaypipCoreConversationsReadRequest : KsaypipBase

/**
 * Move your own reading mark to now. Participants only.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Move your own reading mark to now. Participants only.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable conversationId __attribute__((swift_name("conversationId")));
@end


/**
 * Reply in a conversation. Participants only; [idempotencyKey] makes a retry a repeat.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsReplyRequest")))
@interface KsaypipCoreConversationsReplyRequest : KsaypipBase

/**
 * Reply in a conversation. Participants only; [idempotencyKey] makes a retry a repeat.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Reply in a conversation. Participants only; [idempotencyKey] makes a retry a repeat.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable conversationId __attribute__((swift_name("conversationId")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@end


/**
 * One thing said in a conversation.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReply")))
@interface KsaypipCoreReply : KsaypipBase

/**
 * One thing said in a conversation.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One thing said in a conversation.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreReplyCompanion *companion __attribute__((swift_name("companion")));
@property NSString *body __attribute__((swift_name("body")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isMine __attribute__((swift_name("isMine")));
@property NSString *side __attribute__((swift_name("side")));
@end


/**
 * The Global Room, paged; 7-day window, block-filtered.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedFeedRequest")))
@interface KsaypipCoreFeedFeedRequest : KsaypipBase

/**
 * The Global Room, paged; 7-day window, block-filtered.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The Global Room, paged; 7-day window, block-filtered.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * A page of posts. Every list here is newest-first, and `nextCursor` asks for older rows further
 * down; null means there is no next page.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeed")))
@interface KsaypipCoreFeed : KsaypipBase

/**
 * A page of posts. Every list here is newest-first, and `nextCursor` asks for older rows further
 * down; null means there is no next page.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A page of posts. Every list here is newest-first, and `nextCursor` asks for older rows further
 * down; null means there is no next page.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreFeedCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCorePost *> *items __attribute__((swift_name("items")));
@property NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@end


/**
 * Your friends' posts, paged; past the window, and only since each friendship.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedFriendsRequest")))
@interface KsaypipCoreFeedFriendsRequest : KsaypipBase

/**
 * Your friends' posts, paged; past the window, and only since each friendship.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Your friends' posts, paged; past the window, and only since each friendship.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * The feed filtered by a phrase: the same window and filters, no author narrowing.
 *
 * The phrase is counted in code points by the server, at least two and at most sixty-four.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedSearchRequest")))
@interface KsaypipCoreFeedSearchRequest : KsaypipBase

/**
 * The feed filtered by a phrase: the same window and filters, no author narrowing.
 *
 * The phrase is counted in code points by the server, at least two and at most sixty-four.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The feed filtered by a phrase: the same window and filters, no author narrowing.
 *
 * The phrase is counted in code points by the server, at least two and at most sixty-four.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable q __attribute__((swift_name("q")));
@end


/**
 * The feed filtered to one hashtag, without the `#`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedTagRequest")))
@interface KsaypipCoreFeedTagRequest : KsaypipBase

/**
 * The feed filtered to one hashtag, without the `#`.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The feed filtered to one hashtag, without the `#`.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@end


/**
 * The feed narrowed to the posts whose author is asking to be talked to.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedTalkRequest")))
@interface KsaypipCoreFeedTalkRequest : KsaypipBase

/**
 * The feed narrowed to the posts whose author is asking to be talked to.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The feed narrowed to the posts whose author is asking to be talked to.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * The last trend measurement. Not paged: it is a handful of rows by construction.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedTrendsRequest")))
@interface KsaypipCoreFeedTrendsRequest : KsaypipBase

/**
 * The last trend measurement. Not paged: it is a handful of rows by construction.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The last trend measurement. Not paged: it is a handful of rows by construction.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * The trend measurement. Not paged: it is a handful of rows by construction.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrendList")))
@interface KsaypipCoreTrendList : KsaypipBase

/**
 * The trend measurement. Not paged: it is a handful of rows by construction.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The trend measurement. Not paged: it is a handful of rows by construction.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreTrendListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreTrend *> *items __attribute__((swift_name("items")));

/** When the count was taken. Null when the list is empty. */
@property NSString * _Nullable measuredAt __attribute__((swift_name("measuredAt")));
@end


/**
 * Tell us about saypip. Delivered, and stored nowhere.
 *
 * [route] is a route *pattern* (`/posts/$postId`) and never the address the sender was on. The
 * picture is re-encoded and its filename dropped; it travels as `screenshot.webp`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedbackSendRequest")))
@interface KsaypipCoreFeedbackSendRequest : KsaypipBase

/**
 * Tell us about saypip. Delivered, and stored nowhere.
 *
 * [route] is a route *pattern* (`/posts/$postId`) and never the address the sender was on. The
 * picture is re-encoded and its filename dropped; it travels as `screenshot.webp`.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Tell us about saypip. Delivered, and stored nowhere.
 *
 * [route] is a route *pattern* (`/posts/$postId`) and never the address the sender was on. The
 * picture is re-encoded and its filename dropped; it travels as `screenshot.webp`.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable contact __attribute__((swift_name("contact")));
@property KsaypipKotlinByteArray * _Nullable image __attribute__((swift_name("image")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable route __attribute__((swift_name("route")));
@end


/**
 * Accept a friend request. Discloses both profiles, but never retroactively.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestsAcceptRequest")))
@interface KsaypipCoreFriendRequestsAcceptRequest : KsaypipBase

/**
 * Accept a friend request. Discloses both profiles, but never retroactively.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Accept a friend request. Discloses both profiles, but never retroactively.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable friendRequestId __attribute__((swift_name("friendRequestId")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@end


/**
 * What accepting a friend request answers with.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAcceptedFriendship")))
@interface KsaypipCoreAcceptedFriendship : KsaypipBase

/**
 * What accepting a friend request answers with.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What accepting a friend request answers with.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreAcceptedFriendshipCompanion *companion __attribute__((swift_name("companion")));
@property NSString *friendSince __attribute__((swift_name("friendSince")));
@property NSString *relationshipId __attribute__((swift_name("relationshipId")));
@end


/**
 * Decline a friend request. The counterpart is not told.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestsDeclineRequest")))
@interface KsaypipCoreFriendRequestsDeclineRequest : KsaypipBase

/**
 * Decline a friend request. The counterpart is not told.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Decline a friend request. The counterpart is not told.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable friendRequestId __attribute__((swift_name("friendRequestId")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@end


/**
 * Incoming and outgoing pending friend requests.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestsListRequest")))
@interface KsaypipCoreFriendRequestsListRequest : KsaypipBase

/**
 * Incoming and outgoing pending friend requests.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Incoming and outgoing pending friend requests.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * Incoming and outgoing pending friend requests.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestList")))
@interface KsaypipCoreFriendRequestList : KsaypipBase

/**
 * Incoming and outgoing pending friend requests.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Incoming and outgoing pending friend requests.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreFriendRequestListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreFriendRequest *> *items __attribute__((swift_name("items")));
@end


/**
 * Ask to become friends, addressing the counterpart by the identity the caller holds.
 *
 * Requires a conversation threshold: a `precondition_failed` /
 * `conversation_threshold_not_met` otherwise.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestsRequestRequest")))
@interface KsaypipCoreFriendRequestsRequestRequest : KsaypipBase

/**
 * Ask to become friends, addressing the counterpart by the identity the caller holds.
 *
 * Requires a conversation threshold: a `precondition_failed` /
 * `conversation_threshold_not_met` otherwise.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Ask to become friends, addressing the counterpart by the identity the caller holds.
 *
 * Requires a conversation threshold: a `precondition_failed` /
 * `conversation_threshold_not_met` otherwise.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable identity __attribute__((swift_name("identity")));
@end


/**
 * A pending request in the viewer's own queue, which is where most of them are answered.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequest")))
@interface KsaypipCoreFriendRequest : KsaypipBase

/**
 * A pending request in the viewer's own queue, which is where most of them are answered.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A pending request in the viewer's own queue, which is where most of them are answered.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreFriendRequestCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipCorePerson *counterpart __attribute__((swift_name("counterpart")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *direction __attribute__((swift_name("direction")));
@property NSString *firstInteractionAt __attribute__((swift_name("firstInteractionAt")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *relationshipId __attribute__((swift_name("relationshipId")));
@end


/**
 * A link card's picture, by *page* address: the only public, cacheable answer here.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLinksImageRequest")))
@interface KsaypipCoreLinksImageRequest : KsaypipBase

/**
 * A link card's picture, by *page* address: the only public, cacheable answer here.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A link card's picture, by *page* address: the only public, cacheable answer here.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KsaypipKotlinByteArray : KsaypipBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KsaypipByte *(^)(KsaypipInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KsaypipKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * What an address in a post leads to: the Worker reads the page, not the reader.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLinksPreviewRequest")))
@interface KsaypipCoreLinksPreviewRequest : KsaypipBase

/**
 * What an address in a post leads to: the Worker reads the page, not the reader.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What an address in a post leads to: the Worker reads the page, not the reader.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * What is at the other end of a link in a post, so a card can be drawn for it.
 *
 * Every field but the address may be null, and all-null is an ordinary answer rather than a
 * failure: a page can be gone, private, or simply silent about itself.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLinkPreview")))
@interface KsaypipCoreLinkPreview : KsaypipBase

/**
 * What is at the other end of a link in a post, so a card can be drawn for it.
 *
 * Every field but the address may be null, and all-null is an ordinary answer rather than a
 * failure: a page can be gone, private, or simply silent about itself.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What is at the other end of a link in a post, so a card can be drawn for it.
 *
 * Every field but the address may be null, and all-null is an ordinary answer rather than a
 * failure: a page can be gone, private, or simply silent about itself.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreLinkPreviewCompanion *companion __attribute__((swift_name("companion")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/** An address on this origin, never the far side's. Treat as opaque and pass to an `img`. */
@property NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property NSString * _Nullable title __attribute__((swift_name("title")));

/** The address that was asked about, normalized: no fragment. */
@property NSString *url __attribute__((swift_name("url")));
@end


/**
 * The whole arrangement of the right-hand column, sent as one list.
 *
 * Every widget has to be present exactly once, each with whether the column draws it. A widget
 * that is turned off keeps its place, so turning it back on returns it there.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeArrangeAsideWidgetsRequest")))
@interface KsaypipCoreMeArrangeAsideWidgetsRequest : KsaypipBase

/**
 * The whole arrangement of the right-hand column, sent as one list.
 *
 * Every widget has to be present exactly once, each with whether the column draws it. A widget
 * that is turned off keeps its place, so turning it back on returns it there.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The whole arrangement of the right-hand column, sent as one list.
 *
 * Every widget has to be present exactly once, each with whether the column draws it. A widget
 * that is turned off keeps its place, so turning it back on returns it there.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KsaypipKotlinArray<KsaypipCoreAsideWidgetItem *> * _Nullable items __attribute__((swift_name("items")));
@end


/**
 * The right-hand column as arranged: every widget the product has, in the reader's order.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAsideWidgets")))
@interface KsaypipCoreAsideWidgets : KsaypipBase

/**
 * The right-hand column as arranged: every widget the product has, in the reader's order.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The right-hand column as arranged: every widget the product has, in the reader's order.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreAsideWidgetsCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreAsideWidgetItem *> *items __attribute__((swift_name("items")));
@end


/**
 * The caller's own account state.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeMeRequest")))
@interface KsaypipCoreMeMeRequest : KsaypipBase

/**
 * The caller's own account state.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The caller's own account state.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * The viewer's own account state, which most screens already ask for.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMe")))
@interface KsaypipCoreMe : KsaypipBase

/**
 * The viewer's own account state, which most screens already ask for.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The viewer's own account state, which most screens already ask for.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreMeCompanion *companion __attribute__((swift_name("companion")));

/** Every widget the product has, in the arranged order, with whether the column draws it. */
@property KsaypipKotlinArray<KsaypipCoreAsideWidgetItem *> *asideWidgets __attribute__((swift_name("asideWidgets")));

/** Whether this Worker has somewhere to send feedback to. */
@property BOOL canSendFeedback __attribute__((swift_name("canSendFeedback")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));

/** Whether the friends' timeline is offered at all. A boolean and never a count. */
@property BOOL hasFriends __attribute__((swift_name("hasFriends")));

/** How many people are waiting for an answer to a friend request. */
@property int32_t incomingFriendRequests __attribute__((swift_name("incomingFriendRequests")));

/** Whether this account may open the moderation screens. */
@property BOOL isAdmin __attribute__((swift_name("isAdmin")));

/** The subjects kept along the top of the timeline, in order, without the `#`. */
@property KsaypipKotlinArray<NSString *> *pinnedSubjects __attribute__((swift_name("pinnedSubjects")));
@property KsaypipCoreProfile * _Nullable profile __attribute__((swift_name("profile")));

/** How many of your live conversations have something you have not read. */
@property int32_t unreadConversations __attribute__((swift_name("unreadConversations")));

/** How many of your posts have something new on them. */
@property int32_t unreadNotifications __attribute__((swift_name("unreadNotifications")));

/** Which post is still asking to be talked to, or null. One ask at a time. */
@property NSString * _Nullable wantsTalkPostId __attribute__((swift_name("wantsTalkPostId")));
@end


/**
 * Keep one subject in the row over the timeline. Idempotent; the whole row answers.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMePinSubjectRequest")))
@interface KsaypipCoreMePinSubjectRequest : KsaypipBase

/**
 * Keep one subject in the row over the timeline. Idempotent; the whole row answers.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Keep one subject in the row over the timeline. Idempotent; the whole row answers.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@end


/**
 * The row of kept subjects, normalized and without the `#`, in the reader's own order.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinnedSubjects")))
@interface KsaypipCorePinnedSubjects : KsaypipBase

/**
 * The row of kept subjects, normalized and without the `#`, in the reader's own order.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The row of kept subjects, normalized and without the `#`, in the reader's own order.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePinnedSubjectsCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<NSString *> *items __attribute__((swift_name("items")));
@end


/**
 * The viewer's own posts, paged. The only post list without a window over it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMePostsRequest")))
@interface KsaypipCoreMePostsRequest : KsaypipBase

/**
 * The viewer's own posts, paged. The only post list without a window over it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The viewer's own posts, paged. The only post list without a window over it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * The whole order of kept subjects, sent as one rearrangement.
 *
 * The set has to be exactly the stored one, and the server refuses one that is not with
 * `conflict` / `pinned_subjects_changed` rather than obeying it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeReorderPinnedSubjectsRequest")))
@interface KsaypipCoreMeReorderPinnedSubjectsRequest : KsaypipBase

/**
 * The whole order of kept subjects, sent as one rearrangement.
 *
 * The set has to be exactly the stored one, and the server refuses one that is not with
 * `conflict` / `pinned_subjects_changed` rather than obeying it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The whole order of kept subjects, sent as one rearrangement.
 *
 * The set has to be exactly the stored one, and the server refuses one that is not with
 * `conflict` / `pinned_subjects_changed` rather than obeying it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KsaypipKotlinArray<NSString *> * _Nullable items __attribute__((swift_name("items")));
@end


/**
 * Let one subject go; the row closes up behind it. Idempotent; the whole row answers.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeUnpinSubjectRequest")))
@interface KsaypipCoreMeUnpinSubjectRequest : KsaypipBase

/**
 * Let one subject go; the row closes up behind it. Idempotent; the whole row answers.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Let one subject go; the row closes up behind it. Idempotent; the whole row answers.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@end


/**
 * Own display name, bio, avatar and banner.
 *
 * Every field is optional, and each of the four means something different absent than it does
 * null: absent leaves what is stored alone, and a `clear…` flag sends the explicit null that
 * clears it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeUpdateProfileRequest")))
@interface KsaypipCoreMeUpdateProfileRequest : KsaypipBase

/**
 * Own display name, bio, avatar and banner.
 *
 * Every field is optional, and each of the four means something different absent than it does
 * null: absent leaves what is stored alone, and a `clear…` flag sends the explicit null that
 * clears it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Own display name, bio, avatar and banner.
 *
 * Every field is optional, and each of the four means something different absent than it does
 * null: absent leaves what is stored alone, and a `clear…` flag sends the explicit null that
 * clears it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable avatarMediaId __attribute__((swift_name("avatarMediaId")));
@property NSString * _Nullable bannerMediaId __attribute__((swift_name("bannerMediaId")));
@property NSString * _Nullable bio __attribute__((swift_name("bio")));

/** Send `avatarMediaId: null`, taking the avatar down. */
@property BOOL clearAvatarMediaId __attribute__((swift_name("clearAvatarMediaId")));

/** Send `bannerMediaId: null`, taking the banner down. */
@property BOOL clearBannerMediaId __attribute__((swift_name("clearBannerMediaId")));

/** Send `bio: null`, clearing the stored bio. */
@property BOOL clearBio __attribute__((swift_name("clearBio")));

/** Send `displayName: null`, clearing the stored name. */
@property BOOL clearDisplayName __attribute__((swift_name("clearDisplayName")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@end


/**
 * A profile, which arrives only where it has been disclosed.
 *
 * The two pictures are URLs rather than media IDs: an avatar takes the thumbnail, a banner the
 * full-size variant, and both are checked for visibility on every fetch.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfile")))
@interface KsaypipCoreProfile : KsaypipBase

/**
 * A profile, which arrives only where it has been disclosed.
 *
 * The two pictures are URLs rather than media IDs: an avatar takes the thumbnail, a banner the
 * full-size variant, and both are checked for visibility on every fetch.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A profile, which arrives only where it has been disclosed.
 *
 * The two pictures are URLs rather than media IDs: an avatar takes the thumbnail, a banner the
 * full-size variant, and both are checked for visibility on every fetch.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreProfileCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property NSString * _Nullable bannerUrl __attribute__((swift_name("bannerUrl")));
@property NSString * _Nullable bio __attribute__((swift_name("bio")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@end


/**
 * Media bytes, re-checking visibility on every fetch.
 *
 * `variant` is `full` or `thumb`, both of which are checked identically — it chooses bytes and
 * nothing else.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaBytesRequest")))
@interface KsaypipCoreMediaBytesRequest : KsaypipBase

/**
 * Media bytes, re-checking visibility on every fetch.
 *
 * `variant` is `full` or `thumb`, both of which are checked identically — it chooses bytes and
 * nothing else.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Media bytes, re-checking visibility on every fetch.
 *
 * `variant` is `full` or `thumb`, both of which are checked identically — it chooses bytes and
 * nothing else.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable mediaId __attribute__((swift_name("mediaId")));
@property NSString * _Nullable variant __attribute__((swift_name("variant")));
@end


/**
 * What the picture shows, until it is attached to a post.
 *
 * Null, or a string that trims to nothing, both clear it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaSetAltRequest")))
@interface KsaypipCoreMediaSetAltRequest : KsaypipBase

/**
 * What the picture shows, until it is attached to a post.
 *
 * Null, or a string that trims to nothing, both clear it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What the picture shows, until it is attached to a post.
 *
 * Null, or a string that trims to nothing, both clear it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable alt __attribute__((swift_name("alt")));
@property NSString * _Nullable mediaId __attribute__((swift_name("mediaId")));
@end


/**
 * What `PUT /api/media/{mediaId}/alt` answers with. Null, or a string that trims to nothing,
 * both mean "nobody has described this picture".
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaAlt")))
@interface KsaypipCoreMediaAlt : KsaypipBase

/**
 * What `PUT /api/media/{mediaId}/alt` answers with. Null, or a string that trims to nothing,
 * both mean "nobody has described this picture".
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What `PUT /api/media/{mediaId}/alt` answers with. Null, or a string that trims to nothing,
 * both mean "nobody has described this picture".
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreMediaAltCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable alt __attribute__((swift_name("alt")));
@end


/**
 * An upload, transcoded on the server, before attaching to a post.
 *
 * The bytes are sent raw, with [contentType] as the body's content type — one of `image/webp`,
 * `image/jpeg`, `image/png`. Nothing is stored under the sender's filename.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaUploadRequest")))
@interface KsaypipCoreMediaUploadRequest : KsaypipBase

/**
 * An upload, transcoded on the server, before attaching to a post.
 *
 * The bytes are sent raw, with [contentType] as the body's content type — one of `image/webp`,
 * `image/jpeg`, `image/png`. Nothing is stored under the sender's filename.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * An upload, transcoded on the server, before attaching to a post.
 *
 * The bytes are sent raw, with [contentType] as the body's content type — one of `image/webp`,
 * `image/jpeg`, `image/png`. Nothing is stored under the sender's filename.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable contentType __attribute__((swift_name("contentType")));
@property KsaypipKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@end


/**
 * One picture, at the two sizes it is stored in. Both URLs are subject to the same visibility
 * check, so a client may use either freely: the thumbnail for a list, the full size for the post
 * itself.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMedia")))
@interface KsaypipCoreMedia : KsaypipBase

/**
 * One picture, at the two sizes it is stored in. Both URLs are subject to the same visibility
 * check, so a client may use either freely: the thumbnail for a list, the full size for the post
 * itself.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One picture, at the two sizes it is stored in. Both URLs are subject to the same visibility
 * check, so a client may use either freely: the thumbnail for a list, the full size for the post
 * itself.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreMediaCompanion *companion __attribute__((swift_name("companion")));

/** What the picture shows, or null when nobody wrote one. */
@property NSString * _Nullable alt __attribute__((swift_name("alt")));
@property int32_t height __attribute__((swift_name("height")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property NSString *url __attribute__((swift_name("url")));
@property int32_t width __attribute__((swift_name("width")));
@end


/**
 * The people this reader is hiding, newest mute first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesListRequest")))
@interface KsaypipCoreMutesListRequest : KsaypipBase

/**
 * The people this reader is hiding, newest mute first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The people this reader is hiding, newest mute first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * The people this reader is hiding, newest mute first.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMuteList")))
@interface KsaypipCoreMuteList : KsaypipBase

/**
 * The people this reader is hiding, newest mute first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The people this reader is hiding, newest mute first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreMuteListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreMute *> *items __attribute__((swift_name("items")));
@property NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@end


/**
 * Hide somebody from your own reading, for a window.
 *
 * Exactly one target is named: an [identity] the screen holds, or a [postId] whose author the
 * server reads without telling the client who they are. [duration] is one of the keys from
 * `MuteDuration`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesMuteRequest")))
@interface KsaypipCoreMutesMuteRequest : KsaypipBase

/**
 * Hide somebody from your own reading, for a window.
 *
 * Exactly one target is named: an [identity] the screen holds, or a [postId] whose author the
 * server reads without telling the client who they are. [duration] is one of the keys from
 * `MuteDuration`.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Hide somebody from your own reading, for a window.
 *
 * Exactly one target is named: an [identity] the screen holds, or a [postId] whose author the
 * server reads without telling the client who they are. [duration] is one of the keys from
 * `MuteDuration`.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable duration __attribute__((swift_name("duration")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable identity __attribute__((swift_name("identity")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * Stop hiding them. A real delete, idempotent.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesUnmuteRequest")))
@interface KsaypipCoreMutesUnmuteRequest : KsaypipBase

/**
 * Stop hiding them. A real delete, idempotent.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Stop hiding them. A real delete, idempotent.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));
@end


/**
 * What happened to you, paged; newest arrival first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsListRequest")))
@interface KsaypipCoreNotificationsListRequest : KsaypipBase

/**
 * What happened to you, paged; newest arrival first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What happened to you, paged; newest arrival first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * What happened to you, newest arrival first.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationList")))
@interface KsaypipCoreNotificationList : KsaypipBase

/**
 * What happened to you, newest arrival first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What happened to you, newest arrival first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreNotificationListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreNotification *> *items __attribute__((swift_name("items")));
@property NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@end


/**
 * Mark the reaction lines read. Reply lines are read with their conversations.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsReadRequest")))
@interface KsaypipCoreNotificationsReadRequest : KsaypipBase

/**
 * Mark the reaction lines read. Reply lines are read with their conversations.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Mark the reaction lines read. Reply lines are read with their conversations.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * Conversations rooted at a post, readable by third parties.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsConversationsRequest")))
@interface KsaypipCorePostsConversationsRequest : KsaypipBase

/**
 * Conversations rooted at a post, readable by third parties.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Conversations rooted at a post, readable by third parties.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * A conversation under a post, read by anybody who can read the post.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationList")))
@interface KsaypipCoreConversationList : KsaypipBase

/**
 * A conversation under a post, read by anybody who can read the post.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A conversation under a post, read by anybody who can read the post.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreConversationListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreConversationDigest *> *items __attribute__((swift_name("items")));
@end


/**
 * Create a post.
 *
 * [replyToPostId] names one of the caller's own posts and makes this a self-reply; combining it
 * with [wantsTalk] is a validation error. [idempotencyKey] is the client-supplied key that makes
 * a retried write a repeat rather than a second write.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsCreateRequest")))
@interface KsaypipCorePostsCreateRequest : KsaypipBase

/**
 * Create a post.
 *
 * [replyToPostId] names one of the caller's own posts and makes this a self-reply; combining it
 * with [wantsTalk] is a validation error. [idempotencyKey] is the client-supplied key that makes
 * a retried write a repeat rather than a second write.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Create a post.
 *
 * [replyToPostId] names one of the caller's own posts and makes this a self-reply; combining it
 * with [wantsTalk] is a validation error. [idempotencyKey] is the client-supplied key that makes
 * a retried write a repeat rather than a second write.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property KsaypipKotlinArray<NSString *> * _Nullable mediaIds __attribute__((swift_name("mediaIds")));
@property NSString * _Nullable replyToPostId __attribute__((swift_name("replyToPostId")));
@property KsaypipBoolean * _Nullable wantsTalk __attribute__((swift_name("wantsTalk")));
@end


/**
 * A post, as this viewer sees it.
 *
 * `author` is the author this viewer would recognise — one they have written a name for, chosen
 * a mark for, or a friend who has disclosed a face — and null for a stranger on a list row.
 * `authorColor` is what to draw for an author the row does not name; it is null wherever
 * `author` is present or the row is the viewer's own.
 *
 * `readableUntil` is when **this viewer** stops being able to read the post, and null means they
 * do not stop. It is not a property of the post.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePost")))
@interface KsaypipCorePost : KsaypipBase

/**
 * A post, as this viewer sees it.
 *
 * `author` is the author this viewer would recognise — one they have written a name for, chosen
 * a mark for, or a friend who has disclosed a face — and null for a stranger on a list row.
 * `authorColor` is what to draw for an author the row does not name; it is null wherever
 * `author` is present or the row is the viewer's own.
 *
 * `readableUntil` is when **this viewer** stops being able to read the post, and null means they
 * do not stop. It is not a property of the post.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A post, as this viewer sees it.
 *
 * `author` is the author this viewer would recognise — one they have written a name for, chosen
 * a mark for, or a friend who has disclosed a face — and null for a stranger on a list row.
 * `authorColor` is what to draw for an author the row does not name; it is null wherever
 * `author` is present or the row is the viewer's own.
 *
 * `readableUntil` is when **this viewer** stops being able to read the post, and null means they
 * do not stop. It is not a property of the post.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePostCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipCorePerson * _Nullable author __attribute__((swift_name("author")));
@property NSString * _Nullable authorColor __attribute__((swift_name("authorColor")));
@property NSString *body __attribute__((swift_name("body")));
@property KsaypipCorePostConversations *conversations __attribute__((swift_name("conversations")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isMine __attribute__((swift_name("isMine")));
@property KsaypipKotlinArray<KsaypipCoreMedia *> *media __attribute__((swift_name("media")));

/** Oldest picture first. Empty on a post nobody has reacted to. */
@property KsaypipKotlinArray<KsaypipCorePostReaction *> *reactions __attribute__((swift_name("reactions")));
@property NSString * _Nullable readableUntil __attribute__((swift_name("readableUntil")));

/** The post this one quotes, when it is a self-reply. Null on most posts. */
@property KsaypipCoreQuotedPost * _Nullable replyTo __attribute__((swift_name("replyTo")));

/** Whether the author is asking to be talked to. */
@property BOOL wantsTalk __attribute__((swift_name("wantsTalk")));
@end


/**
 * Delete one's own post, softly. There is no editing.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsDeleteRequest")))
@interface KsaypipCorePostsDeleteRequest : KsaypipBase

/**
 * Delete one's own post, softly. There is no editing.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Delete one's own post, softly. There is no editing.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * A single post, under the same visibility rules as the feed.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsPostRequest")))
@interface KsaypipCorePostsPostRequest : KsaypipBase

/**
 * A single post, under the same visibility rules as the feed.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A single post, under the same visibility rules as the feed.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * Put one picture on a post. Idempotent: the same URL twice is one reaction.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsReactRequest")))
@interface KsaypipCorePostsReactRequest : KsaypipBase

/**
 * Put one picture on a post. Idempotent: the same URL twice is one reaction.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Put one picture on a post. Idempotent: the same URL twice is one reaction.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * The whole bar under one post: what the two reaction writes answer with.
 *
 * Counted, like every other path that carries a bar.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostReactions")))
@interface KsaypipCorePostReactions : KsaypipBase

/**
 * The whole bar under one post: what the two reaction writes answer with.
 *
 * Counted, like every other path that carries a bar.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The whole bar under one post: what the two reaction writes answer with.
 *
 * Counted, like every other path that carries a bar.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePostReactionsCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCorePostReaction *> *reactions __attribute__((swift_name("reactions")));
@end


/**
 * Who put each picture on a post, as this viewer sees them. Needs a session.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsReactionsRequest")))
@interface KsaypipCorePostsReactionsRequest : KsaypipBase

/**
 * Who put each picture on a post, as this viewer sees them. Needs a session.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Who put each picture on a post, as this viewer sees them. Needs a session.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * Who is on each picture of one post: the answer to the one question a reader has to ask for.
 *
 * The same bar as [PostReactions] and in the same order, with the people on it.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostReactors")))
@interface KsaypipCorePostReactors : KsaypipBase

/**
 * Who is on each picture of one post: the answer to the one question a reader has to ask for.
 *
 * The same bar as [PostReactions] and in the same order, with the people on it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Who is on each picture of one post: the answer to the one question a reader has to ask for.
 *
 * The same bar as [PostReactions] and in the same order, with the people on it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePostReactorsCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreReactionWithPeople *> *reactions __attribute__((swift_name("reactions")));
@end


/**
 * Take back the ask on one's own post. Idempotent; nothing raises it again.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsRemoveWantsTalkRequest")))
@interface KsaypipCorePostsRemoveWantsTalkRequest : KsaypipBase

/**
 * Take back the ask on one's own post. Idempotent; nothing raises it again.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Take back the ask on one's own post. Idempotent; nothing raises it again.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * Start a 1:1 conversation on a post. [idempotencyKey] makes a retried request a repeat.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsStartConversationRequest")))
@interface KsaypipCorePostsStartConversationRequest : KsaypipBase

/**
 * Start a 1:1 conversation on a post. [idempotencyKey] makes a retried request a repeat.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Start a 1:1 conversation on a post. [idempotencyKey] makes a retried request a repeat.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * Take your own picture back off a post. Idempotent.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostsUnreactRequest")))
@interface KsaypipCorePostsUnreactRequest : KsaypipBase

/**
 * Take your own picture back off a post. Idempotent.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Take your own picture back off a post. Idempotent.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * The viewer's own relationships, paged; most recently active first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipsListRequest")))
@interface KsaypipCoreRelationshipsListRequest : KsaypipBase

/**
 * The viewer's own relationships, paged; most recently active first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The viewer's own relationships, paged; most recently active first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * A page of the viewer's own relationships, most recently active first.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipList")))
@interface KsaypipCoreRelationshipList : KsaypipBase

/**
 * A page of the viewer's own relationships, most recently active first.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A page of the viewer's own relationships, most recently active first.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreRelationshipListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreRelationshipSummary *> *items __attribute__((swift_name("items")));
@property NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@end


/**
 * A relationship page: label, note, mark, history and conversations.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipsRelationshipRequest")))
@interface KsaypipCoreRelationshipsRelationshipRequest : KsaypipBase

/**
 * A relationship page: label, note, mark, history and conversations.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A relationship page: label, note, mark, history and conversations.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable relationshipId __attribute__((swift_name("relationshipId")));
@end


/**
 * A mutable relationship between the viewer and one counterpart, with its label, note and mark.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationship")))
@interface KsaypipCoreRelationship : KsaypipBase

/**
 * A mutable relationship between the viewer and one counterpart, with its label, note and mark.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A mutable relationship between the viewer and one counterpart, with its label, note and mark.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreRelationshipCompanion *companion __attribute__((swift_name("companion")));

/** Whether `POST /friend-requests` would be accepted for this counterpart right now. */
@property BOOL canSendFriendRequest __attribute__((swift_name("canSendFriendRequest")));
@property KsaypipKotlinArray<KsaypipCoreConversationDigest *> *conversations __attribute__((swift_name("conversations")));
@property KsaypipCorePerson *counterpart __attribute__((swift_name("counterpart")));
@property NSString *firstInteractionAt __attribute__((swift_name("firstInteractionAt")));
@property KsaypipCoreFriendRequestState * _Nullable friendRequest __attribute__((swift_name("friendRequest")));
@property NSString * _Nullable friendSince __attribute__((swift_name("friendSince")));
@property NSString *id __attribute__((swift_name("id")));

/** The viewer's private memo about the counterpart. Returned only on the relationship page. */
@property NSString * _Nullable note __attribute__((swift_name("note")));
@end


/**
 * Replace the viewer's local label, note and mark for one counterpart.
 *
 * It is a replacement and not a patch: [label] as null clears the name, and note and mark are
 * written as they are sent.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipsSetLabelRequest")))
@interface KsaypipCoreRelationshipsSetLabelRequest : KsaypipBase

/**
 * Replace the viewer's local label, note and mark for one counterpart.
 *
 * It is a replacement and not a patch: [label] as null clears the name, and note and mark are
 * written as they are sent.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Replace the viewer's local label, note and mark for one counterpart.
 *
 * It is a replacement and not a patch: [label] as null clears the name, and note and mark are
 * written as they are sent.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property NSString * _Nullable markColor __attribute__((swift_name("markColor")));
@property NSString * _Nullable markEmoji __attribute__((swift_name("markEmoji")));
@property NSString * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable relationshipId __attribute__((swift_name("relationshipId")));
@end


/**
 * The whole of a replacement for the viewer's local label, note and mark. An omitted field is a
 * field the caller is saying is no longer there.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabel")))
@interface KsaypipCoreLabel : KsaypipBase

/**
 * The whole of a replacement for the viewer's local label, note and mark. An omitted field is a
 * field the caller is saying is no longer there.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The whole of a replacement for the viewer's local label, note and mark. An omitted field is a
 * field the caller is saying is no longer there.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreLabelCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property KsaypipCoreMark *mark __attribute__((swift_name("mark")));
@property NSString * _Nullable note __attribute__((swift_name("note")));
@end


/**
 * Relationship termination: the counterpart's label, conversations, replies and visibility are
 * revoked synchronously, before the response.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipsTerminateRequest")))
@interface KsaypipCoreRelationshipsTerminateRequest : KsaypipBase

/**
 * Relationship termination: the counterpart's label, conversations, replies and visibility are
 * revoked synchronously, before the response.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Relationship termination: the counterpart's label, conversations, replies and visibility are
 * revoked synchronously, before the response.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable relationshipId __attribute__((swift_name("relationshipId")));
@end


/**
 * A report, optionally with evidence.
 *
 * [targetId] is a post or reply ID, or — for `account` — the identity token the caller holds.
 * The server resolves the subject from the evidence, so no account is ever named by the request
 * or the answer.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReportsReportRequest")))
@interface KsaypipCoreReportsReportRequest : KsaypipBase

/**
 * A report, optionally with evidence.
 *
 * [targetId] is a post or reply ID, or — for `account` — the identity token the caller holds.
 * The server resolves the subject from the evidence, so no account is ever named by the request
 * or the answer.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A report, optionally with evidence.
 *
 * [targetId] is a post or reply ID, or — for `account` — the identity token the caller holds.
 * The server resolves the subject from the evidence, so no account is ever named by the request
 * or the answer.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KsaypipBoolean * _Nullable alsoBlock __attribute__((swift_name("alsoBlock")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable reason __attribute__((swift_name("reason")));
@property NSString * _Nullable targetId __attribute__((swift_name("targetId")));
@property NSString * _Nullable targetType __attribute__((swift_name("targetType")));
@end


/**
 * What `POST /api/reports` answers with. The server resolves the subject from the evidence, so
 * the report's own ID is the only handle a moderator action takes.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreatedReport")))
@interface KsaypipCoreCreatedReport : KsaypipBase

/**
 * What `POST /api/reports` answers with. The server resolves the subject from the evidence, so
 * the report's own ID is the only handle a moderator action takes.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What `POST /api/reports` answers with. The server resolves the subject from the evidence, so
 * the report's own ID is the only handle a moderator action takes.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreCreatedReportCompanion *companion __attribute__((swift_name("companion")));
@property NSString *id __attribute__((swift_name("id")));
@end


/**
 * A user page as seen by this viewer, and a page of their posts.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersUserRequest")))
@interface KsaypipCoreUsersUserRequest : KsaypipBase

/**
 * A user page as seen by this viewer, and a page of their posts.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A user page as seen by this viewer, and a page of their posts.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * One person's page, as this viewer sees it: the person, a page of their posts, and the
 * relationship the viewer holds with them where there is one.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserPage")))
@interface KsaypipCoreUserPage : KsaypipBase

/**
 * One person's page, as this viewer sees it: the person, a page of their posts, and the
 * relationship the viewer holds with them where there is one.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One person's page, as this viewer sees it: the person, a page of their posts, and the
 * relationship the viewer holds with them where there is one.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreUserPageCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipCorePerson *person __attribute__((swift_name("person")));
@property KsaypipKotlinArray<KsaypipCorePost *> *posts __attribute__((swift_name("posts")));
@property NSString * _Nullable postsNextCursor __attribute__((swift_name("postsNextCursor")));
@property KsaypipCoreRelationship * _Nullable relationship __attribute__((swift_name("relationship")));
@end


/**
 * Forget one word mute. A real delete, idempotent.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMutesForgetRequest")))
@interface KsaypipCoreWordMutesForgetRequest : KsaypipBase

/**
 * Forget one word mute. A real delete, idempotent.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Forget one word mute. A real delete, idempotent.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable wordMuteId __attribute__((swift_name("wordMuteId")));
@end


/**
 * The words this reader is hiding, spent ones included.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMutesListRequest")))
@interface KsaypipCoreWordMutesListRequest : KsaypipBase

/**
 * The words this reader is hiding, spent ones included.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The words this reader is hiding, spent ones included.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KsaypipInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * The words this reader is hiding, spent ones included.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMuteList")))
@interface KsaypipCoreWordMuteList : KsaypipBase

/**
 * The words this reader is hiding, spent ones included.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The words this reader is hiding, spent ones included.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreWordMuteListCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipKotlinArray<KsaypipCoreWordMute *> *items __attribute__((swift_name("items")));
@property NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@end


/**
 * Hide the writing that says one word, for a window.
 *
 * The match is a plain substring of the post's body, case-folded; [duration] is one of the keys
 * from `MuteDuration`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMutesMuteRequest")))
@interface KsaypipCoreWordMutesMuteRequest : KsaypipBase

/**
 * Hide the writing that says one word, for a window.
 *
 * The match is a plain substring of the post's body, case-folded; [duration] is one of the keys
 * from `MuteDuration`.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Hide the writing that says one word, for a window.
 *
 * The match is a plain substring of the post's body, case-folded; [duration] is one of the keys
 * from `MuteDuration`.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable duration __attribute__((swift_name("duration")));
@property NSString * _Nullable idempotencyKey __attribute__((swift_name("idempotencyKey")));
@property NSString * _Nullable word __attribute__((swift_name("word")));
@end


/**
 * Replace the window of an existing word mute, waking a spent one, which is the point.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMutesWindowRequest")))
@interface KsaypipCoreWordMutesWindowRequest : KsaypipBase

/**
 * Replace the window of an existing word mute, waking a spent one, which is the point.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Replace the window of an existing word mute, waking a spent one, which is the point.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable duration __attribute__((swift_name("duration")));
@property NSString * _Nullable wordMuteId __attribute__((swift_name("wordMuteId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KsaypipKotlinArray<T> : KsaypipBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KsaypipInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KsaypipKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * The applications this reader has authorized, oldest first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthorizedAppList.Companion")))
@interface KsaypipCoreAuthorizedAppListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The applications this reader has authorized, oldest first.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreAuthorizedAppListCompanion *shared __attribute__((swift_name("shared")));

/**
 * The applications this reader has authorized, oldest first.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One application a reader has authorized, as the settings list draws it.
 *
 * The handle is the consent's own ID and not the client ID: ending an authorization is a
 * statement about this reader's grant, so the row they hold is the row they act on.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthorizedApp")))
@interface KsaypipCoreAuthorizedApp : KsaypipBase

/**
 * One application a reader has authorized, as the settings list draws it.
 *
 * The handle is the consent's own ID and not the client ID: ending an authorization is a
 * statement about this reader's grant, so the row they hold is the row they act on.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One application a reader has authorized, as the settings list draws it.
 *
 * The handle is the consent's own ID and not the client ID: ending an authorization is a
 * statement about this reader's grant, so the row they hold is the row they act on.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreAuthorizedAppCompanion *companion __attribute__((swift_name("companion")));
@property NSString *clientId __attribute__((swift_name("clientId")));
@property NSString *grantedAt __attribute__((swift_name("grantedAt")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KsaypipKotlinArray<NSString *> *scopes __attribute__((swift_name("scopes")));
@property NSString *updatedAt __attribute__((swift_name("updatedAt")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * A conversation and a page of what was said in it, oldest of the page first.
 *
 * The one paged list in this API whose cursor goes backwards in time: a conversation is read
 * oldest-first, so the first page is the newest lines and `olderRepliesCursor` asks for what was
 * said before them.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation.Companion")))
@interface KsaypipCoreConversationCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A conversation and a page of what was said in it, oldest of the page first.
 *
 * The one paged list in this API whose cursor goes backwards in time: a conversation is read
 * oldest-first, so the first page is the newest lines and `olderRepliesCursor` asks for what was
 * said before them.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreConversationCompanion *shared __attribute__((swift_name("shared")));

/**
 * A conversation and a page of what was said in it, oldest of the page first.
 *
 * The one paged list in this API whose cursor goes backwards in time: a conversation is read
 * oldest-first, so the first page is the newest lines and `olderRepliesCursor` asks for what was
 * said before them.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One seat in a conversation.
 *
 * `side` is the conversation-local marker (`a` is the post's author, `b` started the
 * conversation), [person] is null where the viewer may not be shown who it is, and [isMe] says
 * whether this is the viewer's own seat.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreParticipant")))
@interface KsaypipCoreParticipant : KsaypipBase

/**
 * One seat in a conversation.
 *
 * `side` is the conversation-local marker (`a` is the post's author, `b` started the
 * conversation), [person] is null where the viewer may not be shown who it is, and [isMe] says
 * whether this is the viewer's own seat.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One seat in a conversation.
 *
 * `side` is the conversation-local marker (`a` is the post's author, `b` started the
 * conversation), [person] is null where the viewer may not be shown who it is, and [isMe] says
 * whether this is the viewer's own seat.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreParticipantCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isMe __attribute__((swift_name("isMe")));
@property KsaypipCorePerson * _Nullable person __attribute__((swift_name("person")));
@property NSString *side __attribute__((swift_name("side")));
@end


/**
 * A page of the viewer's own conversations, newest word first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationDigestList.Companion")))
@interface KsaypipCoreConversationDigestListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A page of the viewer's own conversations, newest word first.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreConversationDigestListCompanion *shared __attribute__((swift_name("shared")));

/**
 * A page of the viewer's own conversations, newest word first.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A conversation as it appears in a list — all three lists return this shape.
 *
 * The post the conversation hangs off is referenced by ID only and never quoted: its body is
 * under the 7-day window for a non-friend, and a permanent list of excerpts would be that window
 * undone.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationDigest")))
@interface KsaypipCoreConversationDigest : KsaypipBase

/**
 * A conversation as it appears in a list — all three lists return this shape.
 *
 * The post the conversation hangs off is referenced by ID only and never quoted: its body is
 * under the 7-day window for a non-friend, and a permanent list of excerpts would be that window
 * undone.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A conversation as it appears in a list — all three lists return this shape.
 *
 * The post the conversation hangs off is referenced by ID only and never quoted: its body is
 * under the 7-day window for a non-friend, and a permanent list of excerpts would be that window
 * undone.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreConversationDigestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isMine __attribute__((swift_name("isMine")));
@property KsaypipCorePostLastReply * _Nullable lastReply __attribute__((swift_name("lastReply")));
@property NSString *lastReplyAt __attribute__((swift_name("lastReplyAt")));
@property KsaypipKotlinArray<KsaypipCoreParticipant *> *participants __attribute__((swift_name("participants")));
@property NSString *postId __attribute__((swift_name("postId")));

/** Whether something was said here that you have not read. */
@property BOOL unread __attribute__((swift_name("unread")));
@end


/**
 * One thing said in a conversation.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReply.Companion")))
@interface KsaypipCoreReplyCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One thing said in a conversation.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreReplyCompanion *shared __attribute__((swift_name("shared")));

/**
 * One thing said in a conversation.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A page of posts. Every list here is newest-first, and `nextCursor` asks for older rows further
 * down; null means there is no next page.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeed.Companion")))
@interface KsaypipCoreFeedCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A page of posts. Every list here is newest-first, and `nextCursor` asks for older rows further
 * down; null means there is no next page.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreFeedCompanion *shared __attribute__((swift_name("shared")));

/**
 * A page of posts. Every list here is newest-first, and `nextCursor` asks for older rows further
 * down; null means there is no next page.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The trend measurement. Not paged: it is a handful of rows by construction.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrendList.Companion")))
@interface KsaypipCoreTrendListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The trend measurement. Not paged: it is a handful of rows by construction.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreTrendListCompanion *shared __attribute__((swift_name("shared")));

/**
 * The trend measurement. Not paged: it is a handful of rows by construction.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * What many people are writing about: the one answer in this API that is the same for every
 * reader.
 *
 * `writers` is a cardinality, never attributable — the accounts are counted and discarded
 * inside one statement.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend")))
@interface KsaypipCoreTrend : KsaypipBase

/**
 * What many people are writing about: the one answer in this API that is the same for every
 * reader.
 *
 * `writers` is a cardinality, never attributable — the accounts are counted and discarded
 * inside one statement.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What many people are writing about: the one answer in this API that is the same for every
 * reader.
 *
 * `writers` is a cardinality, never attributable — the accounts are counted and discarded
 * inside one statement.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreTrendCompanion *companion __attribute__((swift_name("companion")));

/** Normalized, without the `#`. */
@property NSString *tag __attribute__((swift_name("tag")));
@property int32_t writers __attribute__((swift_name("writers")));
@end


/**
 * What accepting a friend request answers with.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAcceptedFriendship.Companion")))
@interface KsaypipCoreAcceptedFriendshipCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * What accepting a friend request answers with.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreAcceptedFriendshipCompanion *shared __attribute__((swift_name("shared")));

/**
 * What accepting a friend request answers with.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Incoming and outgoing pending friend requests.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestList.Companion")))
@interface KsaypipCoreFriendRequestListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Incoming and outgoing pending friend requests.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreFriendRequestListCompanion *shared __attribute__((swift_name("shared")));

/**
 * Incoming and outgoing pending friend requests.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A pending request in the viewer's own queue, which is where most of them are answered.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequest.Companion")))
@interface KsaypipCoreFriendRequestCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A pending request in the viewer's own queue, which is where most of them are answered.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreFriendRequestCompanion *shared __attribute__((swift_name("shared")));

/**
 * A pending request in the viewer's own queue, which is where most of them are answered.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A person, as one viewer sees them.
 *
 * There is no user object with a stable public ID in this API. [identity] is valid only for the
 * requesting viewer; two viewers get different tokens for the same person, and the token dies
 * with the relationship. [profile] is non-null only while a friendship is active.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePerson")))
@interface KsaypipCorePerson : KsaypipBase

/**
 * A person, as one viewer sees them.
 *
 * There is no user object with a stable public ID in this API. [identity] is valid only for the
 * requesting viewer; two viewers get different tokens for the same person, and the token dies
 * with the relationship. [profile] is non-null only while a friendship is active.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A person, as one viewer sees them.
 *
 * There is no user object with a stable public ID in this API. [identity] is valid only for the
 * requesting viewer; two viewers get different tokens for the same person, and the token dies
 * with the relationship. [profile] is non-null only while a friendship is active.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePersonCompanion *companion __attribute__((swift_name("companion")));
@property NSString *identity __attribute__((swift_name("identity")));

/** The viewer's own label. Never server-assigned. */
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property KsaypipCoreMark *mark __attribute__((swift_name("mark")));

/** Non-null only while a friendship is active. */
@property KsaypipCoreProfile * _Nullable profile __attribute__((swift_name("profile")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KsaypipKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KsaypipKotlinByteIterator : KsaypipBase <KsaypipKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KsaypipByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * What is at the other end of a link in a post, so a card can be drawn for it.
 *
 * Every field but the address may be null, and all-null is an ordinary answer rather than a
 * failure: a page can be gone, private, or simply silent about itself.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLinkPreview.Companion")))
@interface KsaypipCoreLinkPreviewCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * What is at the other end of a link in a post, so a card can be drawn for it.
 *
 * Every field but the address may be null, and all-null is an ordinary answer rather than a
 * failure: a page can be gone, private, or simply silent about itself.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreLinkPreviewCompanion *shared __attribute__((swift_name("shared")));

/**
 * What is at the other end of a link in a post, so a card can be drawn for it.
 *
 * Every field but the address may be null, and all-null is an ordinary answer rather than a
 * failure: a page can be gone, private, or simply silent about itself.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One widget in the right-hand column, and whether the column draws it.
 *
 * A hidden widget is still in the arrangement, at its position, so that showing it again puts it
 * back where the reader had it.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAsideWidgetItem")))
@interface KsaypipCoreAsideWidgetItem : KsaypipBase

/**
 * One widget in the right-hand column, and whether the column draws it.
 *
 * A hidden widget is still in the arrangement, at its position, so that showing it again puts it
 * back where the reader had it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One widget in the right-hand column, and whether the column draws it.
 *
 * A hidden widget is still in the arrangement, at its position, so that showing it again puts it
 * back where the reader had it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreAsideWidgetItemCompanion *companion __attribute__((swift_name("companion")));
@property BOOL visible __attribute__((swift_name("visible")));
@property NSString *widget __attribute__((swift_name("widget")));
@end


/**
 * The right-hand column as arranged: every widget the product has, in the reader's order.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAsideWidgets.Companion")))
@interface KsaypipCoreAsideWidgetsCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The right-hand column as arranged: every widget the product has, in the reader's order.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreAsideWidgetsCompanion *shared __attribute__((swift_name("shared")));

/**
 * The right-hand column as arranged: every widget the product has, in the reader's order.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The viewer's own account state, which most screens already ask for.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMe.Companion")))
@interface KsaypipCoreMeCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The viewer's own account state, which most screens already ask for.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreMeCompanion *shared __attribute__((swift_name("shared")));

/**
 * The viewer's own account state, which most screens already ask for.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The row of kept subjects, normalized and without the `#`, in the reader's own order.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinnedSubjects.Companion")))
@interface KsaypipCorePinnedSubjectsCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The row of kept subjects, normalized and without the `#`, in the reader's own order.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePinnedSubjectsCompanion *shared __attribute__((swift_name("shared")));

/**
 * The row of kept subjects, normalized and without the `#`, in the reader's own order.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A profile, which arrives only where it has been disclosed.
 *
 * The two pictures are URLs rather than media IDs: an avatar takes the thumbnail, a banner the
 * full-size variant, and both are checked for visibility on every fetch.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfile.Companion")))
@interface KsaypipCoreProfileCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A profile, which arrives only where it has been disclosed.
 *
 * The two pictures are URLs rather than media IDs: an avatar takes the thumbnail, a banner the
 * full-size variant, and both are checked for visibility on every fetch.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreProfileCompanion *shared __attribute__((swift_name("shared")));

/**
 * A profile, which arrives only where it has been disclosed.
 *
 * The two pictures are URLs rather than media IDs: an avatar takes the thumbnail, a banner the
 * full-size variant, and both are checked for visibility on every fetch.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * What `PUT /api/media/{mediaId}/alt` answers with. Null, or a string that trims to nothing,
 * both mean "nobody has described this picture".
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaAlt.Companion")))
@interface KsaypipCoreMediaAltCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * What `PUT /api/media/{mediaId}/alt` answers with. Null, or a string that trims to nothing,
 * both mean "nobody has described this picture".
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreMediaAltCompanion *shared __attribute__((swift_name("shared")));

/**
 * What `PUT /api/media/{mediaId}/alt` answers with. Null, or a string that trims to nothing,
 * both mean "nobody has described this picture".
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One picture, at the two sizes it is stored in. Both URLs are subject to the same visibility
 * check, so a client may use either freely: the thumbnail for a list, the full size for the post
 * itself.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMedia.Companion")))
@interface KsaypipCoreMediaCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One picture, at the two sizes it is stored in. Both URLs are subject to the same visibility
 * check, so a client may use either freely: the thumbnail for a list, the full size for the post
 * itself.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreMediaCompanion *shared __attribute__((swift_name("shared")));

/**
 * One picture, at the two sizes it is stored in. Both URLs are subject to the same visibility
 * check, so a client may use either freely: the thumbnail for a list, the full size for the post
 * itself.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The people this reader is hiding, newest mute first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMuteList.Companion")))
@interface KsaypipCoreMuteListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The people this reader is hiding, newest mute first.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreMuteListCompanion *shared __attribute__((swift_name("shared")));

/**
 * The people this reader is hiding, newest mute first.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One person a reader is hiding, and until when. `endsAt` null is forever.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMute")))
@interface KsaypipCoreMute : KsaypipBase

/**
 * One person a reader is hiding, and until when. `endsAt` null is forever.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One person a reader is hiding, and until when. `endsAt` null is forever.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreMuteCompanion *companion __attribute__((swift_name("companion")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));

/** Null means until taken back. */
@property NSString * _Nullable endsAt __attribute__((swift_name("endsAt")));
@property KsaypipCorePerson *person __attribute__((swift_name("person")));
@end


/**
 * What happened to you, newest arrival first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationList.Companion")))
@interface KsaypipCoreNotificationListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * What happened to you, newest arrival first.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreNotificationListCompanion *shared __attribute__((swift_name("shared")));

/**
 * What happened to you, newest arrival first.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One line in the notification list, either kind. Branch on [kind]:
 *
 * - `post.reaction` — somebody reacted to a post of yours. Fields: [postId], [postBody],
 *   [postImage], [reactions], [person], [peopleCount].
 * - `conversation.reply` — somebody replied in a conversation you are part of. Fields:
 *   [conversationId], [body], [person].
 *
 * `arrivedAt` and [readAt] are common to both.
 *
 * The two halves model different shapes, and this class carries both rather than a sealed union
 * because a discriminated union cannot be exported to JavaScript. Unknown fields are ignored on
 * decode; fields not belonging to the line's kind are null.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotification")))
@interface KsaypipCoreNotification : KsaypipBase

/**
 * One line in the notification list, either kind. Branch on [kind]:
 *
 * - `post.reaction` — somebody reacted to a post of yours. Fields: [postId], [postBody],
 *   [postImage], [reactions], [person], [peopleCount].
 * - `conversation.reply` — somebody replied in a conversation you are part of. Fields:
 *   [conversationId], [body], [person].
 *
 * `arrivedAt` and [readAt] are common to both.
 *
 * The two halves model different shapes, and this class carries both rather than a sealed union
 * because a discriminated union cannot be exported to JavaScript. Unknown fields are ignored on
 * decode; fields not belonging to the line's kind are null.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One line in the notification list, either kind. Branch on [kind]:
 *
 * - `post.reaction` — somebody reacted to a post of yours. Fields: [postId], [postBody],
 *   [postImage], [reactions], [person], [peopleCount].
 * - `conversation.reply` — somebody replied in a conversation you are part of. Fields:
 *   [conversationId], [body], [person].
 *
 * `arrivedAt` and [readAt] are common to both.
 *
 * The two halves model different shapes, and this class carries both rather than a sealed union
 * because a discriminated union cannot be exported to JavaScript. Unknown fields are ignored on
 * decode; fields not belonging to the line's kind are null.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreNotificationCompanion *companion __attribute__((swift_name("companion")));

/** When the most recent arrival arrived. */
@property NSString *arrivedAt __attribute__((swift_name("arrivedAt")));

/** The newest surviving reply's body, written by the other seat. */
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable conversationId __attribute__((swift_name("conversationId")));

/** `post.reaction` or `conversation.reply`. */
@property NSString *kind __attribute__((swift_name("kind")));

/** How many people are behind this line, [person] included. */
@property KsaypipInt * _Nullable peopleCount __attribute__((swift_name("peopleCount")));

/** The other seat, where you have a name for them — otherwise null. */
@property KsaypipCorePerson * _Nullable person __attribute__((swift_name("person")));
@property NSString * _Nullable postBody __attribute__((swift_name("postBody")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@property KsaypipCoreMedia * _Nullable postImage __attribute__((swift_name("postImage")));

/** Newest kind first. */
@property KsaypipKotlinArray<KsaypipCoreNotificationReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));

/** Null while still news. Otherwise when the reader last said they had seen it. */
@property NSString * _Nullable readAt __attribute__((swift_name("readAt")));
@end


/**
 * A conversation under a post, read by anybody who can read the post.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationList.Companion")))
@interface KsaypipCoreConversationListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A conversation under a post, read by anybody who can read the post.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreConversationListCompanion *shared __attribute__((swift_name("shared")));

/**
 * A conversation under a post, read by anybody who can read the post.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A post, as this viewer sees it.
 *
 * `author` is the author this viewer would recognise — one they have written a name for, chosen
 * a mark for, or a friend who has disclosed a face — and null for a stranger on a list row.
 * `authorColor` is what to draw for an author the row does not name; it is null wherever
 * `author` is present or the row is the viewer's own.
 *
 * `readableUntil` is when **this viewer** stops being able to read the post, and null means they
 * do not stop. It is not a property of the post.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePost.Companion")))
@interface KsaypipCorePostCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A post, as this viewer sees it.
 *
 * `author` is the author this viewer would recognise — one they have written a name for, chosen
 * a mark for, or a friend who has disclosed a face — and null for a stranger on a list row.
 * `authorColor` is what to draw for an author the row does not name; it is null wherever
 * `author` is present or the row is the viewer's own.
 *
 * `readableUntil` is when **this viewer** stops being able to read the post, and null means they
 * do not stop. It is not a property of the post.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePostCompanion *shared __attribute__((swift_name("shared")));

/**
 * A post, as this viewer sees it.
 *
 * `author` is the author this viewer would recognise — one they have written a name for, chosen
 * a mark for, or a friend who has disclosed a face — and null for a stranger on a list row.
 * `authorColor` is what to draw for an author the row does not name; it is null wherever
 * `author` is present or the row is the viewer's own.
 *
 * `readableUntil` is when **this viewer** stops being able to read the post, and null means they
 * do not stop. It is not a property of the post.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * What is being said under a post: how much of it there is, and the last thing said.
 *
 * `mine` is the conversation this reader started, and only that: the author of a post is a
 * participant in every conversation on it, so the flag would say nothing on their own post.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostConversations")))
@interface KsaypipCorePostConversations : KsaypipBase

/**
 * What is being said under a post: how much of it there is, and the last thing said.
 *
 * `mine` is the conversation this reader started, and only that: the author of a post is a
 * participant in every conversation on it, so the flag would say nothing on their own post.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * What is being said under a post: how much of it there is, and the last thing said.
 *
 * `mine` is the conversation this reader started, and only that: the author of a post is a
 * participant in every conversation on it, so the flag would say nothing on their own post.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePostConversationsCompanion *companion __attribute__((swift_name("companion")));
@property int32_t count __attribute__((swift_name("count")));

/** The newest surviving reply across the live conversations, or null where there are none. */
@property KsaypipCorePostLastReply * _Nullable lastReply __attribute__((swift_name("lastReply")));
@property BOOL mine __attribute__((swift_name("mine")));
@end


/**
 * One picture on a post, how many people put it there, and whether the viewer is one of them.
 *
 * A count, everywhere a post is carried. Who the people are is a second address,
 * `GET /api/posts/{postId}/reactions`.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostReaction")))
@interface KsaypipCorePostReaction : KsaypipBase

/**
 * One picture on a post, how many people put it there, and whether the viewer is one of them.
 *
 * A count, everywhere a post is carried. Who the people are is a second address,
 * `GET /api/posts/{postId}/reactions`.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One picture on a post, how many people put it there, and whether the viewer is one of them.
 *
 * A count, everywhere a post is carried. Who the people are is a second address,
 * `GET /api/posts/{postId}/reactions`.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePostReactionCompanion *companion __attribute__((swift_name("companion")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString *emoji __attribute__((swift_name("emoji")));

/** Whether the viewer's own reaction is among the count. */
@property BOOL mine __attribute__((swift_name("mine")));
@end


/**
 * The post a self-reply quotes, and the whole of what a quotation may carry.
 *
 * A bounded excerpt and no more: a post may quote one of its writer's own earlier posts, and the
 * quotation outlives the seven days the quoted post itself is readable. The excerpt is cut on
 * the server before serialization, and [media] holds at most the first picture.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreQuotedPost")))
@interface KsaypipCoreQuotedPost : KsaypipBase

/**
 * The post a self-reply quotes, and the whole of what a quotation may carry.
 *
 * A bounded excerpt and no more: a post may quote one of its writer's own earlier posts, and the
 * quotation outlives the seven days the quoted post itself is readable. The excerpt is cut on
 * the server before serialization, and [media] holds at most the first picture.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The post a self-reply quotes, and the whole of what a quotation may carry.
 *
 * A bounded excerpt and no more: a post may quote one of its writer's own earlier posts, and the
 * quotation outlives the seven days the quoted post itself is readable. The excerpt is cut on
 * the server before serialization, and [media] holds at most the first picture.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreQuotedPostCompanion *companion __attribute__((swift_name("companion")));

/** At most the excerpt length in code points, with an ellipsis where there was more. */
@property NSString *body __attribute__((swift_name("body")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *id __attribute__((swift_name("id")));

/** At most one picture: the quoted post's first. */
@property KsaypipKotlinArray<KsaypipCoreMedia *> *media __attribute__((swift_name("media")));

/** When this viewer's reading of the quoted post ends, or null when it does not. */
@property NSString * _Nullable readableUntil __attribute__((swift_name("readableUntil")));
@end


/**
 * The whole bar under one post: what the two reaction writes answer with.
 *
 * Counted, like every other path that carries a bar.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostReactions.Companion")))
@interface KsaypipCorePostReactionsCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The whole bar under one post: what the two reaction writes answer with.
 *
 * Counted, like every other path that carries a bar.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePostReactionsCompanion *shared __attribute__((swift_name("shared")));

/**
 * The whole bar under one post: what the two reaction writes answer with.
 *
 * Counted, like every other path that carries a bar.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Who is on each picture of one post: the answer to the one question a reader has to ask for.
 *
 * The same bar as [PostReactions] and in the same order, with the people on it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostReactors.Companion")))
@interface KsaypipCorePostReactorsCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Who is on each picture of one post: the answer to the one question a reader has to ask for.
 *
 * The same bar as [PostReactions] and in the same order, with the people on it.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePostReactorsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Who is on each picture of one post: the answer to the one question a reader has to ask for.
 *
 * The same bar as [PostReactions] and in the same order, with the people on it.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The same picture with the people on it: what `GET /api/posts/{postId}/reactions` answers with,
 * and the only place in this API where a reaction is attributed.
 *
 * Empty `people` is an answer and a common one: everyone unnameable, the viewer themselves (who
 * is `mine`), and anyone either side has blocked are all in `count` and not in the array.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionWithPeople")))
@interface KsaypipCoreReactionWithPeople : KsaypipBase

/**
 * The same picture with the people on it: what `GET /api/posts/{postId}/reactions` answers with,
 * and the only place in this API where a reaction is attributed.
 *
 * Empty `people` is an answer and a common one: everyone unnameable, the viewer themselves (who
 * is `mine`), and anyone either side has blocked are all in `count` and not in the array.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The same picture with the people on it: what `GET /api/posts/{postId}/reactions` answers with,
 * and the only place in this API where a reaction is attributed.
 *
 * Empty `people` is an answer and a common one: everyone unnameable, the viewer themselves (who
 * is `mine`), and anyone either side has blocked are all in `count` and not in the array.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreReactionWithPeopleCompanion *companion __attribute__((swift_name("companion")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString *emoji __attribute__((swift_name("emoji")));
@property BOOL mine __attribute__((swift_name("mine")));
@property KsaypipKotlinArray<KsaypipCorePerson *> *people __attribute__((swift_name("people")));
@end


/**
 * A page of the viewer's own relationships, most recently active first.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipList.Companion")))
@interface KsaypipCoreRelationshipListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A page of the viewer's own relationships, most recently active first.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreRelationshipListCompanion *shared __attribute__((swift_name("shared")));

/**
 * A page of the viewer's own relationships, most recently active first.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One relationship in the viewer's own list.
 *
 * Neither the note nor the conversations are here: both are read on the relationship's own page.
 * `lastActivityAt` is a time and never a count.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipSummary")))
@interface KsaypipCoreRelationshipSummary : KsaypipBase

/**
 * One relationship in the viewer's own list.
 *
 * Neither the note nor the conversations are here: both are read on the relationship's own page.
 * `lastActivityAt` is a time and never a count.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One relationship in the viewer's own list.
 *
 * Neither the note nor the conversations are here: both are read on the relationship's own page.
 * `lastActivityAt` is a time and never a count.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreRelationshipSummaryCompanion *companion __attribute__((swift_name("companion")));
@property KsaypipCorePerson *counterpart __attribute__((swift_name("counterpart")));
@property NSString *firstInteractionAt __attribute__((swift_name("firstInteractionAt")));
@property NSString * _Nullable friendSince __attribute__((swift_name("friendSince")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *lastActivityAt __attribute__((swift_name("lastActivityAt")));
@end


/**
 * A mutable relationship between the viewer and one counterpart, with its label, note and mark.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationship.Companion")))
@interface KsaypipCoreRelationshipCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A mutable relationship between the viewer and one counterpart, with its label, note and mark.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreRelationshipCompanion *shared __attribute__((swift_name("shared")));

/**
 * A mutable relationship between the viewer and one counterpart, with its label, note and mark.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A pending friend request, as the viewer's own queue draws it.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestState")))
@interface KsaypipCoreFriendRequestState : KsaypipBase

/**
 * A pending friend request, as the viewer's own queue draws it.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A pending friend request, as the viewer's own queue draws it.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreFriendRequestStateCompanion *companion __attribute__((swift_name("companion")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *direction __attribute__((swift_name("direction")));
@property NSString *id __attribute__((swift_name("id")));
@end


/**
 * The whole of a replacement for the viewer's local label, note and mark. An omitted field is a
 * field the caller is saying is no longer there.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabel.Companion")))
@interface KsaypipCoreLabelCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The whole of a replacement for the viewer's local label, note and mark. An omitted field is a
 * field the caller is saying is no longer there.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreLabelCompanion *shared __attribute__((swift_name("shared")));

/**
 * The whole of a replacement for the viewer's local label, note and mark. An omitted field is a
 * field the caller is saying is no longer there.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The picture one viewer gave one person, for the screens that have no real one to show.
 *
 * Both halves are the viewer's own choice and both are usually null; `color` is always a key from
 * [MarkColor], never a colour value.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMark")))
@interface KsaypipCoreMark : KsaypipBase

/**
 * The picture one viewer gave one person, for the screens that have no real one to show.
 *
 * Both halves are the viewer's own choice and both are usually null; `color` is always a key from
 * [MarkColor], never a colour value.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The picture one viewer gave one person, for the screens that have no real one to show.
 *
 * Both halves are the viewer's own choice and both are usually null; `color` is always a key from
 * [MarkColor], never a colour value.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreMarkCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable color __attribute__((swift_name("color")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));
@end


/**
 * What `POST /api/reports` answers with. The server resolves the subject from the evidence, so
 * the report's own ID is the only handle a moderator action takes.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreatedReport.Companion")))
@interface KsaypipCoreCreatedReportCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * What `POST /api/reports` answers with. The server resolves the subject from the evidence, so
 * the report's own ID is the only handle a moderator action takes.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreCreatedReportCompanion *shared __attribute__((swift_name("shared")));

/**
 * What `POST /api/reports` answers with. The server resolves the subject from the evidence, so
 * the report's own ID is the only handle a moderator action takes.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One person's page, as this viewer sees it: the person, a page of their posts, and the
 * relationship the viewer holds with them where there is one.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserPage.Companion")))
@interface KsaypipCoreUserPageCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One person's page, as this viewer sees it: the person, a page of their posts, and the
 * relationship the viewer holds with them where there is one.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreUserPageCompanion *shared __attribute__((swift_name("shared")));

/**
 * One person's page, as this viewer sees it: the person, a page of their posts, and the
 * relationship the viewer holds with them where there is one.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The words this reader is hiding, spent ones included.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMuteList.Companion")))
@interface KsaypipCoreWordMuteListCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The words this reader is hiding, spent ones included.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreWordMuteListCompanion *shared __attribute__((swift_name("shared")));

/**
 * The words this reader is hiding, spent ones included.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One word a reader is hiding, and the state of its window.
 *
 * Unlike a person mute, a spent row stays on the list: `endsAt` in the past with [active] false
 * is a word the reader can give a new window without typing it again.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMute")))
@interface KsaypipCoreWordMute : KsaypipBase

/**
 * One word a reader is hiding, and the state of its window.
 *
 * Unlike a person mute, a spent row stays on the list: `endsAt` in the past with [active] false
 * is a word the reader can give a new window without typing it again.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One word a reader is hiding, and the state of its window.
 *
 * Unlike a person mute, a spent row stays on the list: `endsAt` in the past with [active] false
 * is a word the reader can give a new window without typing it again.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreWordMuteCompanion *companion __attribute__((swift_name("companion")));

/** Whether it is hiding anything right now. The server's answer, computed against its clock. */
@property BOOL active __attribute__((swift_name("active")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));

/** Null means until taken back; a past value is a spent word still on the list. */
@property NSString * _Nullable endsAt __attribute__((swift_name("endsAt")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *word __attribute__((swift_name("word")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KsaypipKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KsaypipKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KsaypipKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KsaypipKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KsaypipKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KsaypipKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KsaypipKotlinx_serialization_coreKSerializer <KsaypipKotlinx_serialization_coreSerializationStrategy, KsaypipKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * One application a reader has authorized, as the settings list draws it.
 *
 * The handle is the consent's own ID and not the client ID: ending an authorization is a
 * statement about this reader's grant, so the row they hold is the row they act on.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthorizedApp.Companion")))
@interface KsaypipCoreAuthorizedAppCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One application a reader has authorized, as the settings list draws it.
 *
 * The handle is the consent's own ID and not the client ID: ending an authorization is a
 * statement about this reader's grant, so the row they hold is the row they act on.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreAuthorizedAppCompanion *shared __attribute__((swift_name("shared")));

/**
 * One application a reader has authorized, as the settings list draws it.
 *
 * The handle is the consent's own ID and not the client ID: ending an authorization is a
 * statement about this reader's grant, so the row they hold is the row they act on.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One seat in a conversation.
 *
 * `side` is the conversation-local marker (`a` is the post's author, `b` started the
 * conversation), [person] is null where the viewer may not be shown who it is, and [isMe] says
 * whether this is the viewer's own seat.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreParticipant.Companion")))
@interface KsaypipCoreParticipantCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One seat in a conversation.
 *
 * `side` is the conversation-local marker (`a` is the post's author, `b` started the
 * conversation), [person] is null where the viewer may not be shown who it is, and [isMe] says
 * whether this is the viewer's own seat.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreParticipantCompanion *shared __attribute__((swift_name("shared")));

/**
 * One seat in a conversation.
 *
 * `side` is the conversation-local marker (`a` is the post's author, `b` started the
 * conversation), [person] is null where the viewer may not be shown who it is, and [isMe] says
 * whether this is the viewer's own seat.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A conversation as it appears in a list — all three lists return this shape.
 *
 * The post the conversation hangs off is referenced by ID only and never quoted: its body is
 * under the 7-day window for a non-friend, and a permanent list of excerpts would be that window
 * undone.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationDigest.Companion")))
@interface KsaypipCoreConversationDigestCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A conversation as it appears in a list — all three lists return this shape.
 *
 * The post the conversation hangs off is referenced by ID only and never quoted: its body is
 * under the 7-day window for a non-friend, and a permanent list of excerpts would be that window
 * undone.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreConversationDigestCompanion *shared __attribute__((swift_name("shared")));

/**
 * A conversation as it appears in a list — all three lists return this shape.
 *
 * The post the conversation hangs off is referenced by ID only and never quoted: its body is
 * under the 7-day window for a non-friend, and a permanent list of excerpts would be that window
 * undone.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The last thing said in a conversation, as a post row quotes it.
 *
 * `side` is the conversation-local seat, never a person: naming the speaker would put an author
 * identifier on a timeline row.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostLastReply")))
@interface KsaypipCorePostLastReply : KsaypipBase

/**
 * The last thing said in a conversation, as a post row quotes it.
 *
 * `side` is the conversation-local seat, never a person: naming the speaker would put an author
 * identifier on a timeline row.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The last thing said in a conversation, as a post row quotes it.
 *
 * `side` is the conversation-local seat, never a person: naming the speaker would put an author
 * identifier on a timeline row.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCorePostLastReplyCompanion *companion __attribute__((swift_name("companion")));
@property NSString *body __attribute__((swift_name("body")));
@property NSString *side __attribute__((swift_name("side")));
@end


/**
 * What many people are writing about: the one answer in this API that is the same for every
 * reader.
 *
 * `writers` is a cardinality, never attributable — the accounts are counted and discarded
 * inside one statement.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend.Companion")))
@interface KsaypipCoreTrendCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * What many people are writing about: the one answer in this API that is the same for every
 * reader.
 *
 * `writers` is a cardinality, never attributable — the accounts are counted and discarded
 * inside one statement.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreTrendCompanion *shared __attribute__((swift_name("shared")));

/**
 * What many people are writing about: the one answer in this API that is the same for every
 * reader.
 *
 * `writers` is a cardinality, never attributable — the accounts are counted and discarded
 * inside one statement.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A person, as one viewer sees them.
 *
 * There is no user object with a stable public ID in this API. [identity] is valid only for the
 * requesting viewer; two viewers get different tokens for the same person, and the token dies
 * with the relationship. [profile] is non-null only while a friendship is active.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePerson.Companion")))
@interface KsaypipCorePersonCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A person, as one viewer sees them.
 *
 * There is no user object with a stable public ID in this API. [identity] is valid only for the
 * requesting viewer; two viewers get different tokens for the same person, and the token dies
 * with the relationship. [profile] is non-null only while a friendship is active.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePersonCompanion *shared __attribute__((swift_name("shared")));

/**
 * A person, as one viewer sees them.
 *
 * There is no user object with a stable public ID in this API. [identity] is valid only for the
 * requesting viewer; two viewers get different tokens for the same person, and the token dies
 * with the relationship. [profile] is non-null only while a friendship is active.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One widget in the right-hand column, and whether the column draws it.
 *
 * A hidden widget is still in the arrangement, at its position, so that showing it again puts it
 * back where the reader had it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAsideWidgetItem.Companion")))
@interface KsaypipCoreAsideWidgetItemCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One widget in the right-hand column, and whether the column draws it.
 *
 * A hidden widget is still in the arrangement, at its position, so that showing it again puts it
 * back where the reader had it.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreAsideWidgetItemCompanion *shared __attribute__((swift_name("shared")));

/**
 * One widget in the right-hand column, and whether the column draws it.
 *
 * A hidden widget is still in the arrangement, at its position, so that showing it again puts it
 * back where the reader had it.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One person a reader is hiding, and until when. `endsAt` null is forever.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMute.Companion")))
@interface KsaypipCoreMuteCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One person a reader is hiding, and until when. `endsAt` null is forever.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreMuteCompanion *shared __attribute__((swift_name("shared")));

/**
 * One person a reader is hiding, and until when. `endsAt` null is forever.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One line in the notification list, either kind. Branch on [kind]:
 *
 * - `post.reaction` — somebody reacted to a post of yours. Fields: [postId], [postBody],
 *   [postImage], [reactions], [person], [peopleCount].
 * - `conversation.reply` — somebody replied in a conversation you are part of. Fields:
 *   [conversationId], [body], [person].
 *
 * `arrivedAt` and [readAt] are common to both.
 *
 * The two halves model different shapes, and this class carries both rather than a sealed union
 * because a discriminated union cannot be exported to JavaScript. Unknown fields are ignored on
 * decode; fields not belonging to the line's kind are null.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotification.Companion")))
@interface KsaypipCoreNotificationCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One line in the notification list, either kind. Branch on [kind]:
 *
 * - `post.reaction` — somebody reacted to a post of yours. Fields: [postId], [postBody],
 *   [postImage], [reactions], [person], [peopleCount].
 * - `conversation.reply` — somebody replied in a conversation you are part of. Fields:
 *   [conversationId], [body], [person].
 *
 * `arrivedAt` and [readAt] are common to both.
 *
 * The two halves model different shapes, and this class carries both rather than a sealed union
 * because a discriminated union cannot be exported to JavaScript. Unknown fields are ignored on
 * decode; fields not belonging to the line's kind are null.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreNotificationCompanion *shared __attribute__((swift_name("shared")));

/**
 * One line in the notification list, either kind. Branch on [kind]:
 *
 * - `post.reaction` — somebody reacted to a post of yours. Fields: [postId], [postBody],
 *   [postImage], [reactions], [person], [peopleCount].
 * - `conversation.reply` — somebody replied in a conversation you are part of. Fields:
 *   [conversationId], [body], [person].
 *
 * `arrivedAt` and [readAt] are common to both.
 *
 * The two halves model different shapes, and this class carries both rather than a sealed union
 * because a discriminated union cannot be exported to JavaScript. Unknown fields are ignored on
 * decode; fields not belonging to the line's kind are null.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One picture on the post a notification is about, and how many of it there are now.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationReaction")))
@interface KsaypipCoreNotificationReaction : KsaypipBase

/**
 * One picture on the post a notification is about, and how many of it there are now.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * One picture on the post a notification is about, and how many of it there are now.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KsaypipCoreNotificationReactionCompanion *companion __attribute__((swift_name("companion")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString *emoji __attribute__((swift_name("emoji")));
@end


/**
 * What is being said under a post: how much of it there is, and the last thing said.
 *
 * `mine` is the conversation this reader started, and only that: the author of a post is a
 * participant in every conversation on it, so the flag would say nothing on their own post.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostConversations.Companion")))
@interface KsaypipCorePostConversationsCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * What is being said under a post: how much of it there is, and the last thing said.
 *
 * `mine` is the conversation this reader started, and only that: the author of a post is a
 * participant in every conversation on it, so the flag would say nothing on their own post.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePostConversationsCompanion *shared __attribute__((swift_name("shared")));

/**
 * What is being said under a post: how much of it there is, and the last thing said.
 *
 * `mine` is the conversation this reader started, and only that: the author of a post is a
 * participant in every conversation on it, so the flag would say nothing on their own post.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One picture on a post, how many people put it there, and whether the viewer is one of them.
 *
 * A count, everywhere a post is carried. Who the people are is a second address,
 * `GET /api/posts/{postId}/reactions`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostReaction.Companion")))
@interface KsaypipCorePostReactionCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One picture on a post, how many people put it there, and whether the viewer is one of them.
 *
 * A count, everywhere a post is carried. Who the people are is a second address,
 * `GET /api/posts/{postId}/reactions`.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePostReactionCompanion *shared __attribute__((swift_name("shared")));

/**
 * One picture on a post, how many people put it there, and whether the viewer is one of them.
 *
 * A count, everywhere a post is carried. Who the people are is a second address,
 * `GET /api/posts/{postId}/reactions`.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The post a self-reply quotes, and the whole of what a quotation may carry.
 *
 * A bounded excerpt and no more: a post may quote one of its writer's own earlier posts, and the
 * quotation outlives the seven days the quoted post itself is readable. The excerpt is cut on
 * the server before serialization, and [media] holds at most the first picture.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreQuotedPost.Companion")))
@interface KsaypipCoreQuotedPostCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The post a self-reply quotes, and the whole of what a quotation may carry.
 *
 * A bounded excerpt and no more: a post may quote one of its writer's own earlier posts, and the
 * quotation outlives the seven days the quoted post itself is readable. The excerpt is cut on
 * the server before serialization, and [media] holds at most the first picture.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreQuotedPostCompanion *shared __attribute__((swift_name("shared")));

/**
 * The post a self-reply quotes, and the whole of what a quotation may carry.
 *
 * A bounded excerpt and no more: a post may quote one of its writer's own earlier posts, and the
 * quotation outlives the seven days the quoted post itself is readable. The excerpt is cut on
 * the server before serialization, and [media] holds at most the first picture.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The same picture with the people on it: what `GET /api/posts/{postId}/reactions` answers with,
 * and the only place in this API where a reaction is attributed.
 *
 * Empty `people` is an answer and a common one: everyone unnameable, the viewer themselves (who
 * is `mine`), and anyone either side has blocked are all in `count` and not in the array.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionWithPeople.Companion")))
@interface KsaypipCoreReactionWithPeopleCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The same picture with the people on it: what `GET /api/posts/{postId}/reactions` answers with,
 * and the only place in this API where a reaction is attributed.
 *
 * Empty `people` is an answer and a common one: everyone unnameable, the viewer themselves (who
 * is `mine`), and anyone either side has blocked are all in `count` and not in the array.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreReactionWithPeopleCompanion *shared __attribute__((swift_name("shared")));

/**
 * The same picture with the people on it: what `GET /api/posts/{postId}/reactions` answers with,
 * and the only place in this API where a reaction is attributed.
 *
 * Empty `people` is an answer and a common one: everyone unnameable, the viewer themselves (who
 * is `mine`), and anyone either side has blocked are all in `count` and not in the array.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One relationship in the viewer's own list.
 *
 * Neither the note nor the conversations are here: both are read on the relationship's own page.
 * `lastActivityAt` is a time and never a count.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationshipSummary.Companion")))
@interface KsaypipCoreRelationshipSummaryCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One relationship in the viewer's own list.
 *
 * Neither the note nor the conversations are here: both are read on the relationship's own page.
 * `lastActivityAt` is a time and never a count.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreRelationshipSummaryCompanion *shared __attribute__((swift_name("shared")));

/**
 * One relationship in the viewer's own list.
 *
 * Neither the note nor the conversations are here: both are read on the relationship's own page.
 * `lastActivityAt` is a time and never a count.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A pending friend request, as the viewer's own queue draws it.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFriendRequestState.Companion")))
@interface KsaypipCoreFriendRequestStateCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A pending friend request, as the viewer's own queue draws it.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreFriendRequestStateCompanion *shared __attribute__((swift_name("shared")));

/**
 * A pending friend request, as the viewer's own queue draws it.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The picture one viewer gave one person, for the screens that have no real one to show.
 *
 * Both halves are the viewer's own choice and both are usually null; `color` is always a key from
 * [MarkColor], never a colour value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMark.Companion")))
@interface KsaypipCoreMarkCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The picture one viewer gave one person, for the screens that have no real one to show.
 *
 * Both halves are the viewer's own choice and both are usually null; `color` is always a key from
 * [MarkColor], never a colour value.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreMarkCompanion *shared __attribute__((swift_name("shared")));

/**
 * The picture one viewer gave one person, for the screens that have no real one to show.
 *
 * Both halves are the viewer's own choice and both are usually null; `color` is always a key from
 * [MarkColor], never a colour value.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One word a reader is hiding, and the state of its window.
 *
 * Unlike a person mute, a spent row stays on the list: `endsAt` in the past with [active] false
 * is a word the reader can give a new window without typing it again.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWordMute.Companion")))
@interface KsaypipCoreWordMuteCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One word a reader is hiding, and the state of its window.
 *
 * Unlike a person mute, a spent row stays on the list: `endsAt` in the past with [active] false
 * is a word the reader can give a new window without typing it again.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreWordMuteCompanion *shared __attribute__((swift_name("shared")));

/**
 * One word a reader is hiding, and the state of its window.
 *
 * Unlike a person mute, a spent row stays on the list: `endsAt` in the past with [active] false
 * is a word the reader can give a new window without typing it again.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KsaypipKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KsaypipKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KsaypipKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KsaypipKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KsaypipKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KsaypipKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KsaypipKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KsaypipKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KsaypipKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KsaypipKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KsaypipKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KsaypipKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KsaypipKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KsaypipKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KsaypipKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KsaypipKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KsaypipKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KsaypipKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KsaypipKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * The last thing said in a conversation, as a post row quotes it.
 *
 * `side` is the conversation-local seat, never a person: naming the speaker would put an author
 * identifier on a timeline row.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePostLastReply.Companion")))
@interface KsaypipCorePostLastReplyCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The last thing said in a conversation, as a post row quotes it.
 *
 * `side` is the conversation-local seat, never a person: naming the speaker would put an author
 * identifier on a timeline row.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCorePostLastReplyCompanion *shared __attribute__((swift_name("shared")));

/**
 * The last thing said in a conversation, as a post row quotes it.
 *
 * `side` is the conversation-local seat, never a person: naming the speaker would put an author
 * identifier on a timeline row.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * One picture on the post a notification is about, and how many of it there are now.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationReaction.Companion")))
@interface KsaypipCoreNotificationReactionCompanion : KsaypipBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * One picture on the post a notification is about, and how many of it there are now.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KsaypipCoreNotificationReactionCompanion *shared __attribute__((swift_name("shared")));

/**
 * One picture on the post a notification is about, and how many of it there are now.
 */
- (id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KsaypipKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KsaypipKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KsaypipKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KsaypipKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KsaypipKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KsaypipKotlinx_serialization_coreSerializersModule : KsaypipBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KsaypipKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KsaypipKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KsaypipKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KsaypipKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KsaypipKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KsaypipKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KsaypipKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KsaypipKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KsaypipKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KsaypipKotlinx_serialization_coreSerialKind : KsaypipBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KsaypipKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KsaypipKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KsaypipKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KsaypipKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KsaypipKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KsaypipKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KsaypipKotlinNothing : KsaypipBase
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KsaypipKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KsaypipKotlinKClass>)kClass provider:(id<KsaypipKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KsaypipKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KsaypipKotlinKClass>)kClass serializer:(id<KsaypipKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KsaypipKotlinKClass>)baseClass actualClass:(id<KsaypipKotlinKClass>)actualClass actualSerializer:(id<KsaypipKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KsaypipKotlinKClass>)baseClass defaultDeserializerProvider:(id<KsaypipKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KsaypipKotlinKClass>)baseClass defaultDeserializerProvider:(id<KsaypipKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KsaypipKotlinKClass>)baseClass defaultSerializerProvider:(id<KsaypipKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KsaypipKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KsaypipKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KsaypipKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KsaypipKotlinKClass <KsaypipKotlinKDeclarationContainer, KsaypipKotlinKAnnotatedElement, KsaypipKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
