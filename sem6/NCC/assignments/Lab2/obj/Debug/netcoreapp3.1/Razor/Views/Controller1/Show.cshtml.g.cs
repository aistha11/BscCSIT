#pragma checksum "G:\BscCsit\sem6\NCC\assignments\Lab2\Views\Controller1\Show.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "8cf4640dd18d1a0254f2d0c529b75803c4a5454b"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Controller1_Show), @"mvc.1.0.view", @"/Views/Controller1/Show.cshtml")]
namespace AspNetCore
{
    #line hidden
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Threading.Tasks;
    using Microsoft.AspNetCore.Mvc;
    using Microsoft.AspNetCore.Mvc.Rendering;
    using Microsoft.AspNetCore.Mvc.ViewFeatures;
#nullable restore
#line 1 "G:\BscCsit\sem6\NCC\assignments\Lab2\Views\_ViewImports.cshtml"
using Lab2;

#line default
#line hidden
#nullable disable
#nullable restore
#line 2 "G:\BscCsit\sem6\NCC\assignments\Lab2\Views\_ViewImports.cshtml"
using Lab2.Models;

#line default
#line hidden
#nullable disable
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"8cf4640dd18d1a0254f2d0c529b75803c4a5454b", @"/Views/Controller1/Show.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"fd9d6898af3ee645766c02769f00bd7edd74cd52", @"/Views/_ViewImports.cshtml")]
    public class Views_Controller1_Show : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<dynamic>
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
            WriteLiteral("\r\n");
#nullable restore
#line 2 "G:\BscCsit\sem6\NCC\assignments\Lab2\Views\Controller1\Show.cshtml"
  
    ViewData["Title"] = "Show";
    Layout = "~/Views/Shared/_Layout.cshtml";

#line default
#line hidden
#nullable disable
            WriteLiteral("\r\n<h1>");
#nullable restore
#line 7 "G:\BscCsit\sem6\NCC\assignments\Lab2\Views\Controller1\Show.cshtml"
Write(ViewData["Message"]);

#line default
#line hidden
#nullable disable
            WriteLiteral("</h1>\r\n\r\n<h2>");
#nullable restore
#line 9 "G:\BscCsit\sem6\NCC\assignments\Lab2\Views\Controller1\Show.cshtml"
Write(ViewBag.Greet);

#line default
#line hidden
#nullable disable
            WriteLiteral("</h2>\r\n\r\n");
        }
        #pragma warning restore 1998
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.IModelExpressionProvider ModelExpressionProvider { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IUrlHelper Url { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IViewComponentHelper Component { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IJsonHelper Json { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<dynamic> Html { get; private set; }
    }
}
#pragma warning restore 1591