public class WikiPageResponder {
    protected WikiPage page;
    protected PageData pageData;
    protected String pageTitle;
    protected Request request;
    protected PageCrawler crawler;

    public Response makeResponse(FitNesseContext context, Request request) throws Exception {
        String pageName = getPageNameOrDefault(request, "FrontPage");
        loadPage(pageName, context);
        if (page == null)
            return notFoundResponse(context, request);
        else
            return makePageResponse(context);
    }

    private String getPageNameOrDefault(Request request, String defaultPageName) {
        String pageName = request.getResources();
        if (StringUtil.isBlank(pageName))
            pageName = defaultPageName;
        return pageName;

    }

    protected void loadPage(String resource, FitNesseContext context) throws Exception {
        return new NotFoundResponder().makeResponse(context, request);
    }

}